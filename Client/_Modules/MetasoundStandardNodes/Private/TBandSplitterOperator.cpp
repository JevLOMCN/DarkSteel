// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 114

// BindInputs @ 14afd2980

void __thiscall
Metasound::TBandSplitterOperator<5,2>::BindInputs
          (TBandSplitterOperator<5,2> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint local_res8;
  FName local_res18;
  FName local_res20;
  FScriptContainerElement *local_118;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_110;
  TDataReadReference<bool> *local_108;
  FScriptContainerElement *local_100;
  FName *local_f8;
  FScriptContainerElement *local_f0;
  code *local_e8;
  FScriptContainerElement **local_e0;
  code *local_d8;
  FName **local_d0;
  FName *local_c8;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_c0;
  code *local_b8;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> **local_b0;
  code *local_a8;
  FName **local_a0;
  FName *local_98;
  TDataReadReference<bool> *local_90;
  code *local_88;
  TDataReadReference<bool> **local_80;
  code *local_78;
  FName **local_70;
  FName *local_68;
  FScriptContainerElement *local_60;
  code *local_58;
  FScriptContainerElement **local_50;
  code *local_48;
  FName **local_40;
  
  local_res8 = 0;
  uVar3 = 0;
  do {
    if ((this->AudioInputs).ArrayNum <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->AudioInputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    if (AudioInputNames.ArrayNum <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_f8 = (FName *)(AudioInputNames.AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_e0 = &local_118;
    local_d0 = &local_f8;
    local_118 = pFVar4;
    local_f0 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,local_f8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_d8,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_e8);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  local_110 = &this->FilterOrder;
  local_b0 = &local_110;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a0 = &local_c8;
  local_c8 = &local_res18;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_c0 = local_110;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_b8)
  ;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  local_108 = &this->bPhaseCompensate;
  local_80 = &local_108;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = &local_98;
  local_98 = &local_res20;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_90 = local_108;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res20,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_78,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_88)
  ;
  do {
    if ((this->CrossoverFrequencies).ArrayNum <= (int)local_res8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->CrossoverFrequencies).AllocatorInstance.Data + (longlong)(int)local_res8 * 0x20;
    if (CrossoverInputNames.ArrayNum <= (int)local_res8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_68 = (FName *)(CrossoverInputNames.AllocatorInstance.Data + (longlong)(int)local_res8 * 8)
    ;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_50 = &local_100;
    local_40 = &local_68;
    local_100 = pFVar4;
    local_60 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,local_68,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_48,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_58);
    local_res8 = local_res8 + 1;
  } while (local_res8 < 4);
  return;
}

// BindOutputs @ 14afd2d50

void __thiscall
Metasound::TBandSplitterOperator<5,2>::BindOutputs
          (TBandSplitterOperator<5,2> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  FName local_res18;
  FScriptContainerElement *local_res20;
  FName *local_68;
  FScriptContainerElement *local_60;
  code *local_58;
  FScriptContainerElement **local_50;
  code *local_48;
  FName **local_40;
  
  uVar6 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar6 < (this->AudioOutputs).ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    uVar3 = 0;
    if ((int)uVar6 < AudioOutputNames.ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_res18 = *(FName *)(AudioOutputNames.AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
    local_50 = &local_res20;
    local_68 = &local_res18;
    local_40 = &local_68;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_res20 = pFVar5;
    local_60 = pFVar5;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_48
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_58);
    uVar3 = uVar6 + 1;
    uVar4 = 0;
    if ((int)uVar3 < (this->AudioOutputs).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    uVar4 = 0;
    if ((int)uVar3 < AudioOutputNames.ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_res18 = *(FName *)(AudioOutputNames.AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    local_50 = &local_res20;
    local_68 = &local_res18;
    local_40 = &local_68;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_res20 = pFVar5;
    local_60 = pFVar5;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_48
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_58);
    uVar6 = uVar6 + 2;
  } while (uVar6 < 10);
  return;
}

// BindInputs @ 14afd35b0

void __thiscall
Metasound::TBandSplitterOperator<4,2>::BindInputs
          (TBandSplitterOperator<4,2> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint local_res8;
  FName local_res18;
  FName local_res20;
  FScriptContainerElement *local_118;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_110;
  TDataReadReference<bool> *local_108;
  FScriptContainerElement *local_100;
  FName *local_f8;
  FScriptContainerElement *local_f0;
  code *local_e8;
  FScriptContainerElement **local_e0;
  code *local_d8;
  FName **local_d0;
  FName *local_c8;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_c0;
  code *local_b8;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> **local_b0;
  code *local_a8;
  FName **local_a0;
  FName *local_98;
  TDataReadReference<bool> *local_90;
  code *local_88;
  TDataReadReference<bool> **local_80;
  code *local_78;
  FName **local_70;
  FName *local_68;
  FScriptContainerElement *local_60;
  code *local_58;
  FScriptContainerElement **local_50;
  code *local_48;
  FName **local_40;
  
  local_res8 = 0;
  uVar3 = 0;
  do {
    if ((this->AudioInputs).ArrayNum <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->AudioInputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    if (AudioInputNames.ArrayNum <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_f8 = (FName *)(AudioInputNames.AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_e0 = &local_118;
    local_d0 = &local_f8;
    local_118 = pFVar4;
    local_f0 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,local_f8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_d8,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_e8);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  local_110 = &this->FilterOrder;
  local_b0 = &local_110;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a0 = &local_c8;
  local_c8 = &local_res18;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_c0 = local_110;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_b8)
  ;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  local_108 = &this->bPhaseCompensate;
  local_80 = &local_108;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = &local_98;
  local_98 = &local_res20;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_90 = local_108;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res20,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_78,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_88)
  ;
  do {
    if ((this->CrossoverFrequencies).ArrayNum <= (int)local_res8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->CrossoverFrequencies).AllocatorInstance.Data + (longlong)(int)local_res8 * 0x20;
    if (CrossoverInputNames.ArrayNum <= (int)local_res8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_68 = (FName *)(CrossoverInputNames.AllocatorInstance.Data + (longlong)(int)local_res8 * 8)
    ;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_50 = &local_100;
    local_40 = &local_68;
    local_100 = pFVar4;
    local_60 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,local_68,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_48,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_58);
    local_res8 = local_res8 + 1;
  } while (local_res8 < 3);
  return;
}

// BindOutputs @ 14afd3890

void __thiscall
Metasound::TBandSplitterOperator<4,2>::BindOutputs
          (TBandSplitterOperator<4,2> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  FName local_res18;
  FScriptContainerElement *local_res20;
  FName *local_68;
  FScriptContainerElement *local_60;
  code *local_58;
  FScriptContainerElement **local_50;
  code *local_48;
  FName **local_40;
  
  uVar6 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar6 < (this->AudioOutputs).ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    uVar3 = 0;
    if ((int)uVar6 < AudioOutputNames.ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_res18 = *(FName *)(AudioOutputNames.AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
    local_50 = &local_res20;
    local_68 = &local_res18;
    local_40 = &local_68;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_res20 = pFVar5;
    local_60 = pFVar5;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_48
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_58);
    uVar3 = uVar6 + 1;
    uVar4 = 0;
    if ((int)uVar3 < (this->AudioOutputs).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    uVar4 = 0;
    if ((int)uVar3 < AudioOutputNames.ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_res18 = *(FName *)(AudioOutputNames.AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    local_50 = &local_res20;
    local_68 = &local_res18;
    local_40 = &local_68;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_res20 = pFVar5;
    local_60 = pFVar5;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_48
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_58);
    uVar6 = uVar6 + 2;
  } while (uVar6 < 8);
  return;
}

// BindInputs @ 14afd4050

void __thiscall
Metasound::TBandSplitterOperator<3,2>::BindInputs
          (TBandSplitterOperator<3,2> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint local_res8;
  FName local_res18;
  FName local_res20;
  FScriptContainerElement *local_118;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_110;
  TDataReadReference<bool> *local_108;
  FScriptContainerElement *local_100;
  FName *local_f8;
  FScriptContainerElement *local_f0;
  code *local_e8;
  FScriptContainerElement **local_e0;
  code *local_d8;
  FName **local_d0;
  FName *local_c8;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_c0;
  code *local_b8;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> **local_b0;
  code *local_a8;
  FName **local_a0;
  FName *local_98;
  TDataReadReference<bool> *local_90;
  code *local_88;
  TDataReadReference<bool> **local_80;
  code *local_78;
  FName **local_70;
  FName *local_68;
  FScriptContainerElement *local_60;
  code *local_58;
  FScriptContainerElement **local_50;
  code *local_48;
  FName **local_40;
  
  local_res8 = 0;
  uVar3 = 0;
  do {
    if ((this->AudioInputs).ArrayNum <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->AudioInputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    if (AudioInputNames.ArrayNum <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_f8 = (FName *)(AudioInputNames.AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_e0 = &local_118;
    local_d0 = &local_f8;
    local_118 = pFVar4;
    local_f0 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,local_f8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_d8,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_e8);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  local_110 = &this->FilterOrder;
  local_b0 = &local_110;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a0 = &local_c8;
  local_c8 = &local_res18;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_c0 = local_110;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_b8)
  ;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  local_108 = &this->bPhaseCompensate;
  local_80 = &local_108;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_70 = &local_98;
  local_98 = &local_res20;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_90 = local_108;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res20,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_78,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_88)
  ;
  do {
    if ((this->CrossoverFrequencies).ArrayNum <= (int)local_res8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->CrossoverFrequencies).AllocatorInstance.Data + (longlong)(int)local_res8 * 0x20;
    if (CrossoverInputNames.ArrayNum <= (int)local_res8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_68 = (FName *)(CrossoverInputNames.AllocatorInstance.Data + (longlong)(int)local_res8 * 8)
    ;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_50 = &local_100;
    local_40 = &local_68;
    local_100 = pFVar4;
    local_60 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,local_68,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_48,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_58);
    local_res8 = local_res8 + 1;
  } while (local_res8 < 2);
  return;
}

// BindOutputs @ 14afd4330

void __thiscall
Metasound::TBandSplitterOperator<3,2>::BindOutputs
          (TBandSplitterOperator<3,2> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  FName local_res18;
  FScriptContainerElement *local_res20;
  FName *local_68;
  FScriptContainerElement *local_60;
  code *local_58;
  FScriptContainerElement **local_50;
  code *local_48;
  FName **local_40;
  
  uVar6 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar6 < (this->AudioOutputs).ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    uVar3 = 0;
    if ((int)uVar6 < AudioOutputNames.ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_res18 = *(FName *)(AudioOutputNames.AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
    local_50 = &local_res20;
    local_68 = &local_res18;
    local_40 = &local_68;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_res20 = pFVar5;
    local_60 = pFVar5;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_48
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_58);
    uVar3 = uVar6 + 1;
    uVar4 = 0;
    if ((int)uVar3 < (this->AudioOutputs).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    uVar4 = 0;
    if ((int)uVar3 < AudioOutputNames.ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_res18 = *(FName *)(AudioOutputNames.AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    local_50 = &local_res20;
    local_68 = &local_res18;
    local_40 = &local_68;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_res20 = pFVar5;
    local_60 = pFVar5;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_48
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_58);
    uVar6 = uVar6 + 2;
  } while (uVar6 < 6);
  return;
}

// BindInputs @ 14afd5080

void __thiscall
Metasound::TBandSplitterOperator<2,2>::BindInputs
          (TBandSplitterOperator<2,2> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8;
  FName local_res18;
  FScriptContainerElement *local_res20;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_118;
  TDataReadReference<bool> *local_110;
  FScriptContainerElement *local_108;
  FName *local_100;
  FScriptContainerElement *local_f8;
  code *local_f0;
  FScriptContainerElement **local_e8;
  code *local_e0;
  FName **local_d8;
  FName *local_d0;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_c8;
  code *local_c0;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> **local_b8;
  code *local_b0;
  FName **local_a8;
  FName *local_a0;
  TDataReadReference<bool> *local_98;
  code *local_90;
  TDataReadReference<bool> **local_88;
  code *local_80;
  FName **local_78;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  
  uVar3 = 0;
  do {
    if ((this->AudioInputs).ArrayNum <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->AudioInputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    if (AudioInputNames.ArrayNum <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_100 = (FName *)(AudioInputNames.AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_e8 = &local_res20;
    local_d8 = &local_100;
    local_res20 = pFVar4;
    local_f8 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,local_100,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_e0,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_f0);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  local_118 = &this->FilterOrder;
  local_b8 = &local_118;
  local_c0 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a8 = &local_d0;
  local_d0 = &local_res8;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_c8 = local_118;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_b0,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_c0)
  ;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  local_110 = &this->bPhaseCompensate;
  local_88 = &local_110;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = &local_res18;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_110;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  if ((this->CrossoverFrequencies).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = (this->CrossoverFrequencies).AllocatorInstance.Data;
  if (CrossoverInputNames.ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_58 = &local_108;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48 = &local_70;
  local_70 = CrossoverInputNames.AllocatorInstance.Data;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_108 = pFVar4;
  local_68 = pFVar4;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)CrossoverInputNames.AllocatorInstance.Data,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_60)
  ;
  return;
}

// BindOutputs @ 14afd5340

void __thiscall
Metasound::TBandSplitterOperator<2,2>::BindOutputs
          (TBandSplitterOperator<2,2> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  FName local_res18;
  FScriptContainerElement *local_res20;
  FName *local_68;
  FScriptContainerElement *local_60;
  code *local_58;
  FScriptContainerElement **local_50;
  code *local_48;
  FName **local_40;
  
  uVar6 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar6 < (this->AudioOutputs).ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
    uVar3 = 0;
    if ((int)uVar6 < AudioOutputNames.ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_res18 = *(FName *)(AudioOutputNames.AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
    local_50 = &local_res20;
    local_68 = &local_res18;
    local_40 = &local_68;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_res20 = pFVar5;
    local_60 = pFVar5;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_48
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_58);
    uVar3 = uVar6 + 1;
    uVar4 = 0;
    if ((int)uVar3 < (this->AudioOutputs).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    uVar4 = 0;
    if ((int)uVar3 < AudioOutputNames.ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_res18 = *(FName *)(AudioOutputNames.AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    local_50 = &local_res20;
    local_68 = &local_res18;
    local_40 = &local_68;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_res20 = pFVar5;
    local_60 = pFVar5;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_48
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_58);
    uVar6 = uVar6 + 2;
  } while (uVar6 < 4);
  return;
}

// BindInputs @ 14afd5e00

void __thiscall
Metasound::TBandSplitterOperator<5,1>::BindInputs
          (TBandSplitterOperator<5,1> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8;
  FName local_res18;
  FScriptContainerElement *local_res20;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_118;
  TDataReadReference<bool> *local_110;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  code *local_f0;
  FScriptContainerElement **local_e8;
  code *local_e0;
  FScriptContainerElement **local_d8;
  FName *local_d0;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_c8;
  code *local_c0;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> **local_b8;
  code *local_b0;
  FName **local_a8;
  FName *local_a0;
  TDataReadReference<bool> *local_98;
  code *local_90;
  TDataReadReference<bool> **local_88;
  code *local_80;
  FName **local_78;
  FName *local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName **local_48;
  
  uVar3 = 0;
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = (this->AudioInputs).AllocatorInstance.Data;
  if (AudioInputNames.ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_e8 = &local_res20;
  local_f0 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_d8 = &local_100;
  local_100 = AudioInputNames.AllocatorInstance.Data;
  local_e0 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pFVar4;
  local_f8 = pFVar4;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)AudioInputNames.AllocatorInstance.Data,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_e0,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_f0)
  ;
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  local_118 = &this->FilterOrder;
  local_b8 = &local_118;
  local_c0 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a8 = &local_d0;
  local_d0 = &local_res8;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_c8 = local_118;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_b0,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_c0)
  ;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  local_110 = &this->bPhaseCompensate;
  local_88 = &local_110;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = &local_res18;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_110;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  do {
    if ((this->CrossoverFrequencies).ArrayNum <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->CrossoverFrequencies).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    if (CrossoverInputNames.ArrayNum <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_70 = (FName *)(CrossoverInputNames.AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_58 = &local_108;
    local_48 = &local_70;
    local_108 = pFVar4;
    local_68 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  return;
}

// BindOutputs @ 14afd6100

void __thiscall
Metasound::TBandSplitterOperator<5,1>::BindOutputs
          (TBandSplitterOperator<5,1> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  FName local_res18;
  FScriptContainerElement *local_res20;
  FName *local_68;
  FScriptContainerElement *local_60;
  code *local_58;
  FScriptContainerElement **local_50;
  code *local_48;
  FName **local_40;
  
  uVar5 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar5 < (this->AudioOutputs).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20;
    uVar3 = 0;
    if ((int)uVar5 < AudioOutputNames.ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_res18 = *(FName *)(AudioOutputNames.AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
    local_50 = &local_res20;
    local_68 = &local_res18;
    local_40 = &local_68;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_res20 = pFVar4;
    local_60 = pFVar4;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_48
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_58);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 5);
  return;
}

// BindInputs @ 14afd6a20

void __thiscall
Metasound::TBandSplitterOperator<4,1>::BindInputs
          (TBandSplitterOperator<4,1> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8;
  FName local_res18;
  FScriptContainerElement *local_res20;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_118;
  TDataReadReference<bool> *local_110;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  code *local_f0;
  FScriptContainerElement **local_e8;
  code *local_e0;
  FScriptContainerElement **local_d8;
  FName *local_d0;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_c8;
  code *local_c0;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> **local_b8;
  code *local_b0;
  FName **local_a8;
  FName *local_a0;
  TDataReadReference<bool> *local_98;
  code *local_90;
  TDataReadReference<bool> **local_88;
  code *local_80;
  FName **local_78;
  FName *local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName **local_48;
  
  uVar3 = 0;
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = (this->AudioInputs).AllocatorInstance.Data;
  if (AudioInputNames.ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_e8 = &local_res20;
  local_f0 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_d8 = &local_100;
  local_100 = AudioInputNames.AllocatorInstance.Data;
  local_e0 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pFVar4;
  local_f8 = pFVar4;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)AudioInputNames.AllocatorInstance.Data,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_e0,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_f0)
  ;
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  local_118 = &this->FilterOrder;
  local_b8 = &local_118;
  local_c0 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a8 = &local_d0;
  local_d0 = &local_res8;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_c8 = local_118;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_b0,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_c0)
  ;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  local_110 = &this->bPhaseCompensate;
  local_88 = &local_110;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = &local_res18;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_110;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  do {
    if ((this->CrossoverFrequencies).ArrayNum <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->CrossoverFrequencies).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    if (CrossoverInputNames.ArrayNum <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_70 = (FName *)(CrossoverInputNames.AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_58 = &local_108;
    local_48 = &local_70;
    local_108 = pFVar4;
    local_68 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return;
}

// BindOutputs @ 14afd6ce0

void __thiscall
Metasound::TBandSplitterOperator<4,1>::BindOutputs
          (TBandSplitterOperator<4,1> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  FName local_res18;
  FScriptContainerElement *local_res20;
  FName *local_68;
  FScriptContainerElement *local_60;
  code *local_58;
  FScriptContainerElement **local_50;
  code *local_48;
  FName **local_40;
  
  uVar5 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar5 < (this->AudioOutputs).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20;
    uVar3 = 0;
    if ((int)uVar5 < AudioOutputNames.ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_res18 = *(FName *)(AudioOutputNames.AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
    local_50 = &local_res20;
    local_68 = &local_res18;
    local_40 = &local_68;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_res20 = pFVar4;
    local_60 = pFVar4;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_48
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_58);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  return;
}

// BindInputs @ 14afd78d0

void __thiscall
Metasound::TBandSplitterOperator<3,1>::BindInputs
          (TBandSplitterOperator<3,1> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8;
  FName local_res18;
  FScriptContainerElement *local_res20;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_118;
  TDataReadReference<bool> *local_110;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  code *local_f0;
  FScriptContainerElement **local_e8;
  code *local_e0;
  FScriptContainerElement **local_d8;
  FName *local_d0;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_c8;
  code *local_c0;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> **local_b8;
  code *local_b0;
  FName **local_a8;
  FName *local_a0;
  TDataReadReference<bool> *local_98;
  code *local_90;
  TDataReadReference<bool> **local_88;
  code *local_80;
  FName **local_78;
  FName *local_70;
  FScriptContainerElement *local_68;
  code *local_60;
  FScriptContainerElement **local_58;
  code *local_50;
  FName **local_48;
  
  uVar3 = 0;
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = (this->AudioInputs).AllocatorInstance.Data;
  if (AudioInputNames.ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_e8 = &local_res20;
  local_f0 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_d8 = &local_100;
  local_100 = AudioInputNames.AllocatorInstance.Data;
  local_e0 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pFVar4;
  local_f8 = pFVar4;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)AudioInputNames.AllocatorInstance.Data,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_e0,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_f0)
  ;
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  local_118 = &this->FilterOrder;
  local_b8 = &local_118;
  local_c0 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a8 = &local_d0;
  local_d0 = &local_res8;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_c8 = local_118;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_b0,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_c0)
  ;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  local_110 = &this->bPhaseCompensate;
  local_88 = &local_110;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_a0;
  local_a0 = &local_res18;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_98 = local_110;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_80,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_90)
  ;
  do {
    if ((this->CrossoverFrequencies).ArrayNum <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->CrossoverFrequencies).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
    if (CrossoverInputNames.ArrayNum <= (int)uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_70 = (FName *)(CrossoverInputNames.AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_58 = &local_108;
    local_48 = &local_70;
    local_108 = pFVar4;
    local_68 = pFVar4;
    FInputVertexInterfaceData::Apply
              (param_1,local_70,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_50,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_60);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return;
}

// BindOutputs @ 14afd7b90

void __thiscall
Metasound::TBandSplitterOperator<3,1>::BindOutputs
          (TBandSplitterOperator<3,1> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  FName local_res18;
  FScriptContainerElement *local_res20;
  FName *local_68;
  FScriptContainerElement *local_60;
  code *local_58;
  FScriptContainerElement **local_50;
  code *local_48;
  FName **local_40;
  
  uVar5 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar5 < (this->AudioOutputs).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20;
    uVar3 = 0;
    if ((int)uVar5 < AudioOutputNames.ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_res18 = *(FName *)(AudioOutputNames.AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
    local_50 = &local_res20;
    local_68 = &local_res18;
    local_40 = &local_68;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_res20 = pFVar4;
    local_60 = pFVar4;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_48
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_58);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  return;
}

// BindInputs @ 14afd87e0

void __thiscall
Metasound::TBandSplitterOperator<2,1>::BindInputs
          (TBandSplitterOperator<2,1> *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8 [2];
  FName local_res18;
  FScriptContainerElement *local_res20;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_108;
  TDataReadReference<bool> *local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  FScriptContainerElement *local_e8;
  code *local_e0;
  FScriptContainerElement **local_d8;
  code *local_d0;
  FScriptContainerElement **local_c8;
  FName *local_c0;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *local_b8;
  code *local_b0;
  TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> **local_a8;
  code *local_a0;
  FName **local_98;
  FName *local_90;
  TDataReadReference<bool> *local_88;
  code *local_80;
  TDataReadReference<bool> **local_78;
  code *local_70;
  FName **local_68;
  FScriptContainerElement *local_60;
  FScriptContainerElement *local_58;
  code *local_50;
  FScriptContainerElement **local_48;
  code *local_40;
  FScriptContainerElement **local_38;
  
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->AudioInputs).AllocatorInstance.Data;
  if (AudioInputNames.ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_d8 = &local_res20;
  local_e0 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_c8 = &local_f0;
  local_f0 = AudioInputNames.AllocatorInstance.Data;
  local_d0 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res20 = pFVar1;
  local_e8 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)AudioInputNames.AllocatorInstance.Data,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_d0,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_e0)
  ;
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  local_108 = &this->FilterOrder;
  local_a8 = &local_108;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_98 = &local_c0;
  local_c0 = local_res8;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_b8 = local_108;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a0,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_b0)
  ;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  local_100 = &this->bPhaseCompensate;
  local_78 = &local_100;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_68 = &local_90;
  local_90 = &local_res18;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_88 = local_100;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_70,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_80)
  ;
  if ((this->CrossoverFrequencies).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->CrossoverFrequencies).AllocatorInstance.Data;
  if (CrossoverInputNames.ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48 = &local_f8;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_60;
  local_60 = CrossoverInputNames.AllocatorInstance.Data;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_f8 = pFVar1;
  local_58 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,(FName *)CrossoverInputNames.AllocatorInstance.Data,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_40,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_50)
  ;
  return;
}

// BindOutputs @ 14afd8a60

void __thiscall
Metasound::TBandSplitterOperator<2,1>::BindOutputs
          (TBandSplitterOperator<2,1> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  FName local_res18;
  FScriptContainerElement *local_res20;
  FName *local_68;
  FScriptContainerElement *local_60;
  code *local_58;
  FScriptContainerElement **local_50;
  code *local_48;
  FName **local_40;
  
  uVar5 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar5 < (this->AudioOutputs).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20;
    uVar3 = 0;
    if ((int)uVar5 < AudioOutputNames.ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_res18 = *(FName *)(AudioOutputNames.AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
    local_50 = &local_res20;
    local_68 = &local_res18;
    local_40 = &local_68;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_res20 = pFVar4;
    local_60 = pFVar4;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_48
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_58);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  return;
}

// TBandSplitterOperator<2,1> @ 14afef540

TBandSplitterOperator<2,1> * __thiscall
Metasound::TBandSplitterOperator<2,1>::TBandSplitterOperator<2,1>
          (TBandSplitterOperator<2,1> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3
          ,TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *param_4,
          TDataReadReference<bool> *param_5)

{
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  TArray<Audio::FLinkwitzRileyBandSplitter,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Audio::FMultibandBuffer,TSizedDefaultAllocator<32>_> *pTVar7;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar8;
  TDataReadReference<float> *pTVar9;
  FMultibandBuffer *this_00;
  TDataReference<Metasound::FAudioBuffer> *pTVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  TBandSplitterOperator<2,1> *pTVar17;
  longlong lVar18;
  EFilterOrder EVar19;
  TDataReference<Metasound::FAudioBuffer> local_48;
  
  pTVar1 = &this->AudioInputs;
  this->_padding_ = (longlong)&___7__TBandSplitterOperator__01_00_Metasound__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AudioInputs).ArrayMax;
  iVar16 = param_2->ArrayNum;
  pTVar8 = (TDataReadReference<Metasound::FAudioBuffer> *)(param_2->AllocatorInstance).Data;
  (this->AudioInputs).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar16,0,&pTVar1->AllocatorInstance,iVar16,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar8,iVar16);
  }
  pTVar3 = &this->CrossoverFrequencies;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CrossoverFrequencies).ArrayMax;
  iVar16 = param_3->ArrayNum;
  pTVar9 = (TDataReadReference<float> *)(param_3->AllocatorInstance).Data;
  (this->CrossoverFrequencies).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar16,0,&pTVar3->AllocatorInstance,iVar16,piVar2);
    ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar9,iVar16);
  }
  pTVar4 = &this->Crossovers;
  (this->Crossovers).ArrayNum = 0;
  (this->Crossovers).ArrayMax = 0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Crossovers).ArrayMax;
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->FilterOrder).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar18 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->FilterOrder).field_0x10 = lVar18;
  if (lVar18 != 0) {
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
  }
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bPhaseCompensate).field_0x8 =
       *(undefined8 *)(CONCAT71(param_5._1_7_,param_5._0_1_) + 8);
  lVar18 = *(longlong *)(CONCAT71(param_5._1_7_,param_5._0_1_) + 0x10);
  *(longlong *)&(this->bPhaseCompensate).field_0x10 = lVar18;
  if (lVar18 != 0) {
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
  }
  EVar19 = EightPole;
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReadReference__N_Metasound__6B_;
  pTVar5 = &this->AudioOutputs;
  pTVar6 = &this->Filters;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar7 = &this->MultiBandBuffers;
  (this->AudioOutputs).ArrayNum = 0;
  (this->AudioOutputs).ArrayMax = 0;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Filters).ArrayNum = 0;
  (this->Filters).ArrayMax = 0;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MultiBandBuffers).ArrayNum = 0;
  (this->MultiBandBuffers).ArrayMax = 0;
  fVar13 = param_1->TargetBlockRate;
  fVar14 = param_1->ActualBlockRate;
  iVar16 = param_1->NumFramesPerBlock;
  (this->Settings).SampleRate = param_1->SampleRate;
  (this->Settings).TargetBlockRate = fVar13;
  (this->Settings).ActualBlockRate = fVar14;
  (this->Settings).NumFramesPerBlock = iVar16;
  (this->Crossovers).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar4->AllocatorInstance,0,piVar2);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,&pTVar4->AllocatorInstance,&(this->Crossovers).ArrayNum,piVar2);
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar16 = **(int **)&param_4->field_0x8;
  if (iVar16 != 0) {
    if (iVar16 == 1) {
      EVar19 = FourPole;
      goto LAB_14afef780;
    }
    if (iVar16 == 2) {
      EVar19 = SixPole;
      goto LAB_14afef780;
    }
    if (iVar16 == 3) goto LAB_14afef780;
    param_5._0_1_ = 0;
    `Metasound::TBandSplitterOperator<2,1>::GetFilterOrder'::__l4::<lambda_1>::operator()(&param_5);
  }
  EVar19 = TwoPole;
LAB_14afef780:
  this->PrevFilterOrder = EVar19;
  piVar2 = &(this->MultiBandBuffers).ArrayMax;
  iVar16 = (this->MultiBandBuffers).ArrayNum;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar7->AllocatorInstance,piVar2);
  }
  (this->MultiBandBuffers).ArrayNum = iVar16 + 1;
  DefaultConstructItems<Audio::FMultibandBuffer,int>
            ((pTVar7->AllocatorInstance).Data + (longlong)iVar16 * 0x18,1);
  iVar16 = (this->Filters).ArrayNum;
  piVar2 = &(this->Filters).ArrayMax;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x870,&pTVar6->AllocatorInstance,piVar2);
  }
  (this->Filters).ArrayNum = iVar16 + 1;
  DefaultConstructItems<Audio::FLinkwitzRileyBandSplitter,int>
            ((pTVar6->AllocatorInstance).Data + (longlong)iVar16 * 0x70,1);
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<2,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  this_00 = (FMultibandBuffer *)(pTVar7->AllocatorInstance).Data;
  this_00->NumBands = 2;
  Audio::FMultibandBuffer::Reset(this_00);
  if ((this->Filters).ArrayNum < 1) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<2,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  Audio::FLinkwitzRileyBandSplitter::Init
            ((FLinkwitzRileyBandSplitter *)(pTVar6->AllocatorInstance).Data,1,
             (float)param_1->SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,pTVar4);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_48,NewObject,param_1);
  pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
  local_48._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar10 <= &local_48) && (&local_48 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<2,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  iVar16 = (this->AudioOutputs).ArrayNum;
  if (iVar16 == (this->AudioOutputs).ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
  }
  pFVar11 = (pTVar5->AllocatorInstance).Data;
  (this->AudioOutputs).ArrayNum = iVar16 + 1;
  lVar18 = (longlong)iVar16 * 0x20;
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar11 + lVar18 + 8) = local_48.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar11 + lVar18 + 0x10) =
       local_48.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_48.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_48,NewObject,param_1);
  pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
  local_48._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar10 <= &local_48) && (&local_48 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<2,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  iVar16 = (this->AudioOutputs).ArrayNum;
  if (iVar16 == (this->AudioOutputs).ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
  }
  (this->AudioOutputs).ArrayNum = iVar16 + 1;
  pFVar11 = (pTVar5->AllocatorInstance).Data;
  lVar18 = (longlong)iVar16 * 0x20;
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar11 + lVar18 + 8) = local_48.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar11 + lVar18 + 0x10) =
       local_48.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_48.ObjectReference.SharedReferenceCount.ReferenceController);
  return this;
}

// TBandSplitterOperator<2,2> @ 14afefab0

TBandSplitterOperator<2,2> * __thiscall
Metasound::TBandSplitterOperator<2,2>::TBandSplitterOperator<2,2>
          (TBandSplitterOperator<2,2> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3
          ,TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *param_4,
          TDataReadReference<bool> *param_5)

{
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  int *piVar3;
  FMultibandBuffer *this_00;
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  TArray<Audio::FMultibandBuffer,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Audio::FLinkwitzRileyBandSplitter,TSizedDefaultAllocator<32>_> *pTVar7;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar8;
  TDataReadReference<float> *pTVar9;
  TDataReference<Metasound::FAudioBuffer> *pTVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  int iVar17;
  TBandSplitterOperator<2,2> *pTVar18;
  longlong lVar19;
  uint uVar20;
  EFilterOrder EVar21;
  TDataReference<Metasound::FAudioBuffer> local_48;
  
  pTVar1 = &this->AudioInputs;
  uVar20 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7__TBandSplitterOperator__01_01_Metasound__6B_;
  iVar17 = param_2->ArrayNum;
  piVar2 = &(this->AudioInputs).ArrayMax;
  pTVar8 = (TDataReadReference<Metasound::FAudioBuffer> *)(param_2->AllocatorInstance).Data;
  (this->AudioInputs).ArrayNum = iVar17;
  if (iVar17 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar17,0,&pTVar1->AllocatorInstance,iVar17,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar8,iVar17);
  }
  pTVar4 = &this->CrossoverFrequencies;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CrossoverFrequencies).ArrayMax;
  iVar17 = param_3->ArrayNum;
  pTVar9 = (TDataReadReference<float> *)(param_3->AllocatorInstance).Data;
  (this->CrossoverFrequencies).ArrayNum = iVar17;
  if (iVar17 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar17,0,&pTVar4->AllocatorInstance,iVar17,piVar2);
    ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
              ((pTVar4->AllocatorInstance).Data,pTVar9,iVar17);
  }
  lVar13 = CONCAT71(param_4._1_7_,param_4._0_1_);
  (this->Crossovers).ArrayNum = 0;
  (this->Crossovers).ArrayMax = 0;
  piVar2 = &(this->Crossovers).ArrayNum;
  (this->Crossovers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->Crossovers).ArrayMax;
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->FilterOrder).field_0x8 = *(undefined8 *)(lVar13 + 8);
  lVar19 = *(longlong *)(lVar13 + 0x10);
  *(longlong *)&(this->FilterOrder).field_0x10 = lVar19;
  if (lVar19 != 0) {
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
  }
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bPhaseCompensate).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar19 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->bPhaseCompensate).field_0x10 = lVar19;
  if (lVar19 != 0) {
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
  }
  EVar21 = EightPole;
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReadReference__N_Metasound__6B_;
  pTVar5 = &this->AudioOutputs;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioOutputs).ArrayNum = 0;
  (this->AudioOutputs).ArrayMax = 0;
  (this->Filters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filters).ArrayNum = 0;
  (this->Filters).ArrayMax = 0;
  (this->MultiBandBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MultiBandBuffers).ArrayNum = 0;
  (this->MultiBandBuffers).ArrayMax = 0;
  fVar14 = param_1->TargetBlockRate;
  fVar15 = param_1->ActualBlockRate;
  iVar17 = param_1->NumFramesPerBlock;
  (this->Settings).SampleRate = param_1->SampleRate;
  (this->Settings).TargetBlockRate = fVar14;
  (this->Settings).ActualBlockRate = fVar15;
  (this->Settings).NumFramesPerBlock = iVar17;
  *piVar2 = 0;
  if (*piVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Crossovers).AllocatorInstance,0,piVar3);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,&(this->Crossovers).AllocatorInstance,piVar2,piVar3);
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar17 = **(int **)(lVar13 + 8);
  if (iVar17 != 0) {
    if (iVar17 == 1) {
      EVar21 = FourPole;
      goto LAB_14afefce3;
    }
    if (iVar17 == 2) {
      EVar21 = SixPole;
      goto LAB_14afefce3;
    }
    if (iVar17 == 3) goto LAB_14afefce3;
    param_4._0_1_ = 0;
    `Metasound::TBandSplitterOperator<2,2>::GetFilterOrder'::__l4::<lambda_1>::operator()(&param_4);
  }
  EVar21 = TwoPole;
LAB_14afefce3:
  this->PrevFilterOrder = EVar21;
  pTVar6 = &this->MultiBandBuffers;
  pTVar7 = &this->Filters;
  do {
    iVar17 = (this->MultiBandBuffers).ArrayNum;
    if (iVar17 == (this->MultiBandBuffers).ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar6->AllocatorInstance,&(this->MultiBandBuffers).ArrayMax);
    }
    (this->MultiBandBuffers).ArrayNum = iVar17 + 1;
    DefaultConstructItems<Audio::FMultibandBuffer,int>
              ((pTVar6->AllocatorInstance).Data + (longlong)iVar17 * 0x18,1);
    iVar17 = (this->Filters).ArrayNum;
    if (iVar17 == (this->Filters).ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x870,&pTVar7->AllocatorInstance,&(this->Filters).ArrayMax);
    }
    (this->Filters).ArrayNum = iVar17 + 1;
    DefaultConstructItems<Audio::FLinkwitzRileyBandSplitter,int>
              ((pTVar7->AllocatorInstance).Data + (longlong)iVar17 * 0x70,1);
    if ((this->MultiBandBuffers).ArrayNum <= (int)uVar20) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        pTVar18 = (TBandSplitterOperator<2,2> *)(*pcVar12)();
        return pTVar18;
      }
    }
    this_00 = (FMultibandBuffer *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x18);
    this_00->NumBands = 2;
    Audio::FMultibandBuffer::Reset(this_00);
    if ((this->Filters).ArrayNum <= (int)uVar20) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        pTVar18 = (TBandSplitterOperator<2,2> *)(*pcVar12)();
        return pTVar18;
      }
    }
    Audio::FLinkwitzRileyBandSplitter::Init
              ((FLinkwitzRileyBandSplitter *)
               ((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x70),1,
               (float)param_1->SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,
               &this->Crossovers);
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_48,NewObject,param_1);
    pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
    local_48._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar10 <= &local_48) && (&local_48 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        pTVar18 = (TBandSplitterOperator<2,2> *)(*pcVar12)();
        return pTVar18;
      }
    }
    iVar17 = (this->AudioOutputs).ArrayNum;
    if (iVar17 == (this->AudioOutputs).ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
    }
    pFVar11 = (pTVar5->AllocatorInstance).Data;
    (this->AudioOutputs).ArrayNum = iVar17 + 1;
    lVar19 = (longlong)iVar17 * 0x20;
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar11 + lVar19 + 8) = local_48.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar11 + lVar19 + 0x10) =
         local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_48.ObjectReference.SharedReferenceCount.ReferenceController);
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_48,NewObject,param_1);
    pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
    local_48._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar10 <= &local_48) && (&local_48 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        pTVar18 = (TBandSplitterOperator<2,2> *)(*pcVar12)();
        return pTVar18;
      }
    }
    iVar17 = (this->AudioOutputs).ArrayNum;
    if (iVar17 == (this->AudioOutputs).ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
    }
    (this->AudioOutputs).ArrayNum = iVar17 + 1;
    pFVar11 = (pTVar5->AllocatorInstance).Data;
    lVar19 = (longlong)iVar17 * 0x20;
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar11 + lVar19 + 8) = local_48.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar11 + lVar19 + 0x10) =
         local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_48.ObjectReference.SharedReferenceCount.ReferenceController);
    uVar20 = uVar20 + 1;
  } while (uVar20 < 2);
  return this;
}

// TBandSplitterOperator<3,1> @ 14aff0070

TBandSplitterOperator<3,1> * __thiscall
Metasound::TBandSplitterOperator<3,1>::TBandSplitterOperator<3,1>
          (TBandSplitterOperator<3,1> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3
          ,TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *param_4,
          TDataReadReference<bool> *param_5)

{
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  TArray<Audio::FLinkwitzRileyBandSplitter,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Audio::FMultibandBuffer,TSizedDefaultAllocator<32>_> *pTVar7;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar8;
  TDataReadReference<float> *pTVar9;
  FMultibandBuffer *this_00;
  TDataReference<Metasound::FAudioBuffer> *pTVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  TBandSplitterOperator<3,1> *pTVar17;
  longlong lVar18;
  EFilterOrder EVar19;
  TDataReference<Metasound::FAudioBuffer> local_58;
  
  pTVar1 = &this->AudioInputs;
  this->_padding_ = (longlong)&___7__TBandSplitterOperator__02_00_Metasound__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AudioInputs).ArrayMax;
  iVar16 = param_2->ArrayNum;
  pTVar8 = (TDataReadReference<Metasound::FAudioBuffer> *)(param_2->AllocatorInstance).Data;
  (this->AudioInputs).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar16,0,&pTVar1->AllocatorInstance,iVar16,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar8,iVar16);
  }
  pTVar3 = &this->CrossoverFrequencies;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CrossoverFrequencies).ArrayMax;
  iVar16 = param_3->ArrayNum;
  pTVar9 = (TDataReadReference<float> *)(param_3->AllocatorInstance).Data;
  (this->CrossoverFrequencies).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar16,0,&pTVar3->AllocatorInstance,iVar16,piVar2);
    ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar9,iVar16);
  }
  (this->Crossovers).ArrayNum = 0;
  piVar2 = &(this->Crossovers).ArrayNum;
  (this->Crossovers).ArrayMax = 0;
  (this->Crossovers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar4 = &(this->Crossovers).ArrayMax;
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->FilterOrder).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar18 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->FilterOrder).field_0x10 = lVar18;
  if (lVar18 != 0) {
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
  }
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bPhaseCompensate).field_0x8 =
       *(undefined8 *)(CONCAT71(param_5._1_7_,param_5._0_1_) + 8);
  lVar18 = *(longlong *)(CONCAT71(param_5._1_7_,param_5._0_1_) + 0x10);
  *(longlong *)&(this->bPhaseCompensate).field_0x10 = lVar18;
  if (lVar18 != 0) {
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
  }
  EVar19 = EightPole;
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReadReference__N_Metasound__6B_;
  pTVar5 = &this->AudioOutputs;
  pTVar6 = &this->Filters;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar7 = &this->MultiBandBuffers;
  (this->AudioOutputs).ArrayNum = 0;
  (this->AudioOutputs).ArrayMax = 0;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Filters).ArrayNum = 0;
  (this->Filters).ArrayMax = 0;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MultiBandBuffers).ArrayNum = 0;
  (this->MultiBandBuffers).ArrayMax = 0;
  fVar13 = param_1->TargetBlockRate;
  fVar14 = param_1->ActualBlockRate;
  iVar16 = param_1->NumFramesPerBlock;
  (this->Settings).SampleRate = param_1->SampleRate;
  (this->Settings).TargetBlockRate = fVar13;
  (this->Settings).ActualBlockRate = fVar14;
  (this->Settings).NumFramesPerBlock = iVar16;
  *piVar2 = 0;
  if (*piVar4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Crossovers).AllocatorInstance,0,piVar4);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,&(this->Crossovers).AllocatorInstance,piVar2,piVar4);
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar16 = **(int **)&param_4->field_0x8;
  if (iVar16 != 0) {
    if (iVar16 == 1) {
      EVar19 = FourPole;
      goto LAB_14aff029b;
    }
    if (iVar16 == 2) {
      EVar19 = SixPole;
      goto LAB_14aff029b;
    }
    if (iVar16 == 3) goto LAB_14aff029b;
    param_5._0_1_ = 0;
    `Metasound::TBandSplitterOperator<3,1>::GetFilterOrder'::__l4::<lambda_1>::operator()(&param_5);
  }
  EVar19 = TwoPole;
LAB_14aff029b:
  this->PrevFilterOrder = EVar19;
  piVar2 = &(this->MultiBandBuffers).ArrayMax;
  iVar16 = (this->MultiBandBuffers).ArrayNum;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar7->AllocatorInstance,piVar2);
  }
  (this->MultiBandBuffers).ArrayNum = iVar16 + 1;
  DefaultConstructItems<Audio::FMultibandBuffer,int>
            ((pTVar7->AllocatorInstance).Data + (longlong)iVar16 * 0x18,1);
  iVar16 = (this->Filters).ArrayNum;
  piVar2 = &(this->Filters).ArrayMax;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x870,&pTVar6->AllocatorInstance,piVar2);
  }
  (this->Filters).ArrayNum = iVar16 + 1;
  DefaultConstructItems<Audio::FLinkwitzRileyBandSplitter,int>
            ((pTVar6->AllocatorInstance).Data + (longlong)iVar16 * 0x70,1);
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<3,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  this_00 = (FMultibandBuffer *)(pTVar7->AllocatorInstance).Data;
  this_00->NumBands = 3;
  Audio::FMultibandBuffer::Reset(this_00);
  if ((this->Filters).ArrayNum < 1) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<3,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  Audio::FLinkwitzRileyBandSplitter::Init
            ((FLinkwitzRileyBandSplitter *)(pTVar6->AllocatorInstance).Data,1,
             (float)param_1->SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,
             &this->Crossovers);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_58,NewObject,param_1);
  pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
  local_58._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar10 <= &local_58) && (&local_58 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<3,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  iVar16 = (this->AudioOutputs).ArrayNum;
  if (iVar16 == (this->AudioOutputs).ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
  }
  pFVar11 = (pTVar5->AllocatorInstance).Data;
  (this->AudioOutputs).ArrayNum = iVar16 + 1;
  lVar18 = (longlong)iVar16 * 0x20;
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar11 + lVar18 + 8) = local_58.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar11 + lVar18 + 0x10) =
       local_58.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_58.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_58.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_58,NewObject,param_1);
  pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
  local_58._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar10 <= &local_58) && (&local_58 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<3,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  iVar16 = (this->AudioOutputs).ArrayNum;
  if (iVar16 == (this->AudioOutputs).ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
  }
  (this->AudioOutputs).ArrayNum = iVar16 + 1;
  pFVar11 = (pTVar5->AllocatorInstance).Data;
  lVar18 = (longlong)iVar16 * 0x20;
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar11 + lVar18 + 8) = local_58.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar11 + lVar18 + 0x10) =
       local_58.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_58.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_58.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_58,NewObject,param_1);
  pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
  local_58._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar10 <= &local_58) && (&local_58 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<3,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  iVar16 = (this->AudioOutputs).ArrayNum;
  if (iVar16 == (this->AudioOutputs).ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
  }
  (this->AudioOutputs).ArrayNum = iVar16 + 1;
  pFVar11 = (pTVar5->AllocatorInstance).Data;
  lVar18 = (longlong)iVar16 * 0x20;
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar11 + lVar18 + 8) = local_58.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar11 + lVar18 + 0x10) =
       local_58.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_58.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_58.ObjectReference.SharedReferenceCount.ReferenceController);
  return this;
}

// TBandSplitterOperator<3,2> @ 14aff0690

TBandSplitterOperator<3,2> * __thiscall
Metasound::TBandSplitterOperator<3,2>::TBandSplitterOperator<3,2>
          (TBandSplitterOperator<3,2> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3
          ,TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *param_4,
          TDataReadReference<bool> *param_5)

{
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  TArray<Audio::FMultibandBuffer,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Audio::FLinkwitzRileyBandSplitter,TSizedDefaultAllocator<32>_> *pTVar7;
  FMultibandBuffer *this_00;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar8;
  TDataReadReference<float> *pTVar9;
  TDataReference<Metasound::FAudioBuffer> *pTVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  int iVar17;
  TBandSplitterOperator<3,2> *pTVar18;
  longlong lVar19;
  EFilterOrder EVar20;
  uint uVar21;
  TDataReference<Metasound::FAudioBuffer> local_48;
  
  pTVar1 = &this->AudioInputs;
  uVar21 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7__TBandSplitterOperator__02_01_Metasound__6B_;
  iVar17 = param_2->ArrayNum;
  piVar2 = &(this->AudioInputs).ArrayMax;
  pTVar8 = (TDataReadReference<Metasound::FAudioBuffer> *)(param_2->AllocatorInstance).Data;
  (this->AudioInputs).ArrayNum = iVar17;
  if (iVar17 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar17,0,&pTVar1->AllocatorInstance,iVar17,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar8,iVar17);
  }
  pTVar3 = &this->CrossoverFrequencies;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CrossoverFrequencies).ArrayMax;
  iVar17 = param_3->ArrayNum;
  pTVar9 = (TDataReadReference<float> *)(param_3->AllocatorInstance).Data;
  (this->CrossoverFrequencies).ArrayNum = iVar17;
  if (iVar17 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar17,0,&pTVar3->AllocatorInstance,iVar17,piVar2);
    ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar9,iVar17);
  }
  lVar13 = CONCAT71(param_4._1_7_,param_4._0_1_);
  (this->Crossovers).ArrayNum = 0;
  (this->Crossovers).ArrayMax = 0;
  piVar2 = &(this->Crossovers).ArrayNum;
  (this->Crossovers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar4 = &(this->Crossovers).ArrayMax;
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->FilterOrder).field_0x8 = *(undefined8 *)(lVar13 + 8);
  lVar19 = *(longlong *)(lVar13 + 0x10);
  *(longlong *)&(this->FilterOrder).field_0x10 = lVar19;
  if (lVar19 != 0) {
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
  }
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bPhaseCompensate).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar19 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->bPhaseCompensate).field_0x10 = lVar19;
  if (lVar19 != 0) {
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
  }
  EVar20 = EightPole;
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReadReference__N_Metasound__6B_;
  pTVar5 = &this->AudioOutputs;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioOutputs).ArrayNum = 0;
  (this->AudioOutputs).ArrayMax = 0;
  (this->Filters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filters).ArrayNum = 0;
  (this->Filters).ArrayMax = 0;
  (this->MultiBandBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MultiBandBuffers).ArrayNum = 0;
  (this->MultiBandBuffers).ArrayMax = 0;
  fVar14 = param_1->TargetBlockRate;
  fVar15 = param_1->ActualBlockRate;
  iVar17 = param_1->NumFramesPerBlock;
  (this->Settings).SampleRate = param_1->SampleRate;
  (this->Settings).TargetBlockRate = fVar14;
  (this->Settings).ActualBlockRate = fVar15;
  (this->Settings).NumFramesPerBlock = iVar17;
  *piVar2 = 0;
  if (*piVar4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Crossovers).AllocatorInstance,0,piVar4);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,&(this->Crossovers).AllocatorInstance,piVar2,piVar4);
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar17 = **(int **)(lVar13 + 8);
  if (iVar17 != 0) {
    if (iVar17 == 1) {
      EVar20 = FourPole;
      goto LAB_14aff08a6;
    }
    if (iVar17 == 2) {
      EVar20 = SixPole;
      goto LAB_14aff08a6;
    }
    if (iVar17 == 3) goto LAB_14aff08a6;
    param_4._0_1_ = 0;
    `Metasound::TBandSplitterOperator<3,2>::GetFilterOrder'::__l4::<lambda_1>::operator()(&param_4);
  }
  EVar20 = TwoPole;
LAB_14aff08a6:
  this->PrevFilterOrder = EVar20;
  pTVar6 = &this->MultiBandBuffers;
  pTVar7 = &this->Filters;
  do {
    iVar17 = (this->MultiBandBuffers).ArrayNum;
    if (iVar17 == (this->MultiBandBuffers).ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar6->AllocatorInstance,&(this->MultiBandBuffers).ArrayMax);
    }
    (this->MultiBandBuffers).ArrayNum = iVar17 + 1;
    DefaultConstructItems<Audio::FMultibandBuffer,int>
              ((pTVar6->AllocatorInstance).Data + (longlong)iVar17 * 0x18,1);
    iVar17 = (this->Filters).ArrayNum;
    if (iVar17 == (this->Filters).ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x870,&pTVar7->AllocatorInstance,&(this->Filters).ArrayMax);
    }
    (this->Filters).ArrayNum = iVar17 + 1;
    DefaultConstructItems<Audio::FLinkwitzRileyBandSplitter,int>
              ((pTVar7->AllocatorInstance).Data + (longlong)iVar17 * 0x70,1);
    if ((this->MultiBandBuffers).ArrayNum <= (int)uVar21) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        pTVar18 = (TBandSplitterOperator<3,2> *)(*pcVar12)();
        return pTVar18;
      }
    }
    this_00 = (FMultibandBuffer *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x18);
    this_00->NumBands = 3;
    Audio::FMultibandBuffer::Reset(this_00);
    if ((this->Filters).ArrayNum <= (int)uVar21) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        pTVar18 = (TBandSplitterOperator<3,2> *)(*pcVar12)();
        return pTVar18;
      }
    }
    Audio::FLinkwitzRileyBandSplitter::Init
              ((FLinkwitzRileyBandSplitter *)
               ((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x70),1,
               (float)param_1->SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,
               &this->Crossovers);
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_48,NewObject,param_1);
    pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
    local_48._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    piVar2 = &(this->AudioOutputs).ArrayMax;
    if ((pTVar10 <= &local_48) && (&local_48 < pTVar10 + *piVar2)) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        pTVar18 = (TBandSplitterOperator<3,2> *)(*pcVar12)();
        return pTVar18;
      }
    }
    iVar17 = (this->AudioOutputs).ArrayNum;
    if (iVar17 == *piVar2) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar5->AllocatorInstance,piVar2);
    }
    pFVar11 = (pTVar5->AllocatorInstance).Data;
    (this->AudioOutputs).ArrayNum = iVar17 + 1;
    lVar19 = (longlong)iVar17 * 0x20;
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar11 + lVar19 + 8) = local_48.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar11 + lVar19 + 0x10) =
         local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_48.ObjectReference.SharedReferenceCount.ReferenceController);
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_48,NewObject,param_1);
    pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
    local_48._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar10 <= &local_48) && (&local_48 < pTVar10 + *piVar2)) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        pTVar18 = (TBandSplitterOperator<3,2> *)(*pcVar12)();
        return pTVar18;
      }
    }
    iVar17 = (this->AudioOutputs).ArrayNum;
    if (iVar17 == *piVar2) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar5->AllocatorInstance,piVar2);
    }
    (this->AudioOutputs).ArrayNum = iVar17 + 1;
    pFVar11 = (pTVar5->AllocatorInstance).Data;
    lVar19 = (longlong)iVar17 * 0x20;
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar11 + lVar19 + 8) = local_48.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar11 + lVar19 + 0x10) =
         local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_48.ObjectReference.SharedReferenceCount.ReferenceController);
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_48,NewObject,param_1);
    pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
    local_48._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar10 <= &local_48) && (&local_48 < pTVar10 + *piVar2)) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        pTVar18 = (TBandSplitterOperator<3,2> *)(*pcVar12)();
        return pTVar18;
      }
    }
    iVar17 = (this->AudioOutputs).ArrayNum;
    if (iVar17 == *piVar2) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar5->AllocatorInstance,piVar2);
    }
    (this->AudioOutputs).ArrayNum = iVar17 + 1;
    pFVar11 = (pTVar5->AllocatorInstance).Data;
    lVar19 = (longlong)iVar17 * 0x20;
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar11 + lVar19 + 8) = local_48.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar11 + lVar19 + 0x10) =
         local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_48.ObjectReference.SharedReferenceCount.ReferenceController);
    uVar21 = uVar21 + 1;
  } while (uVar21 < 2);
  return this;
}

// TBandSplitterOperator<4,1> @ 14aff0d00

TBandSplitterOperator<4,1> * __thiscall
Metasound::TBandSplitterOperator<4,1>::TBandSplitterOperator<4,1>
          (TBandSplitterOperator<4,1> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3
          ,TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *param_4,
          TDataReadReference<bool> *param_5)

{
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  TArray<Audio::FLinkwitzRileyBandSplitter,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Audio::FMultibandBuffer,TSizedDefaultAllocator<32>_> *pTVar7;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar8;
  TDataReadReference<float> *pTVar9;
  FMultibandBuffer *this_00;
  TDataReference<Metasound::FAudioBuffer> *pTVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  TBandSplitterOperator<4,1> *pTVar17;
  longlong lVar18;
  EFilterOrder EVar19;
  TDataReference<Metasound::FAudioBuffer> local_48;
  
  pTVar1 = &this->AudioInputs;
  this->_padding_ = (longlong)&___7__TBandSplitterOperator__03_00_Metasound__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AudioInputs).ArrayMax;
  iVar16 = param_2->ArrayNum;
  pTVar8 = (TDataReadReference<Metasound::FAudioBuffer> *)(param_2->AllocatorInstance).Data;
  (this->AudioInputs).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar16,0,&pTVar1->AllocatorInstance,iVar16,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar8,iVar16);
  }
  pTVar3 = &this->CrossoverFrequencies;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CrossoverFrequencies).ArrayMax;
  iVar16 = param_3->ArrayNum;
  pTVar9 = (TDataReadReference<float> *)(param_3->AllocatorInstance).Data;
  (this->CrossoverFrequencies).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar16,0,&pTVar3->AllocatorInstance,iVar16,piVar2);
    ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar9,iVar16);
  }
  pTVar4 = &this->Crossovers;
  (this->Crossovers).ArrayNum = 0;
  (this->Crossovers).ArrayMax = 0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Crossovers).ArrayMax;
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->FilterOrder).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar18 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->FilterOrder).field_0x10 = lVar18;
  if (lVar18 != 0) {
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
  }
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bPhaseCompensate).field_0x8 =
       *(undefined8 *)(CONCAT71(param_5._1_7_,param_5._0_1_) + 8);
  lVar18 = *(longlong *)(CONCAT71(param_5._1_7_,param_5._0_1_) + 0x10);
  *(longlong *)&(this->bPhaseCompensate).field_0x10 = lVar18;
  if (lVar18 != 0) {
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
  }
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReadReference__N_Metasound__6B_;
  pTVar5 = &this->AudioOutputs;
  pTVar6 = &this->Filters;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar7 = &this->MultiBandBuffers;
  (this->AudioOutputs).ArrayNum = 0;
  (this->AudioOutputs).ArrayMax = 0;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Filters).ArrayNum = 0;
  (this->Filters).ArrayMax = 0;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MultiBandBuffers).ArrayNum = 0;
  (this->MultiBandBuffers).ArrayMax = 0;
  fVar13 = param_1->TargetBlockRate;
  fVar14 = param_1->ActualBlockRate;
  iVar16 = param_1->NumFramesPerBlock;
  (this->Settings).SampleRate = param_1->SampleRate;
  (this->Settings).TargetBlockRate = fVar13;
  (this->Settings).ActualBlockRate = fVar14;
  (this->Settings).NumFramesPerBlock = iVar16;
  (this->Crossovers).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar4->AllocatorInstance,0,piVar2);
  }
  EVar19 = SixPole;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,&pTVar4->AllocatorInstance,&(this->Crossovers).ArrayNum,piVar2);
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar16 = **(int **)&param_4->field_0x8;
  if (iVar16 != 0) {
    if (iVar16 == 1) {
      EVar19 = FourPole;
      goto LAB_14aff0f30;
    }
    if (iVar16 == 2) goto LAB_14aff0f30;
    if (iVar16 == 3) {
      EVar19 = EightPole;
      goto LAB_14aff0f30;
    }
    param_5._0_1_ = 0;
    `Metasound::TBandSplitterOperator<4,1>::GetFilterOrder'::__l4::<lambda_1>::operator()(&param_5);
  }
  EVar19 = TwoPole;
LAB_14aff0f30:
  this->PrevFilterOrder = EVar19;
  piVar2 = &(this->MultiBandBuffers).ArrayMax;
  iVar16 = (this->MultiBandBuffers).ArrayNum;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar7->AllocatorInstance,piVar2);
  }
  (this->MultiBandBuffers).ArrayNum = iVar16 + 1;
  DefaultConstructItems<Audio::FMultibandBuffer,int>
            ((pTVar7->AllocatorInstance).Data + (longlong)iVar16 * 0x18,1);
  iVar16 = (this->Filters).ArrayNum;
  piVar2 = &(this->Filters).ArrayMax;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x870,&pTVar6->AllocatorInstance,piVar2);
  }
  (this->Filters).ArrayNum = iVar16 + 1;
  DefaultConstructItems<Audio::FLinkwitzRileyBandSplitter,int>
            ((pTVar6->AllocatorInstance).Data + (longlong)iVar16 * 0x70,1);
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<4,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  this_00 = (FMultibandBuffer *)(pTVar7->AllocatorInstance).Data;
  this_00->NumBands = 4;
  Audio::FMultibandBuffer::Reset(this_00);
  if ((this->Filters).ArrayNum < 1) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<4,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  Audio::FLinkwitzRileyBandSplitter::Init
            ((FLinkwitzRileyBandSplitter *)(pTVar6->AllocatorInstance).Data,1,
             (float)param_1->SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,pTVar4);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_48,NewObject,param_1);
  pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
  local_48._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar10 <= &local_48) && (&local_48 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<4,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  iVar16 = (this->AudioOutputs).ArrayNum;
  if (iVar16 == (this->AudioOutputs).ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
  }
  pFVar11 = (pTVar5->AllocatorInstance).Data;
  (this->AudioOutputs).ArrayNum = iVar16 + 1;
  lVar18 = (longlong)iVar16 * 0x20;
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar11 + lVar18 + 8) = local_48.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar11 + lVar18 + 0x10) =
       local_48.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_48.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_48,NewObject,param_1);
  pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
  local_48._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar10 <= &local_48) && (&local_48 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<4,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  iVar16 = (this->AudioOutputs).ArrayNum;
  if (iVar16 == (this->AudioOutputs).ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
  }
  (this->AudioOutputs).ArrayNum = iVar16 + 1;
  pFVar11 = (pTVar5->AllocatorInstance).Data;
  lVar18 = (longlong)iVar16 * 0x20;
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar11 + lVar18 + 8) = local_48.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar11 + lVar18 + 0x10) =
       local_48.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_48.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_48,NewObject,param_1);
  pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
  local_48._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar10 <= &local_48) && (&local_48 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<4,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  iVar16 = (this->AudioOutputs).ArrayNum;
  if (iVar16 == (this->AudioOutputs).ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
  }
  (this->AudioOutputs).ArrayNum = iVar16 + 1;
  pFVar11 = (pTVar5->AllocatorInstance).Data;
  lVar18 = (longlong)iVar16 * 0x20;
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar11 + lVar18 + 8) = local_48.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar11 + lVar18 + 0x10) =
       local_48.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_48.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_48,NewObject,param_1);
  pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
  local_48._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar10 <= &local_48) && (&local_48 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<4,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  iVar16 = (this->AudioOutputs).ArrayNum;
  if (iVar16 == (this->AudioOutputs).ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
  }
  (this->AudioOutputs).ArrayNum = iVar16 + 1;
  pFVar11 = (pTVar5->AllocatorInstance).Data;
  lVar18 = (longlong)iVar16 * 0x20;
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar11 + lVar18 + 8) = local_48.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar11 + lVar18 + 0x10) =
       local_48.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_48.ObjectReference.SharedReferenceCount.ReferenceController);
  return this;
}

// TBandSplitterOperator<4,2> @ 14aff1400

TBandSplitterOperator<4,2> * __thiscall
Metasound::TBandSplitterOperator<4,2>::TBandSplitterOperator<4,2>
          (TBandSplitterOperator<4,2> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3
          ,TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *param_4,
          TDataReadReference<bool> *param_5)

{
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  TArray<Audio::FMultibandBuffer,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Audio::FLinkwitzRileyBandSplitter,TSizedDefaultAllocator<32>_> *pTVar7;
  FMultibandBuffer *this_00;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar8;
  TDataReadReference<float> *pTVar9;
  TDataReference<Metasound::FAudioBuffer> *pTVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  int iVar17;
  TBandSplitterOperator<4,2> *pTVar18;
  longlong lVar19;
  EFilterOrder EVar20;
  uint uVar21;
  TDataReference<Metasound::FAudioBuffer> local_48;
  
  pTVar1 = &this->AudioInputs;
  uVar21 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7__TBandSplitterOperator__03_01_Metasound__6B_;
  iVar17 = param_2->ArrayNum;
  piVar2 = &(this->AudioInputs).ArrayMax;
  pTVar8 = (TDataReadReference<Metasound::FAudioBuffer> *)(param_2->AllocatorInstance).Data;
  (this->AudioInputs).ArrayNum = iVar17;
  if (iVar17 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar17,0,&pTVar1->AllocatorInstance,iVar17,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar8,iVar17);
  }
  pTVar3 = &this->CrossoverFrequencies;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CrossoverFrequencies).ArrayMax;
  iVar17 = param_3->ArrayNum;
  pTVar9 = (TDataReadReference<float> *)(param_3->AllocatorInstance).Data;
  (this->CrossoverFrequencies).ArrayNum = iVar17;
  if (iVar17 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar17,0,&pTVar3->AllocatorInstance,iVar17,piVar2);
    ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar9,iVar17);
  }
  lVar13 = CONCAT71(param_4._1_7_,param_4._0_1_);
  (this->Crossovers).ArrayNum = 0;
  (this->Crossovers).ArrayMax = 0;
  piVar2 = &(this->Crossovers).ArrayNum;
  (this->Crossovers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar4 = &(this->Crossovers).ArrayMax;
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->FilterOrder).field_0x8 = *(undefined8 *)(lVar13 + 8);
  lVar19 = *(longlong *)(lVar13 + 0x10);
  *(longlong *)&(this->FilterOrder).field_0x10 = lVar19;
  if (lVar19 != 0) {
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
  }
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bPhaseCompensate).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar19 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->bPhaseCompensate).field_0x10 = lVar19;
  if (lVar19 != 0) {
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
  }
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReadReference__N_Metasound__6B_;
  pTVar5 = &this->AudioOutputs;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioOutputs).ArrayNum = 0;
  (this->AudioOutputs).ArrayMax = 0;
  (this->Filters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filters).ArrayNum = 0;
  (this->Filters).ArrayMax = 0;
  (this->MultiBandBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MultiBandBuffers).ArrayNum = 0;
  (this->MultiBandBuffers).ArrayMax = 0;
  fVar14 = param_1->TargetBlockRate;
  fVar15 = param_1->ActualBlockRate;
  iVar17 = param_1->NumFramesPerBlock;
  (this->Settings).SampleRate = param_1->SampleRate;
  (this->Settings).TargetBlockRate = fVar14;
  (this->Settings).ActualBlockRate = fVar15;
  (this->Settings).NumFramesPerBlock = iVar17;
  *piVar2 = 0;
  if (*piVar4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Crossovers).AllocatorInstance,0,piVar4);
  }
  EVar20 = SixPole;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,&(this->Crossovers).AllocatorInstance,piVar2,piVar4);
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar17 = **(int **)(lVar13 + 8);
  if (iVar17 != 0) {
    if (iVar17 == 1) {
      EVar20 = FourPole;
      goto LAB_14aff1618;
    }
    if (iVar17 == 2) goto LAB_14aff1618;
    if (iVar17 == 3) {
      EVar20 = EightPole;
      goto LAB_14aff1618;
    }
    param_4._0_1_ = 0;
    `Metasound::TBandSplitterOperator<4,2>::GetFilterOrder'::__l4::<lambda_1>::operator()(&param_4);
  }
  EVar20 = TwoPole;
LAB_14aff1618:
  this->PrevFilterOrder = EVar20;
  pTVar6 = &this->MultiBandBuffers;
  pTVar7 = &this->Filters;
  do {
    iVar17 = (this->MultiBandBuffers).ArrayNum;
    if (iVar17 == (this->MultiBandBuffers).ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar6->AllocatorInstance,&(this->MultiBandBuffers).ArrayMax);
    }
    (this->MultiBandBuffers).ArrayNum = iVar17 + 1;
    DefaultConstructItems<Audio::FMultibandBuffer,int>
              ((pTVar6->AllocatorInstance).Data + (longlong)iVar17 * 0x18,1);
    iVar17 = (this->Filters).ArrayNum;
    if (iVar17 == (this->Filters).ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x870,&pTVar7->AllocatorInstance,&(this->Filters).ArrayMax);
    }
    (this->Filters).ArrayNum = iVar17 + 1;
    DefaultConstructItems<Audio::FLinkwitzRileyBandSplitter,int>
              ((pTVar7->AllocatorInstance).Data + (longlong)iVar17 * 0x70,1);
    if ((this->MultiBandBuffers).ArrayNum <= (int)uVar21) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        pTVar18 = (TBandSplitterOperator<4,2> *)(*pcVar12)();
        return pTVar18;
      }
    }
    this_00 = (FMultibandBuffer *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x18);
    this_00->NumBands = 4;
    Audio::FMultibandBuffer::Reset(this_00);
    if ((this->Filters).ArrayNum <= (int)uVar21) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        pTVar18 = (TBandSplitterOperator<4,2> *)(*pcVar12)();
        return pTVar18;
      }
    }
    Audio::FLinkwitzRileyBandSplitter::Init
              ((FLinkwitzRileyBandSplitter *)
               ((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x70),1,
               (float)param_1->SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,
               &this->Crossovers);
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_48,NewObject,param_1);
    pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
    local_48._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar10 <= &local_48) && (&local_48 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        pTVar18 = (TBandSplitterOperator<4,2> *)(*pcVar12)();
        return pTVar18;
      }
    }
    iVar17 = (this->AudioOutputs).ArrayNum;
    if (iVar17 == (this->AudioOutputs).ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
    }
    pFVar11 = (pTVar5->AllocatorInstance).Data;
    (this->AudioOutputs).ArrayNum = iVar17 + 1;
    lVar19 = (longlong)iVar17 * 0x20;
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar11 + lVar19 + 8) = local_48.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar11 + lVar19 + 0x10) =
         local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_48.ObjectReference.SharedReferenceCount.ReferenceController);
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_48,NewObject,param_1);
    pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
    local_48._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar10 <= &local_48) && (&local_48 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        pTVar18 = (TBandSplitterOperator<4,2> *)(*pcVar12)();
        return pTVar18;
      }
    }
    iVar17 = (this->AudioOutputs).ArrayNum;
    if (iVar17 == (this->AudioOutputs).ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
    }
    (this->AudioOutputs).ArrayNum = iVar17 + 1;
    pFVar11 = (pTVar5->AllocatorInstance).Data;
    lVar19 = (longlong)iVar17 * 0x20;
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar11 + lVar19 + 8) = local_48.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar11 + lVar19 + 0x10) =
         local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_48.ObjectReference.SharedReferenceCount.ReferenceController);
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_48,NewObject,param_1);
    pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
    local_48._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar10 <= &local_48) && (&local_48 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        pTVar18 = (TBandSplitterOperator<4,2> *)(*pcVar12)();
        return pTVar18;
      }
    }
    iVar17 = (this->AudioOutputs).ArrayNum;
    if (iVar17 == (this->AudioOutputs).ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
    }
    (this->AudioOutputs).ArrayNum = iVar17 + 1;
    pFVar11 = (pTVar5->AllocatorInstance).Data;
    lVar19 = (longlong)iVar17 * 0x20;
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar11 + lVar19 + 8) = local_48.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar11 + lVar19 + 0x10) =
         local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_48.ObjectReference.SharedReferenceCount.ReferenceController);
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_48,NewObject,param_1);
    pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
    local_48._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar10 <= &local_48) && (&local_48 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar16) {
        pcVar12 = (code *)swi(3);
        pTVar18 = (TBandSplitterOperator<4,2> *)(*pcVar12)();
        return pTVar18;
      }
    }
    iVar17 = (this->AudioOutputs).ArrayNum;
    if (iVar17 == (this->AudioOutputs).ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
    }
    (this->AudioOutputs).ArrayNum = iVar17 + 1;
    pFVar11 = (pTVar5->AllocatorInstance).Data;
    lVar19 = (longlong)iVar17 * 0x20;
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar11 + lVar19 + 8) = local_48.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar11 + lVar19 + 0x10) =
         local_48.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_48.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_48.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar11 + lVar19) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_48.ObjectReference.SharedReferenceCount.ReferenceController);
    uVar21 = uVar21 + 1;
  } while (uVar21 < 2);
  return this;
}

// TBandSplitterOperator<5,1> @ 14aff1b60

TBandSplitterOperator<5,1> * __thiscall
Metasound::TBandSplitterOperator<5,1>::TBandSplitterOperator<5,1>
          (TBandSplitterOperator<5,1> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3
          ,TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *param_4,
          TDataReadReference<bool> *param_5)

{
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  TArray<Audio::FLinkwitzRileyBandSplitter,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<Audio::FMultibandBuffer,TSizedDefaultAllocator<32>_> *pTVar7;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar8;
  TDataReadReference<float> *pTVar9;
  FMultibandBuffer *this_00;
  TDataReference<Metasound::FAudioBuffer> *pTVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  TBandSplitterOperator<5,1> *pTVar17;
  longlong lVar18;
  EFilterOrder EVar19;
  TDataReference<Metasound::FAudioBuffer> local_58;
  
  pTVar1 = &this->AudioInputs;
  this->_padding_ = (longlong)&___7__TBandSplitterOperator__04_00_Metasound__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AudioInputs).ArrayMax;
  iVar16 = param_2->ArrayNum;
  pTVar8 = (TDataReadReference<Metasound::FAudioBuffer> *)(param_2->AllocatorInstance).Data;
  (this->AudioInputs).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar16,0,&pTVar1->AllocatorInstance,iVar16,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar8,iVar16);
  }
  pTVar3 = &this->CrossoverFrequencies;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CrossoverFrequencies).ArrayMax;
  iVar16 = param_3->ArrayNum;
  pTVar9 = (TDataReadReference<float> *)(param_3->AllocatorInstance).Data;
  (this->CrossoverFrequencies).ArrayNum = iVar16;
  if (iVar16 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar16,0,&pTVar3->AllocatorInstance,iVar16,piVar2);
    ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar9,iVar16);
  }
  (this->Crossovers).ArrayNum = 0;
  piVar2 = &(this->Crossovers).ArrayNum;
  (this->Crossovers).ArrayMax = 0;
  (this->Crossovers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar4 = &(this->Crossovers).ArrayMax;
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->FilterOrder).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar18 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->FilterOrder).field_0x10 = lVar18;
  if (lVar18 != 0) {
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
  }
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bPhaseCompensate).field_0x8 =
       *(undefined8 *)(CONCAT71(param_5._1_7_,param_5._0_1_) + 8);
  lVar18 = *(longlong *)(CONCAT71(param_5._1_7_,param_5._0_1_) + 0x10);
  *(longlong *)&(this->bPhaseCompensate).field_0x10 = lVar18;
  if (lVar18 != 0) {
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
  }
  EVar19 = EightPole;
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReadReference__N_Metasound__6B_;
  pTVar5 = &this->AudioOutputs;
  pTVar6 = &this->Filters;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar7 = &this->MultiBandBuffers;
  (this->AudioOutputs).ArrayNum = 0;
  (this->AudioOutputs).ArrayMax = 0;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Filters).ArrayNum = 0;
  (this->Filters).ArrayMax = 0;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MultiBandBuffers).ArrayNum = 0;
  (this->MultiBandBuffers).ArrayMax = 0;
  fVar13 = param_1->TargetBlockRate;
  fVar14 = param_1->ActualBlockRate;
  iVar16 = param_1->NumFramesPerBlock;
  (this->Settings).SampleRate = param_1->SampleRate;
  (this->Settings).TargetBlockRate = fVar13;
  (this->Settings).ActualBlockRate = fVar14;
  (this->Settings).NumFramesPerBlock = iVar16;
  *piVar2 = 0;
  if (*piVar4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Crossovers).AllocatorInstance,0,piVar4);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,&(this->Crossovers).AllocatorInstance,piVar2,piVar4);
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar16 = **(int **)&param_4->field_0x8;
  if (iVar16 != 0) {
    if (iVar16 == 1) {
      EVar19 = FourPole;
      goto LAB_14aff1d8e;
    }
    if (iVar16 == 2) {
      EVar19 = SixPole;
      goto LAB_14aff1d8e;
    }
    if (iVar16 == 3) goto LAB_14aff1d8e;
    param_5._0_1_ = 0;
    `Metasound::TBandSplitterOperator<5,1>::GetFilterOrder'::__l4::<lambda_1>::operator()(&param_5);
  }
  EVar19 = TwoPole;
LAB_14aff1d8e:
  this->PrevFilterOrder = EVar19;
  piVar2 = &(this->MultiBandBuffers).ArrayMax;
  iVar16 = (this->MultiBandBuffers).ArrayNum;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar7->AllocatorInstance,piVar2);
  }
  (this->MultiBandBuffers).ArrayNum = iVar16 + 1;
  DefaultConstructItems<Audio::FMultibandBuffer,int>
            ((pTVar7->AllocatorInstance).Data + (longlong)iVar16 * 0x18,1);
  iVar16 = (this->Filters).ArrayNum;
  piVar2 = &(this->Filters).ArrayMax;
  if (iVar16 == *piVar2) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x870,&pTVar6->AllocatorInstance,piVar2);
  }
  (this->Filters).ArrayNum = iVar16 + 1;
  DefaultConstructItems<Audio::FLinkwitzRileyBandSplitter,int>
            ((pTVar6->AllocatorInstance).Data + (longlong)iVar16 * 0x70,1);
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<5,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  this_00 = (FMultibandBuffer *)(pTVar7->AllocatorInstance).Data;
  this_00->NumBands = 5;
  Audio::FMultibandBuffer::Reset(this_00);
  if ((this->Filters).ArrayNum < 1) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<5,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  Audio::FLinkwitzRileyBandSplitter::Init
            ((FLinkwitzRileyBandSplitter *)(pTVar6->AllocatorInstance).Data,1,
             (float)param_1->SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,
             &this->Crossovers);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_58,NewObject,param_1);
  pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
  local_58._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar10 <= &local_58) && (&local_58 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<5,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  iVar16 = (this->AudioOutputs).ArrayNum;
  if (iVar16 == (this->AudioOutputs).ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
  }
  pFVar11 = (pTVar5->AllocatorInstance).Data;
  (this->AudioOutputs).ArrayNum = iVar16 + 1;
  lVar18 = (longlong)iVar16 * 0x20;
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar11 + lVar18 + 8) = local_58.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar11 + lVar18 + 0x10) =
       local_58.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_58.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_58.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_58,NewObject,param_1);
  pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
  local_58._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar10 <= &local_58) && (&local_58 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<5,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  iVar16 = (this->AudioOutputs).ArrayNum;
  if (iVar16 == (this->AudioOutputs).ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
  }
  (this->AudioOutputs).ArrayNum = iVar16 + 1;
  pFVar11 = (pTVar5->AllocatorInstance).Data;
  lVar18 = (longlong)iVar16 * 0x20;
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar11 + lVar18 + 8) = local_58.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar11 + lVar18 + 0x10) =
       local_58.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_58.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_58.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_58,NewObject,param_1);
  pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
  local_58._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar10 <= &local_58) && (&local_58 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<5,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  iVar16 = (this->AudioOutputs).ArrayNum;
  if (iVar16 == (this->AudioOutputs).ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
  }
  (this->AudioOutputs).ArrayNum = iVar16 + 1;
  pFVar11 = (pTVar5->AllocatorInstance).Data;
  lVar18 = (longlong)iVar16 * 0x20;
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar11 + lVar18 + 8) = local_58.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar11 + lVar18 + 0x10) =
       local_58.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_58.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_58.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_58,NewObject,param_1);
  pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
  local_58._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar10 <= &local_58) && (&local_58 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<5,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  iVar16 = (this->AudioOutputs).ArrayNum;
  if (iVar16 == (this->AudioOutputs).ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
  }
  (this->AudioOutputs).ArrayNum = iVar16 + 1;
  pFVar11 = (pTVar5->AllocatorInstance).Data;
  lVar18 = (longlong)iVar16 * 0x20;
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar11 + lVar18 + 8) = local_58.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar11 + lVar18 + 0x10) =
       local_58.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_58.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_58.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_58,NewObject,param_1);
  pTVar10 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar5->AllocatorInstance).Data;
  local_58._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar10 <= &local_58) && (&local_58 < pTVar10 + (this->AudioOutputs).ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar12 = (code *)swi(3);
      pTVar17 = (TBandSplitterOperator<5,1> *)(*pcVar12)();
      return pTVar17;
    }
  }
  iVar16 = (this->AudioOutputs).ArrayNum;
  if (iVar16 == (this->AudioOutputs).ArrayMax) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar5->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
  }
  (this->AudioOutputs).ArrayNum = iVar16 + 1;
  pFVar11 = (pTVar5->AllocatorInstance).Data;
  lVar18 = (longlong)iVar16 * 0x20;
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar11 + lVar18 + 8) = local_58.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar11 + lVar18 + 0x10) =
       local_58.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_58.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar11 + lVar18) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_58.ObjectReference.SharedReferenceCount.ReferenceController);
  return this;
}

// TBandSplitterOperator<5,2> @ 14aff2330

TBandSplitterOperator<5,2> * __thiscall
Metasound::TBandSplitterOperator<5,2>::TBandSplitterOperator<5,2>
          (TBandSplitterOperator<5,2> *this,FOperatorSettings *param_1,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *param_3
          ,TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *param_4,
          TDataReadReference<bool> *param_5)

{
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  TArray<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  TArray<Audio::FMultibandBuffer,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<Audio::FLinkwitzRileyBandSplitter,TSizedDefaultAllocator<32>_> *pTVar8;
  FMultibandBuffer *this_00;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar9;
  TDataReadReference<float> *pTVar10;
  TDataReference<Metasound::FAudioBuffer> *pTVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  int iVar18;
  TBandSplitterOperator<5,2> *pTVar19;
  longlong lVar20;
  EFilterOrder EVar21;
  uint uVar22;
  TDataReference<Metasound::FAudioBuffer> local_58;
  
  pTVar1 = &this->AudioInputs;
  uVar22 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7__TBandSplitterOperator__04_01_Metasound__6B_;
  iVar18 = param_2->ArrayNum;
  piVar2 = &(this->AudioInputs).ArrayMax;
  pTVar9 = (TDataReadReference<Metasound::FAudioBuffer> *)(param_2->AllocatorInstance).Data;
  (this->AudioInputs).ArrayNum = iVar18;
  if (iVar18 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar18,0,&pTVar1->AllocatorInstance,iVar18,piVar2);
    ConstructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar9,iVar18);
  }
  pTVar3 = &this->CrossoverFrequencies;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CrossoverFrequencies).ArrayMax;
  iVar18 = param_3->ArrayNum;
  pTVar10 = (TDataReadReference<float> *)(param_3->AllocatorInstance).Data;
  (this->CrossoverFrequencies).ArrayNum = iVar18;
  if (iVar18 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar18,0,&pTVar3->AllocatorInstance,iVar18,piVar2);
    ConstructItems<Metasound::TDataReadReference<float>,Metasound::TDataReadReference<float>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar10,iVar18);
  }
  lVar14 = CONCAT71(param_4._1_7_,param_4._0_1_);
  pTVar4 = &this->Crossovers;
  (this->Crossovers).ArrayNum = 0;
  (this->Crossovers).ArrayMax = 0;
  piVar2 = &(this->Crossovers).ArrayNum;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar5 = &(this->Crossovers).ArrayMax;
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->FilterOrder).field_0x8 = *(undefined8 *)(lVar14 + 8);
  lVar20 = *(longlong *)(lVar14 + 0x10);
  *(longlong *)&(this->FilterOrder).field_0x10 = lVar20;
  if (lVar20 != 0) {
    *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
  }
  *(undefined ***)&this->FilterOrder =
       &
       ___7__TDataReadReference_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->bPhaseCompensate).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar20 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->bPhaseCompensate).field_0x10 = lVar20;
  if (lVar20 != 0) {
    *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
  }
  EVar21 = EightPole;
  *(undefined ***)&this->bPhaseCompensate = &___7__TDataReadReference__N_Metasound__6B_;
  pTVar6 = &this->AudioOutputs;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioOutputs).ArrayNum = 0;
  (this->AudioOutputs).ArrayMax = 0;
  (this->Filters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filters).ArrayNum = 0;
  (this->Filters).ArrayMax = 0;
  (this->MultiBandBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MultiBandBuffers).ArrayNum = 0;
  (this->MultiBandBuffers).ArrayMax = 0;
  fVar15 = param_1->TargetBlockRate;
  fVar16 = param_1->ActualBlockRate;
  iVar18 = param_1->NumFramesPerBlock;
  (this->Settings).SampleRate = param_1->SampleRate;
  (this->Settings).TargetBlockRate = fVar15;
  (this->Settings).ActualBlockRate = fVar16;
  (this->Settings).NumFramesPerBlock = iVar18;
  *piVar2 = 0;
  if (*piVar5 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar4->AllocatorInstance,0,piVar5);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,&pTVar4->AllocatorInstance,piVar2,piVar5);
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar18 = **(int **)(lVar14 + 8);
  if (iVar18 != 0) {
    if (iVar18 == 1) {
      EVar21 = FourPole;
      goto LAB_14aff254d;
    }
    if (iVar18 == 2) {
      EVar21 = SixPole;
      goto LAB_14aff254d;
    }
    if (iVar18 == 3) goto LAB_14aff254d;
    param_4._0_1_ = 0;
    `Metasound::TBandSplitterOperator<5,2>::GetFilterOrder'::__l4::<lambda_1>::operator()(&param_4);
  }
  EVar21 = TwoPole;
LAB_14aff254d:
  this->PrevFilterOrder = EVar21;
  pTVar7 = &this->MultiBandBuffers;
  pTVar8 = &this->Filters;
  do {
    iVar18 = (this->MultiBandBuffers).ArrayNum;
    if (iVar18 == (this->MultiBandBuffers).ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar7->AllocatorInstance,&(this->MultiBandBuffers).ArrayMax);
    }
    (this->MultiBandBuffers).ArrayNum = iVar18 + 1;
    DefaultConstructItems<Audio::FMultibandBuffer,int>
              ((pTVar7->AllocatorInstance).Data + (longlong)iVar18 * 0x18,1);
    iVar18 = (this->Filters).ArrayNum;
    if (iVar18 == (this->Filters).ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x870,&pTVar8->AllocatorInstance,&(this->Filters).ArrayMax);
    }
    (this->Filters).ArrayNum = iVar18 + 1;
    DefaultConstructItems<Audio::FLinkwitzRileyBandSplitter,int>
              ((pTVar8->AllocatorInstance).Data + (longlong)iVar18 * 0x70,1);
    if ((this->MultiBandBuffers).ArrayNum <= (int)uVar22) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar13 = (code *)swi(3);
        pTVar19 = (TBandSplitterOperator<5,2> *)(*pcVar13)();
        return pTVar19;
      }
    }
    this_00 = (FMultibandBuffer *)((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar22 * 0x18);
    this_00->NumBands = 5;
    Audio::FMultibandBuffer::Reset(this_00);
    if ((this->Filters).ArrayNum <= (int)uVar22) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar13 = (code *)swi(3);
        pTVar19 = (TBandSplitterOperator<5,2> *)(*pcVar13)();
        return pTVar19;
      }
    }
    Audio::FLinkwitzRileyBandSplitter::Init
              ((FLinkwitzRileyBandSplitter *)
               ((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar22 * 0x70),1,
               (float)param_1->SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,
               &this->Crossovers);
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_58,NewObject,param_1);
    pTVar11 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar6->AllocatorInstance).Data;
    local_58._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar11 <= &local_58) && (&local_58 < pTVar11 + (this->AudioOutputs).ArrayMax)) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar17) {
        pcVar13 = (code *)swi(3);
        pTVar19 = (TBandSplitterOperator<5,2> *)(*pcVar13)();
        return pTVar19;
      }
    }
    iVar18 = (this->AudioOutputs).ArrayNum;
    if (iVar18 == (this->AudioOutputs).ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar6->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
    }
    pFVar12 = (pTVar6->AllocatorInstance).Data;
    (this->AudioOutputs).ArrayNum = iVar18 + 1;
    lVar20 = (longlong)iVar18 * 0x20;
    *(undefined ***)(pFVar12 + lVar20) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar12 + lVar20 + 8) = local_58.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar12 + lVar20 + 0x10) =
         local_58.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_58.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar12 + lVar20) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_58.ObjectReference.SharedReferenceCount.ReferenceController);
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_58,NewObject,param_1);
    pTVar11 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar6->AllocatorInstance).Data;
    local_58._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar11 <= &local_58) && (&local_58 < pTVar11 + (this->AudioOutputs).ArrayMax)) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar17) {
        pcVar13 = (code *)swi(3);
        pTVar19 = (TBandSplitterOperator<5,2> *)(*pcVar13)();
        return pTVar19;
      }
    }
    iVar18 = (this->AudioOutputs).ArrayNum;
    if (iVar18 == (this->AudioOutputs).ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar6->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
    }
    (this->AudioOutputs).ArrayNum = iVar18 + 1;
    pFVar12 = (pTVar6->AllocatorInstance).Data;
    lVar20 = (longlong)iVar18 * 0x20;
    *(undefined ***)(pFVar12 + lVar20) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar12 + lVar20 + 8) = local_58.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar12 + lVar20 + 0x10) =
         local_58.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_58.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar12 + lVar20) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_58.ObjectReference.SharedReferenceCount.ReferenceController);
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_58,NewObject,param_1);
    pTVar11 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar6->AllocatorInstance).Data;
    local_58._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar11 <= &local_58) && (&local_58 < pTVar11 + (this->AudioOutputs).ArrayMax)) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar17) {
        pcVar13 = (code *)swi(3);
        pTVar19 = (TBandSplitterOperator<5,2> *)(*pcVar13)();
        return pTVar19;
      }
    }
    iVar18 = (this->AudioOutputs).ArrayNum;
    if (iVar18 == (this->AudioOutputs).ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar6->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
    }
    (this->AudioOutputs).ArrayNum = iVar18 + 1;
    pFVar12 = (pTVar6->AllocatorInstance).Data;
    lVar20 = (longlong)iVar18 * 0x20;
    *(undefined ***)(pFVar12 + lVar20) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar12 + lVar20 + 8) = local_58.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar12 + lVar20 + 0x10) =
         local_58.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_58.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar12 + lVar20) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_58.ObjectReference.SharedReferenceCount.ReferenceController);
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_58,NewObject,param_1);
    pTVar11 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar6->AllocatorInstance).Data;
    local_58._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar11 <= &local_58) && (&local_58 < pTVar11 + (this->AudioOutputs).ArrayMax)) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar17) {
        pcVar13 = (code *)swi(3);
        pTVar19 = (TBandSplitterOperator<5,2> *)(*pcVar13)();
        return pTVar19;
      }
    }
    iVar18 = (this->AudioOutputs).ArrayNum;
    if (iVar18 == (this->AudioOutputs).ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar6->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
    }
    (this->AudioOutputs).ArrayNum = iVar18 + 1;
    pFVar12 = (pTVar6->AllocatorInstance).Data;
    lVar20 = (longlong)iVar18 * 0x20;
    *(undefined ***)(pFVar12 + lVar20) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar12 + lVar20 + 8) = local_58.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar12 + lVar20 + 0x10) =
         local_58.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_58.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar12 + lVar20) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_58.ObjectReference.SharedReferenceCount.ReferenceController);
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_58,NewObject,param_1);
    pTVar11 = (TDataReference<Metasound::FAudioBuffer> *)(pTVar6->AllocatorInstance).Data;
    local_58._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar11 <= &local_58) && (&local_58 < pTVar11 + (this->AudioOutputs).ArrayMax)) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar17) {
        pcVar13 = (code *)swi(3);
        pTVar19 = (TBandSplitterOperator<5,2> *)(*pcVar13)();
        return pTVar19;
      }
    }
    iVar18 = (this->AudioOutputs).ArrayNum;
    if (iVar18 == (this->AudioOutputs).ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar6->AllocatorInstance,&(this->AudioOutputs).ArrayMax);
    }
    (this->AudioOutputs).ArrayNum = iVar18 + 1;
    pFVar12 = (pTVar6->AllocatorInstance).Data;
    lVar20 = (longlong)iVar18 * 0x20;
    *(undefined ***)(pFVar12 + lVar20) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar12 + lVar20 + 8) = local_58.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar12 + lVar20 + 0x10) =
         local_58.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_58.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_58.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar12 + lVar20) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_58.ObjectReference.SharedReferenceCount.ReferenceController);
    uVar22 = uVar22 + 1;
  } while (uVar22 < 2);
  return this;
}

// operator() @ 14affdf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TBandSplitterOperator<2,1>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVertexInterface *pFVar4;
  FInputDataVertex *pFVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar7;
  uint uVar8;
  undefined1 auStack_238 [32];
  TOutputDataVertex<Metasound::FAudioBuffer> *local_218;
  TOutputDataVertex<Metasound::FAudioBuffer> *local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  bool local_1e8 [4];
  float local_1e4;
  FOutputVertexInterface local_1e0;
  FInputVertexInterface local_1c0;
  FName local_1a0;
  FDataVertexMetadata local_198;
  FDataVertexMetadata local_170;
  FDataVertexMetadata local_148;
  TOutputDataVertex<Metasound::FAudioBuffer> local_120;
  TInputDataVertex<Metasound::FAudioBuffer> local_100;
  undefined1 local_c8 [32];
  undefined1 local_a8 [16];
  byte local_98;
  TInputDataVertex<bool> local_90;
  TInputDataVertex<float> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_238;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_1c0);
  FText::FText(&local_198.Description);
  FText::FText(&local_198.DisplayName);
  local_198.bIsAdvancedDisplay = false;
  if (Metasound::TBandSplitterOperator<2,1>::AudioInputNames.ArrayNum < 1) {
    local_218 = (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0;
    local_210 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                (longlong)Metasound::TBandSplitterOperator<2,1>::AudioInputNames.ArrayNum;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
           TInputDataVertex<Metasound::FAudioBuffer><>
                     (&local_100,
                      (FName *)Metasound::TBandSplitterOperator<2,1>::AudioInputNames.
                               AllocatorInstance.Data,&local_198);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1c0,pFVar5);
  if (0xc < (byte)local_100._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_100._48_1_])(&local_100.field_0x20);
  if (local_198.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_198.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.Description.TextData.Reference + 0x10))();
  }
  pFVar5 = (FInputDataVertex *)
           Metasound::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
                     (local_c8,&Metasound::BandSplitterNode::InputFilterOrderName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1c0,pFVar5);
  if (0xc < local_98) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_98])(local_a8);
  local_1e8[0] = true;
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_90,&Metasound::BandSplitterNode::InputPhaseCompensateName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_1e8);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1c0,pFVar5);
  if (0xc < (byte)local_90._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
  FText::FText(&local_170.Description);
  FText::FText(&local_170.DisplayName);
  local_170.bIsAdvancedDisplay = false;
  local_1e4 = 500.0;
  if (Metasound::TBandSplitterOperator<2,1>::CrossoverInputNames.ArrayNum < 1) {
    local_218 = (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0;
    local_210 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                (longlong)Metasound::TBandSplitterOperator<2,1>::CrossoverInputNames.ArrayNum;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                     (&local_58,
                      (FName *)Metasound::TBandSplitterOperator<2,1>::CrossoverInputNames.
                               AllocatorInstance.Data,&local_170,&local_1e4);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1c0,pFVar5);
  if (0xc < (byte)local_58._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
  if (local_170.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_170.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_170.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_170.Description.TextData.Reference + 0x10))();
  }
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_1e0);
  uVar8 = 0;
  do {
    FText::FText(&local_148.Description);
    FText::FText(&local_148.DisplayName);
    local_148.bIsAdvancedDisplay = false;
    uVar3 = 0;
    if ((int)uVar8 < Metasound::TBandSplitterOperator<2,1>::AudioOutputNames.ArrayNum) {
      uVar3 = ~uVar8 >> 0x1f;
    }
    if (uVar3 == 0) {
      local_218 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar8;
      local_210 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<2,1>::AudioOutputNames.ArrayNum;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    local_1a0 = *(FName *)(Metasound::TBandSplitterOperator<2,1>::AudioOutputNames.AllocatorInstance
                           .Data + (longlong)(int)uVar8 * 8);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>(&local_120,&local_1a0,&local_148);
    if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_1e0._padding_ !=
        (TOutputDataVertex<Metasound::FAudioBuffer> *)
        (local_1e0._padding_ + (longlong)(int)local_1e0._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_1e0._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14affe366;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FAudioBuffer> *)
                         (local_1e0._padding_ + (longlong)(int)local_1e0._padding_ * 0x20));
    }
    if (((ulonglong)local_1e0._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FAudioBuffer> *)
                 (local_1e0._padding_ + (longlong)local_1e0._padding_._4_4_ * 0x20))) {
      local_1f8 = 0x20;
      local_210 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_1e0._padding_;
      local_218 = pTVar6;
      local_208 = (longlong)local_1e0._padding_._4_4_;
      local_200 = (longlong)(int)local_1e0._padding_;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((int)local_1e0._padding_ == local_1e0._padding_._4_4_) {
      local_1e0._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_1e0,
                      (int *)((longlong)&local_1e0._padding_ + 4));
    }
    *(undefined ***)(local_1e0._padding_ + (longlong)(int)local_1e0._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1e0._padding_ + (longlong)(int)local_1e0._padding_ * 0x20))->field_0x8 =
         *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1e0._padding_ + (longlong)(int)local_1e0._padding_ * 0x20))->field_0x10 =
         *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1e0._padding_ + (longlong)(int)local_1e0._padding_ * 0x20))->field_0x18 =
         *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)(local_1e0._padding_ + (longlong)(int)local_1e0._padding_ * 0x20) =
         &___7FOutputDataVertex_Metasound__6B_;
    local_1e0._padding_._0_4_ = (int)local_1e0._padding_ + 1;
LAB_14affe366:
    if (local_148.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_148.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.Description.TextData.Reference + 0x10))();
    }
    uVar8 = uVar8 + 1;
    if (1 < uVar8) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_1c0,&local_1e0);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1e0.SubInterfaces.AllocatorInstance.Data,
                 local_1e0.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1e0.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1e0.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_1e0._padding_ !=
          (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free((void *)local_1e0._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1c0.SubInterfaces.AllocatorInstance.Data,
                 local_1c0.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1c0.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1c0.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_1c0._padding_,(int)local_1c0._padding_);
      if ((FInputDataVertex *)local_1c0._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_1c0._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14affe450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TBandSplitterOperator<2,2>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FVertexInterface *pFVar5;
  FInputDataVertex *pFVar6;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar7;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_248 [32];
  TOutputDataVertex<Metasound::FAudioBuffer> *local_228;
  TOutputDataVertex<Metasound::FAudioBuffer> *local_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  bool local_1f8 [8];
  FOutputVertexInterface local_1f0;
  float local_1d0;
  FName local_1cc;
  FInputVertexInterface local_1c0;
  FDataVertexMetadata local_1a0;
  FDataVertexMetadata local_178;
  FDataVertexMetadata local_150;
  TOutputDataVertex<Metasound::FAudioBuffer> local_128;
  TInputDataVertex<Metasound::FAudioBuffer> local_108;
  undefined1 local_d0 [32];
  undefined1 local_b0 [16];
  byte local_a0;
  TInputDataVertex<bool> local_98;
  TInputDataVertex<float> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_248;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_1c0);
  uVar9 = 0;
  do {
    FText::FText(&local_178.Description);
    FText::FText(&local_178.DisplayName);
    local_178.bIsAdvancedDisplay = false;
    if (Metasound::TBandSplitterOperator<2,2>::AudioInputNames.ArrayNum <= (int)uVar9) {
      local_228 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar9;
      local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<2,2>::AudioInputNames.ArrayNum;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar6 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_108,
                        (FName *)(Metasound::TBandSplitterOperator<2,2>::AudioInputNames.
                                  AllocatorInstance.Data + (longlong)(int)uVar9 * 8),&local_178);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1c0,pFVar6);
    uVar10 = (ulonglong)(byte)local_108._48_1_;
    if (0xc < (byte)local_108._48_1_) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_108.field_0x20);
    if (local_178.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_178.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.Description.TextData.Reference + 0x10))();
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 2);
  pFVar6 = (FInputDataVertex *)
           Metasound::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
                     (local_d0,&Metasound::BandSplitterNode::InputFilterOrderName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1c0,pFVar6);
  if (0xc < local_a0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_a0])(local_b0);
  local_1f8[0] = true;
  pFVar6 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_98,&Metasound::BandSplitterNode::InputPhaseCompensateName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_1f8);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1c0,pFVar6);
  if (0xc < (byte)local_98._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  FText::FText(&local_150.Description);
  FText::FText(&local_150.DisplayName);
  local_150.bIsAdvancedDisplay = false;
  local_1d0 = 500.0;
  if (Metasound::TBandSplitterOperator<2,2>::CrossoverInputNames.ArrayNum < 1) {
    local_228 = (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0;
    local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                (longlong)Metasound::TBandSplitterOperator<2,2>::CrossoverInputNames.ArrayNum;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar6 = (FInputDataVertex *)
           Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                     (&local_60,
                      (FName *)Metasound::TBandSplitterOperator<2,2>::CrossoverInputNames.
                               AllocatorInstance.Data,&local_150,&local_1d0);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1c0,pFVar6);
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  if (local_150.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_150.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_150.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_150.Description.TextData.Reference + 0x10))();
  }
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_1f0);
  uVar9 = 0;
  do {
    FText::FText(&local_1a0.Description);
    FText::FText(&local_1a0.DisplayName);
    local_1a0.bIsAdvancedDisplay = false;
    uVar3 = 0;
    if ((int)uVar9 < Metasound::TBandSplitterOperator<2,2>::AudioOutputNames.ArrayNum) {
      uVar3 = ~uVar9 >> 0x1f;
    }
    if (uVar3 == 0) {
      local_228 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar9;
      local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<2,2>::AudioOutputNames.ArrayNum;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    local_1cc = *(FName *)(Metasound::TBandSplitterOperator<2,2>::AudioOutputNames.AllocatorInstance
                           .Data + (longlong)(int)uVar9 * 8);
    pTVar7 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>(&local_128,&local_1cc,&local_1a0);
    if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_ !=
        (TOutputDataVertex<Metasound::FAudioBuffer> *)
        (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20)) {
      pTVar8 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_;
      do {
        if (*(longlong *)&pTVar8->field_0x8 == *(longlong *)&pTVar7->field_0x8) {
          *(longlong *)&pTVar8->field_0x8 = *(longlong *)&pTVar7->field_0x8;
          *(undefined8 *)&pTVar8->field_0x10 = *(undefined8 *)&pTVar7->field_0x10;
          *(undefined4 *)&pTVar8->field_0x18 = *(undefined4 *)&pTVar7->field_0x18;
          goto LAB_14affe8c6;
        }
        pTVar8 = pTVar8 + 1;
      } while (pTVar8 != (TOutputDataVertex<Metasound::FAudioBuffer> *)
                         (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20));
    }
    if (((ulonglong)local_1f0._padding_ <= pTVar7) &&
       (pTVar7 < (TOutputDataVertex<Metasound::FAudioBuffer> *)
                 (local_1f0._padding_ + (longlong)local_1f0._padding_._4_4_ * 0x20))) {
      local_208 = 0x20;
      local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_;
      local_228 = pTVar7;
      local_218 = (longlong)local_1f0._padding_._4_4_;
      local_210 = (longlong)(int)local_1f0._padding_;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    if ((int)local_1f0._padding_ == local_1f0._padding_._4_4_) {
      local_1f0._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_1f0,
                      (int *)((longlong)&local_1f0._padding_ + 4));
    }
    *(undefined ***)(local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20))->field_0x8 =
         *(undefined8 *)&pTVar7->field_0x8;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20))->field_0x10 =
         *(undefined8 *)&pTVar7->field_0x10;
    *(undefined4 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20))->field_0x18 =
         *(undefined4 *)&pTVar7->field_0x18;
    *(undefined ***)(local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20) =
         &___7FOutputDataVertex_Metasound__6B_;
    local_1f0._padding_._0_4_ = (int)local_1f0._padding_ + 1;
LAB_14affe8c6:
    if (local_1a0.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a0.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_1a0.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a0.Description.TextData.Reference + 0x10))();
    }
    FText::FText(&local_1a0.Description);
    FText::FText(&local_1a0.DisplayName);
    uVar3 = uVar9 + 1;
    local_1a0.bIsAdvancedDisplay = false;
    uVar4 = 0;
    if ((int)uVar3 < Metasound::TBandSplitterOperator<2,2>::AudioOutputNames.ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      local_228 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar3;
      local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<2,2>::AudioOutputNames.ArrayNum;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    local_1cc = *(FName *)(Metasound::TBandSplitterOperator<2,2>::AudioOutputNames.AllocatorInstance
                           .Data + (longlong)(int)uVar3 * 8);
    pTVar7 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>(&local_128,&local_1cc,&local_1a0);
    if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_ !=
        (TOutputDataVertex<Metasound::FAudioBuffer> *)
        (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20)) {
      pTVar8 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_;
      do {
        if (*(longlong *)&pTVar8->field_0x8 == *(longlong *)&pTVar7->field_0x8) {
          *(longlong *)&pTVar8->field_0x8 = *(longlong *)&pTVar7->field_0x8;
          *(undefined8 *)&pTVar8->field_0x10 = *(undefined8 *)&pTVar7->field_0x10;
          *(undefined4 *)&pTVar8->field_0x18 = *(undefined4 *)&pTVar7->field_0x18;
          goto LAB_14affea56;
        }
        pTVar8 = pTVar8 + 1;
      } while (pTVar8 != (TOutputDataVertex<Metasound::FAudioBuffer> *)
                         (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20));
    }
    if (((ulonglong)local_1f0._padding_ <= pTVar7) &&
       (pTVar7 < (TOutputDataVertex<Metasound::FAudioBuffer> *)
                 (local_1f0._padding_ + (longlong)local_1f0._padding_._4_4_ * 0x20))) {
      local_208 = 0x20;
      local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_;
      local_228 = pTVar7;
      local_218 = (longlong)local_1f0._padding_._4_4_;
      local_210 = (longlong)(int)local_1f0._padding_;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    if ((int)local_1f0._padding_ == local_1f0._padding_._4_4_) {
      local_1f0._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_1f0,
                      (int *)((longlong)&local_1f0._padding_ + 4));
    }
    *(undefined ***)(local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20))->field_0x8 =
         *(undefined8 *)&pTVar7->field_0x8;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20))->field_0x10 =
         *(undefined8 *)&pTVar7->field_0x10;
    *(undefined4 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20))->field_0x18 =
         *(undefined4 *)&pTVar7->field_0x18;
    *(undefined ***)(local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20) =
         &___7FOutputDataVertex_Metasound__6B_;
    local_1f0._padding_._0_4_ = (int)local_1f0._padding_ + 1;
LAB_14affea56:
    if (local_1a0.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a0.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_1a0.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a0.Description.TextData.Reference + 0x10))();
    }
    uVar9 = uVar9 + 2;
    if (3 < uVar9) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_1c0,&local_1f0);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1f0.SubInterfaces.AllocatorInstance.Data,
                 local_1f0.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1f0.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1f0.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_ !=
          (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free((void *)local_1f0._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1c0.SubInterfaces.AllocatorInstance.Data,
                 local_1c0.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1c0.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1c0.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_1c0._padding_,(int)local_1c0._padding_);
      if ((FInputDataVertex *)local_1c0._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_1c0._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14affeb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TBandSplitterOperator<3,1>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  FVertexInterface *pFVar4;
  FInputDataVertex *pFVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_248 [32];
  TOutputDataVertex<Metasound::FAudioBuffer> *local_228;
  TOutputDataVertex<Metasound::FAudioBuffer> *local_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  bool local_1f8 [4];
  float local_1f4;
  FOutputVertexInterface local_1f0;
  FInputVertexInterface local_1d0;
  FName local_1b0;
  FDataVertexMetadata local_1a8;
  FDataVertexMetadata local_180;
  FDataVertexMetadata local_158;
  TOutputDataVertex<Metasound::FAudioBuffer> local_130;
  TInputDataVertex<Metasound::FAudioBuffer> local_110;
  undefined1 local_d8 [32];
  undefined1 local_b8 [16];
  byte local_a8;
  TInputDataVertex<bool> local_a0;
  TInputDataVertex<float> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_248;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_1d0);
  FText::FText(&local_1a8.Description);
  FText::FText(&local_1a8.DisplayName);
  local_1a8.bIsAdvancedDisplay = false;
  if (Metasound::TBandSplitterOperator<3,1>::AudioInputNames.ArrayNum < 1) {
    local_228 = (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0;
    local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                (longlong)Metasound::TBandSplitterOperator<3,1>::AudioInputNames.ArrayNum;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
           TInputDataVertex<Metasound::FAudioBuffer><>
                     (&local_110,
                      (FName *)Metasound::TBandSplitterOperator<3,1>::AudioInputNames.
                               AllocatorInstance.Data,&local_1a8);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar5);
  if (0xc < (byte)local_110._48_1_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_110._48_1_])(&local_110.field_0x20);
  if (local_1a8.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_1a8.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.Description.TextData.Reference + 0x10))();
  }
  pFVar5 = (FInputDataVertex *)
           Metasound::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
                     (local_d8,&Metasound::BandSplitterNode::InputFilterOrderName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar5);
  if (0xc < local_a8) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_a8])(local_b8);
  local_1f8[0] = true;
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_a0,&Metasound::BandSplitterNode::InputPhaseCompensateName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_1f8);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar5);
  if (0xc < (byte)local_a0._48_1_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
  fVar2 = __real_43fa0000;
  uVar10 = 0;
  do {
    FText::FText(&local_180.Description);
    FText::FText(&local_180.DisplayName);
    local_180.bIsAdvancedDisplay = false;
    uVar9 = uVar10 + 1;
    local_1f4 = (float)uVar9 * fVar2;
    if (Metasound::TBandSplitterOperator<3,1>::CrossoverInputNames.ArrayNum <= (int)uVar10) {
      local_228 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar10;
      local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<3,1>::CrossoverInputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar5 = (FInputDataVertex *)
             Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_68,
                        (FName *)(Metasound::TBandSplitterOperator<3,1>::CrossoverInputNames.
                                  AllocatorInstance.Data + (longlong)(int)uVar10 * 8),&local_180,
                        &local_1f4);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar5);
    uVar8 = (ulonglong)(byte)local_68._48_1_;
    if (0xc < (byte)local_68._48_1_) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_68.field_0x20);
    if (local_180.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_180.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180.Description.TextData.Reference + 0x10))();
    }
    uVar10 = uVar9;
  } while (uVar9 < 2);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_1f0);
  uVar10 = 0;
  do {
    FText::FText(&local_158.Description);
    FText::FText(&local_158.DisplayName);
    local_158.bIsAdvancedDisplay = false;
    uVar9 = 0;
    if ((int)uVar10 < Metasound::TBandSplitterOperator<3,1>::AudioOutputNames.ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_228 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar10;
      local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<3,1>::AudioOutputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    local_1b0 = *(FName *)(Metasound::TBandSplitterOperator<3,1>::AudioOutputNames.AllocatorInstance
                           .Data + (longlong)(int)uVar10 * 8);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>(&local_130,&local_1b0,&local_158);
    if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_ !=
        (TOutputDataVertex<Metasound::FAudioBuffer> *)
        (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14affefe6;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FAudioBuffer> *)
                         (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20));
    }
    if (((ulonglong)local_1f0._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FAudioBuffer> *)
                 (local_1f0._padding_ + (longlong)local_1f0._padding_._4_4_ * 0x20))) {
      local_208 = 0x20;
      local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_;
      local_228 = pTVar6;
      local_218 = (longlong)local_1f0._padding_._4_4_;
      local_210 = (longlong)(int)local_1f0._padding_;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((int)local_1f0._padding_ == local_1f0._padding_._4_4_) {
      local_1f0._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_1f0,
                      (int *)((longlong)&local_1f0._padding_ + 4));
    }
    *(undefined ***)(local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20))->field_0x8 =
         *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20))->field_0x10 =
         *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20))->field_0x18 =
         *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)(local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20) =
         &___7FOutputDataVertex_Metasound__6B_;
    local_1f0._padding_._0_4_ = (int)local_1f0._padding_ + 1;
LAB_14affefe6:
    if (local_158.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_158.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.Description.TextData.Reference + 0x10))();
    }
    uVar10 = uVar10 + 1;
    if (2 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_1d0,&local_1f0);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1f0.SubInterfaces.AllocatorInstance.Data,
                 local_1f0.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1f0.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1f0.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_ !=
          (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free((void *)local_1f0._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1d0.SubInterfaces.AllocatorInstance.Data,
                 local_1d0.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1d0.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1d0.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_1d0._padding_,(int)local_1d0._padding_);
      if ((FInputDataVertex *)local_1d0._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_1d0._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14afff0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TBandSplitterOperator<3,2>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  FVertexInterface *pFVar5;
  FInputDataVertex *pFVar6;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar7;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_258 [32];
  TOutputDataVertex<Metasound::FAudioBuffer> *local_238;
  TOutputDataVertex<Metasound::FAudioBuffer> *local_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  bool local_208 [8];
  FOutputVertexInterface local_200;
  float local_1e0;
  FName local_1dc;
  FInputVertexInterface local_1d0;
  FDataVertexMetadata local_1b0;
  FDataVertexMetadata local_188;
  FDataVertexMetadata local_160;
  TOutputDataVertex<Metasound::FAudioBuffer> local_138;
  TInputDataVertex<Metasound::FAudioBuffer> local_118;
  undefined1 local_e0 [32];
  undefined1 local_c0 [16];
  byte local_b0;
  TInputDataVertex<bool> local_a8;
  TInputDataVertex<float> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_258;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_1d0);
  uVar9 = 0;
  do {
    FText::FText(&local_188.Description);
    FText::FText(&local_188.DisplayName);
    local_188.bIsAdvancedDisplay = false;
    if (Metasound::TBandSplitterOperator<3,2>::AudioInputNames.ArrayNum <= (int)uVar9) {
      local_238 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar9;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<3,2>::AudioInputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar6 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_118,
                        (FName *)(Metasound::TBandSplitterOperator<3,2>::AudioInputNames.
                                  AllocatorInstance.Data + (longlong)(int)uVar9 * 8),&local_188);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar6);
    uVar10 = (ulonglong)(byte)local_118._48_1_;
    if (0xc < (byte)local_118._48_1_) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_118.field_0x20);
    if (local_188.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_188.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.Description.TextData.Reference + 0x10))();
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 2);
  pFVar6 = (FInputDataVertex *)
           Metasound::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
                     (local_e0,&Metasound::BandSplitterNode::InputFilterOrderName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar6);
  if (0xc < local_b0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_b0])(local_c0);
  local_208[0] = true;
  pFVar6 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_a8,&Metasound::BandSplitterNode::InputPhaseCompensateName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_208);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar6);
  if (0xc < (byte)local_a8._48_1_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
  fVar2 = __real_43fa0000;
  uVar9 = 0;
  do {
    FText::FText(&local_160.Description);
    FText::FText(&local_160.DisplayName);
    local_160.bIsAdvancedDisplay = false;
    uVar11 = uVar9 + 1;
    local_1e0 = (float)uVar11 * fVar2;
    if (Metasound::TBandSplitterOperator<3,2>::CrossoverInputNames.ArrayNum <= (int)uVar9) {
      local_238 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar9;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<3,2>::CrossoverInputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar6 = (FInputDataVertex *)
             Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_70,
                        (FName *)(Metasound::TBandSplitterOperator<3,2>::CrossoverInputNames.
                                  AllocatorInstance.Data + (longlong)(int)uVar9 * 8),&local_160,
                        &local_1e0);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar6);
    uVar10 = (ulonglong)(byte)local_70._48_1_;
    if (0xc < (byte)local_70._48_1_) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_70.field_0x20);
    if (local_160.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_160.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.Description.TextData.Reference + 0x10))();
    }
    uVar9 = uVar11;
  } while (uVar11 < 2);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_200);
  uVar9 = 0;
  do {
    FText::FText(&local_1b0.Description);
    FText::FText(&local_1b0.DisplayName);
    local_1b0.bIsAdvancedDisplay = false;
    uVar11 = 0;
    if ((int)uVar9 < Metasound::TBandSplitterOperator<3,2>::AudioOutputNames.ArrayNum) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    if (uVar11 == 0) {
      local_238 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar9;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<3,2>::AudioOutputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    local_1dc = *(FName *)(Metasound::TBandSplitterOperator<3,2>::AudioOutputNames.AllocatorInstance
                           .Data + (longlong)(int)uVar9 * 8);
    pTVar7 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>(&local_138,&local_1dc,&local_1b0);
    if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_ !=
        (TOutputDataVertex<Metasound::FAudioBuffer> *)
        (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20)) {
      pTVar8 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_;
      do {
        if (*(longlong *)&pTVar8->field_0x8 == *(longlong *)&pTVar7->field_0x8) {
          *(longlong *)&pTVar8->field_0x8 = *(longlong *)&pTVar7->field_0x8;
          *(undefined8 *)&pTVar8->field_0x10 = *(undefined8 *)&pTVar7->field_0x10;
          *(undefined4 *)&pTVar8->field_0x18 = *(undefined4 *)&pTVar7->field_0x18;
          goto LAB_14afff586;
        }
        pTVar8 = pTVar8 + 1;
      } while (pTVar8 != (TOutputDataVertex<Metasound::FAudioBuffer> *)
                         (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20));
    }
    if (((ulonglong)local_200._padding_ <= pTVar7) &&
       (pTVar7 < (TOutputDataVertex<Metasound::FAudioBuffer> *)
                 (local_200._padding_ + (longlong)local_200._padding_._4_4_ * 0x20))) {
      local_218 = 0x20;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_;
      local_238 = pTVar7;
      local_228 = (longlong)local_200._padding_._4_4_;
      local_220 = (longlong)(int)local_200._padding_;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    if ((int)local_200._padding_ == local_200._padding_._4_4_) {
      local_200._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_200,
                      (int *)((longlong)&local_200._padding_ + 4));
    }
    *(undefined ***)(local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x8 =
         *(undefined8 *)&pTVar7->field_0x8;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x10 =
         *(undefined8 *)&pTVar7->field_0x10;
    *(undefined4 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x18 =
         *(undefined4 *)&pTVar7->field_0x18;
    *(undefined ***)(local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20) =
         &___7FOutputDataVertex_Metasound__6B_;
    local_200._padding_._0_4_ = (int)local_200._padding_ + 1;
LAB_14afff586:
    if (local_1b0.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_1b0.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.Description.TextData.Reference + 0x10))();
    }
    FText::FText(&local_1b0.Description);
    FText::FText(&local_1b0.DisplayName);
    uVar11 = uVar9 + 1;
    local_1b0.bIsAdvancedDisplay = false;
    uVar4 = 0;
    if ((int)uVar11 < Metasound::TBandSplitterOperator<3,2>::AudioOutputNames.ArrayNum) {
      uVar4 = ~uVar11 >> 0x1f;
    }
    if (uVar4 == 0) {
      local_238 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar11;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<3,2>::AudioOutputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    local_1dc = *(FName *)(Metasound::TBandSplitterOperator<3,2>::AudioOutputNames.AllocatorInstance
                           .Data + (longlong)(int)uVar11 * 8);
    pTVar7 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>(&local_138,&local_1dc,&local_1b0);
    if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_ !=
        (TOutputDataVertex<Metasound::FAudioBuffer> *)
        (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20)) {
      pTVar8 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_;
      do {
        if (*(longlong *)&pTVar8->field_0x8 == *(longlong *)&pTVar7->field_0x8) {
          *(longlong *)&pTVar8->field_0x8 = *(longlong *)&pTVar7->field_0x8;
          *(undefined8 *)&pTVar8->field_0x10 = *(undefined8 *)&pTVar7->field_0x10;
          *(undefined4 *)&pTVar8->field_0x18 = *(undefined4 *)&pTVar7->field_0x18;
          goto LAB_14afff716;
        }
        pTVar8 = pTVar8 + 1;
      } while (pTVar8 != (TOutputDataVertex<Metasound::FAudioBuffer> *)
                         (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20));
    }
    if (((ulonglong)local_200._padding_ <= pTVar7) &&
       (pTVar7 < (TOutputDataVertex<Metasound::FAudioBuffer> *)
                 (local_200._padding_ + (longlong)local_200._padding_._4_4_ * 0x20))) {
      local_218 = 0x20;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_;
      local_238 = pTVar7;
      local_228 = (longlong)local_200._padding_._4_4_;
      local_220 = (longlong)(int)local_200._padding_;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    if ((int)local_200._padding_ == local_200._padding_._4_4_) {
      local_200._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_200,
                      (int *)((longlong)&local_200._padding_ + 4));
    }
    *(undefined ***)(local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x8 =
         *(undefined8 *)&pTVar7->field_0x8;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x10 =
         *(undefined8 *)&pTVar7->field_0x10;
    *(undefined4 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x18 =
         *(undefined4 *)&pTVar7->field_0x18;
    *(undefined ***)(local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20) =
         &___7FOutputDataVertex_Metasound__6B_;
    local_200._padding_._0_4_ = (int)local_200._padding_ + 1;
LAB_14afff716:
    if (local_1b0.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_1b0.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.Description.TextData.Reference + 0x10))();
    }
    uVar9 = uVar9 + 2;
    if (5 < uVar9) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_1d0,&local_200);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_200.SubInterfaces.AllocatorInstance.Data,
                 local_200.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_200.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_200.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_ !=
          (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free((void *)local_200._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1d0.SubInterfaces.AllocatorInstance.Data,
                 local_1d0.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1d0.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1d0.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_1d0._padding_,(int)local_1d0._padding_);
      if ((FInputDataVertex *)local_1d0._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_1d0._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14afff820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TBandSplitterOperator<4,1>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  FVertexInterface *pFVar4;
  FInputDataVertex *pFVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_248 [32];
  TOutputDataVertex<Metasound::FAudioBuffer> *local_228;
  TOutputDataVertex<Metasound::FAudioBuffer> *local_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  bool local_1f8 [4];
  float local_1f4;
  FOutputVertexInterface local_1f0;
  FInputVertexInterface local_1d0;
  FName local_1b0;
  FDataVertexMetadata local_1a8;
  FDataVertexMetadata local_180;
  FDataVertexMetadata local_158;
  TOutputDataVertex<Metasound::FAudioBuffer> local_130;
  TInputDataVertex<Metasound::FAudioBuffer> local_110;
  undefined1 local_d8 [32];
  undefined1 local_b8 [16];
  byte local_a8;
  TInputDataVertex<bool> local_a0;
  TInputDataVertex<float> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_248;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_1d0);
  FText::FText(&local_1a8.Description);
  FText::FText(&local_1a8.DisplayName);
  local_1a8.bIsAdvancedDisplay = false;
  if (Metasound::TBandSplitterOperator<4,1>::AudioInputNames.ArrayNum < 1) {
    local_228 = (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0;
    local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                (longlong)Metasound::TBandSplitterOperator<4,1>::AudioInputNames.ArrayNum;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
           TInputDataVertex<Metasound::FAudioBuffer><>
                     (&local_110,
                      (FName *)Metasound::TBandSplitterOperator<4,1>::AudioInputNames.
                               AllocatorInstance.Data,&local_1a8);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar5);
  if (0xc < (byte)local_110._48_1_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_110._48_1_])(&local_110.field_0x20);
  if (local_1a8.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_1a8.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.Description.TextData.Reference + 0x10))();
  }
  pFVar5 = (FInputDataVertex *)
           Metasound::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
                     (local_d8,&Metasound::BandSplitterNode::InputFilterOrderName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar5);
  if (0xc < local_a8) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_a8])(local_b8);
  local_1f8[0] = true;
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_a0,&Metasound::BandSplitterNode::InputPhaseCompensateName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_1f8);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar5);
  if (0xc < (byte)local_a0._48_1_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
  fVar2 = __real_43fa0000;
  uVar10 = 0;
  do {
    FText::FText(&local_180.Description);
    FText::FText(&local_180.DisplayName);
    local_180.bIsAdvancedDisplay = false;
    uVar9 = uVar10 + 1;
    local_1f4 = (float)uVar9 * fVar2;
    if (Metasound::TBandSplitterOperator<4,1>::CrossoverInputNames.ArrayNum <= (int)uVar10) {
      local_228 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar10;
      local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<4,1>::CrossoverInputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar5 = (FInputDataVertex *)
             Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_68,
                        (FName *)(Metasound::TBandSplitterOperator<4,1>::CrossoverInputNames.
                                  AllocatorInstance.Data + (longlong)(int)uVar10 * 8),&local_180,
                        &local_1f4);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar5);
    uVar8 = (ulonglong)(byte)local_68._48_1_;
    if (0xc < (byte)local_68._48_1_) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_68.field_0x20);
    if (local_180.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_180.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180.Description.TextData.Reference + 0x10))();
    }
    uVar10 = uVar9;
  } while (uVar9 < 3);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_1f0);
  uVar10 = 0;
  do {
    FText::FText(&local_158.Description);
    FText::FText(&local_158.DisplayName);
    local_158.bIsAdvancedDisplay = false;
    uVar9 = 0;
    if ((int)uVar10 < Metasound::TBandSplitterOperator<4,1>::AudioOutputNames.ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_228 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar10;
      local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<4,1>::AudioOutputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    local_1b0 = *(FName *)(Metasound::TBandSplitterOperator<4,1>::AudioOutputNames.AllocatorInstance
                           .Data + (longlong)(int)uVar10 * 8);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>(&local_130,&local_1b0,&local_158);
    if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_ !=
        (TOutputDataVertex<Metasound::FAudioBuffer> *)
        (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14afffca6;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FAudioBuffer> *)
                         (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20));
    }
    if (((ulonglong)local_1f0._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FAudioBuffer> *)
                 (local_1f0._padding_ + (longlong)local_1f0._padding_._4_4_ * 0x20))) {
      local_208 = 0x20;
      local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_;
      local_228 = pTVar6;
      local_218 = (longlong)local_1f0._padding_._4_4_;
      local_210 = (longlong)(int)local_1f0._padding_;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((int)local_1f0._padding_ == local_1f0._padding_._4_4_) {
      local_1f0._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_1f0,
                      (int *)((longlong)&local_1f0._padding_ + 4));
    }
    *(undefined ***)(local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20))->field_0x8 =
         *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20))->field_0x10 =
         *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20))->field_0x18 =
         *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)(local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20) =
         &___7FOutputDataVertex_Metasound__6B_;
    local_1f0._padding_._0_4_ = (int)local_1f0._padding_ + 1;
LAB_14afffca6:
    if (local_158.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_158.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.Description.TextData.Reference + 0x10))();
    }
    uVar10 = uVar10 + 1;
    if (3 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_1d0,&local_1f0);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1f0.SubInterfaces.AllocatorInstance.Data,
                 local_1f0.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1f0.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1f0.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_ !=
          (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free((void *)local_1f0._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1d0.SubInterfaces.AllocatorInstance.Data,
                 local_1d0.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1d0.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1d0.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_1d0._padding_,(int)local_1d0._padding_);
      if ((FInputDataVertex *)local_1d0._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_1d0._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14afffda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TBandSplitterOperator<4,2>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  FVertexInterface *pFVar5;
  FInputDataVertex *pFVar6;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar7;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_258 [32];
  TOutputDataVertex<Metasound::FAudioBuffer> *local_238;
  TOutputDataVertex<Metasound::FAudioBuffer> *local_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  bool local_208 [8];
  FOutputVertexInterface local_200;
  float local_1e0;
  FName local_1dc;
  FInputVertexInterface local_1d0;
  FDataVertexMetadata local_1b0;
  FDataVertexMetadata local_188;
  FDataVertexMetadata local_160;
  TOutputDataVertex<Metasound::FAudioBuffer> local_138;
  TInputDataVertex<Metasound::FAudioBuffer> local_118;
  undefined1 local_e0 [32];
  undefined1 local_c0 [16];
  byte local_b0;
  TInputDataVertex<bool> local_a8;
  TInputDataVertex<float> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_258;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_1d0);
  uVar9 = 0;
  do {
    FText::FText(&local_188.Description);
    FText::FText(&local_188.DisplayName);
    local_188.bIsAdvancedDisplay = false;
    if (Metasound::TBandSplitterOperator<4,2>::AudioInputNames.ArrayNum <= (int)uVar9) {
      local_238 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar9;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<4,2>::AudioInputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar6 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_118,
                        (FName *)(Metasound::TBandSplitterOperator<4,2>::AudioInputNames.
                                  AllocatorInstance.Data + (longlong)(int)uVar9 * 8),&local_188);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar6);
    uVar10 = (ulonglong)(byte)local_118._48_1_;
    if (0xc < (byte)local_118._48_1_) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_118.field_0x20);
    if (local_188.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_188.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.Description.TextData.Reference + 0x10))();
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 2);
  pFVar6 = (FInputDataVertex *)
           Metasound::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
                     (local_e0,&Metasound::BandSplitterNode::InputFilterOrderName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar6);
  if (0xc < local_b0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_b0])(local_c0);
  local_208[0] = true;
  pFVar6 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_a8,&Metasound::BandSplitterNode::InputPhaseCompensateName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_208);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar6);
  if (0xc < (byte)local_a8._48_1_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
  fVar2 = __real_43fa0000;
  uVar9 = 0;
  do {
    FText::FText(&local_160.Description);
    FText::FText(&local_160.DisplayName);
    local_160.bIsAdvancedDisplay = false;
    uVar11 = uVar9 + 1;
    local_1e0 = (float)uVar11 * fVar2;
    if (Metasound::TBandSplitterOperator<4,2>::CrossoverInputNames.ArrayNum <= (int)uVar9) {
      local_238 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar9;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<4,2>::CrossoverInputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar6 = (FInputDataVertex *)
             Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_70,
                        (FName *)(Metasound::TBandSplitterOperator<4,2>::CrossoverInputNames.
                                  AllocatorInstance.Data + (longlong)(int)uVar9 * 8),&local_160,
                        &local_1e0);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar6);
    uVar10 = (ulonglong)(byte)local_70._48_1_;
    if (0xc < (byte)local_70._48_1_) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_70.field_0x20);
    if (local_160.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_160.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.Description.TextData.Reference + 0x10))();
    }
    uVar9 = uVar11;
  } while (uVar11 < 3);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_200);
  uVar9 = 0;
  do {
    FText::FText(&local_1b0.Description);
    FText::FText(&local_1b0.DisplayName);
    local_1b0.bIsAdvancedDisplay = false;
    uVar11 = 0;
    if ((int)uVar9 < Metasound::TBandSplitterOperator<4,2>::AudioOutputNames.ArrayNum) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    if (uVar11 == 0) {
      local_238 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar9;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<4,2>::AudioOutputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    local_1dc = *(FName *)(Metasound::TBandSplitterOperator<4,2>::AudioOutputNames.AllocatorInstance
                           .Data + (longlong)(int)uVar9 * 8);
    pTVar7 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>(&local_138,&local_1dc,&local_1b0);
    if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_ !=
        (TOutputDataVertex<Metasound::FAudioBuffer> *)
        (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20)) {
      pTVar8 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_;
      do {
        if (*(longlong *)&pTVar8->field_0x8 == *(longlong *)&pTVar7->field_0x8) {
          *(longlong *)&pTVar8->field_0x8 = *(longlong *)&pTVar7->field_0x8;
          *(undefined8 *)&pTVar8->field_0x10 = *(undefined8 *)&pTVar7->field_0x10;
          *(undefined4 *)&pTVar8->field_0x18 = *(undefined4 *)&pTVar7->field_0x18;
          goto LAB_14b000246;
        }
        pTVar8 = pTVar8 + 1;
      } while (pTVar8 != (TOutputDataVertex<Metasound::FAudioBuffer> *)
                         (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20));
    }
    if (((ulonglong)local_200._padding_ <= pTVar7) &&
       (pTVar7 < (TOutputDataVertex<Metasound::FAudioBuffer> *)
                 (local_200._padding_ + (longlong)local_200._padding_._4_4_ * 0x20))) {
      local_218 = 0x20;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_;
      local_238 = pTVar7;
      local_228 = (longlong)local_200._padding_._4_4_;
      local_220 = (longlong)(int)local_200._padding_;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    if ((int)local_200._padding_ == local_200._padding_._4_4_) {
      local_200._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_200,
                      (int *)((longlong)&local_200._padding_ + 4));
    }
    *(undefined ***)(local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x8 =
         *(undefined8 *)&pTVar7->field_0x8;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x10 =
         *(undefined8 *)&pTVar7->field_0x10;
    *(undefined4 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x18 =
         *(undefined4 *)&pTVar7->field_0x18;
    *(undefined ***)(local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20) =
         &___7FOutputDataVertex_Metasound__6B_;
    local_200._padding_._0_4_ = (int)local_200._padding_ + 1;
LAB_14b000246:
    if (local_1b0.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_1b0.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.Description.TextData.Reference + 0x10))();
    }
    FText::FText(&local_1b0.Description);
    FText::FText(&local_1b0.DisplayName);
    uVar11 = uVar9 + 1;
    local_1b0.bIsAdvancedDisplay = false;
    uVar4 = 0;
    if ((int)uVar11 < Metasound::TBandSplitterOperator<4,2>::AudioOutputNames.ArrayNum) {
      uVar4 = ~uVar11 >> 0x1f;
    }
    if (uVar4 == 0) {
      local_238 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar11;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<4,2>::AudioOutputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    local_1dc = *(FName *)(Metasound::TBandSplitterOperator<4,2>::AudioOutputNames.AllocatorInstance
                           .Data + (longlong)(int)uVar11 * 8);
    pTVar7 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>(&local_138,&local_1dc,&local_1b0);
    if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_ !=
        (TOutputDataVertex<Metasound::FAudioBuffer> *)
        (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20)) {
      pTVar8 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_;
      do {
        if (*(longlong *)&pTVar8->field_0x8 == *(longlong *)&pTVar7->field_0x8) {
          *(longlong *)&pTVar8->field_0x8 = *(longlong *)&pTVar7->field_0x8;
          *(undefined8 *)&pTVar8->field_0x10 = *(undefined8 *)&pTVar7->field_0x10;
          *(undefined4 *)&pTVar8->field_0x18 = *(undefined4 *)&pTVar7->field_0x18;
          goto LAB_14b0003d6;
        }
        pTVar8 = pTVar8 + 1;
      } while (pTVar8 != (TOutputDataVertex<Metasound::FAudioBuffer> *)
                         (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20));
    }
    if (((ulonglong)local_200._padding_ <= pTVar7) &&
       (pTVar7 < (TOutputDataVertex<Metasound::FAudioBuffer> *)
                 (local_200._padding_ + (longlong)local_200._padding_._4_4_ * 0x20))) {
      local_218 = 0x20;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_;
      local_238 = pTVar7;
      local_228 = (longlong)local_200._padding_._4_4_;
      local_220 = (longlong)(int)local_200._padding_;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    if ((int)local_200._padding_ == local_200._padding_._4_4_) {
      local_200._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_200,
                      (int *)((longlong)&local_200._padding_ + 4));
    }
    *(undefined ***)(local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x8 =
         *(undefined8 *)&pTVar7->field_0x8;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x10 =
         *(undefined8 *)&pTVar7->field_0x10;
    *(undefined4 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x18 =
         *(undefined4 *)&pTVar7->field_0x18;
    *(undefined ***)(local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20) =
         &___7FOutputDataVertex_Metasound__6B_;
    local_200._padding_._0_4_ = (int)local_200._padding_ + 1;
LAB_14b0003d6:
    if (local_1b0.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_1b0.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.Description.TextData.Reference + 0x10))();
    }
    uVar9 = uVar9 + 2;
    if (7 < uVar9) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_1d0,&local_200);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_200.SubInterfaces.AllocatorInstance.Data,
                 local_200.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_200.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_200.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_ !=
          (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free((void *)local_200._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1d0.SubInterfaces.AllocatorInstance.Data,
                 local_1d0.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1d0.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1d0.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_1d0._padding_,(int)local_1d0._padding_);
      if ((FInputDataVertex *)local_1d0._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_1d0._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14b0004e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TBandSplitterOperator<5,1>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  FVertexInterface *pFVar4;
  FInputDataVertex *pFVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_248 [32];
  TOutputDataVertex<Metasound::FAudioBuffer> *local_228;
  TOutputDataVertex<Metasound::FAudioBuffer> *local_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  bool local_1f8 [4];
  float local_1f4;
  FOutputVertexInterface local_1f0;
  FInputVertexInterface local_1d0;
  FName local_1b0;
  FDataVertexMetadata local_1a8;
  FDataVertexMetadata local_180;
  FDataVertexMetadata local_158;
  TOutputDataVertex<Metasound::FAudioBuffer> local_130;
  TInputDataVertex<Metasound::FAudioBuffer> local_110;
  undefined1 local_d8 [32];
  undefined1 local_b8 [16];
  byte local_a8;
  TInputDataVertex<bool> local_a0;
  TInputDataVertex<float> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_248;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_1d0);
  FText::FText(&local_1a8.Description);
  FText::FText(&local_1a8.DisplayName);
  local_1a8.bIsAdvancedDisplay = false;
  if (Metasound::TBandSplitterOperator<5,1>::AudioInputNames.ArrayNum < 1) {
    local_228 = (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0;
    local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                (longlong)Metasound::TBandSplitterOperator<5,1>::AudioInputNames.ArrayNum;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
           TInputDataVertex<Metasound::FAudioBuffer><>
                     (&local_110,
                      (FName *)Metasound::TBandSplitterOperator<5,1>::AudioInputNames.
                               AllocatorInstance.Data,&local_1a8);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar5);
  if (0xc < (byte)local_110._48_1_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_110._48_1_])(&local_110.field_0x20);
  if (local_1a8.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_1a8.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.Description.TextData.Reference + 0x10))();
  }
  pFVar5 = (FInputDataVertex *)
           Metasound::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
                     (local_d8,&Metasound::BandSplitterNode::InputFilterOrderName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar5);
  if (0xc < local_a8) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_a8])(local_b8);
  local_1f8[0] = true;
  pFVar5 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_a0,&Metasound::BandSplitterNode::InputPhaseCompensateName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_1f8);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar5);
  if (0xc < (byte)local_a0._48_1_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
  fVar2 = __real_43fa0000;
  uVar10 = 0;
  do {
    FText::FText(&local_180.Description);
    FText::FText(&local_180.DisplayName);
    local_180.bIsAdvancedDisplay = false;
    uVar9 = uVar10 + 1;
    local_1f4 = (float)uVar9 * fVar2;
    if (Metasound::TBandSplitterOperator<5,1>::CrossoverInputNames.ArrayNum <= (int)uVar10) {
      local_228 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar10;
      local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<5,1>::CrossoverInputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar5 = (FInputDataVertex *)
             Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_68,
                        (FName *)(Metasound::TBandSplitterOperator<5,1>::CrossoverInputNames.
                                  AllocatorInstance.Data + (longlong)(int)uVar10 * 8),&local_180,
                        &local_1f4);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar5);
    uVar8 = (ulonglong)(byte)local_68._48_1_;
    if (0xc < (byte)local_68._48_1_) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_68.field_0x20);
    if (local_180.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_180.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180.Description.TextData.Reference + 0x10))();
    }
    uVar10 = uVar9;
  } while (uVar9 < 4);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_1f0);
  uVar10 = 0;
  do {
    FText::FText(&local_158.Description);
    FText::FText(&local_158.DisplayName);
    local_158.bIsAdvancedDisplay = false;
    uVar9 = 0;
    if ((int)uVar10 < Metasound::TBandSplitterOperator<5,1>::AudioOutputNames.ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_228 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar10;
      local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<5,1>::AudioOutputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    local_1b0 = *(FName *)(Metasound::TBandSplitterOperator<5,1>::AudioOutputNames.AllocatorInstance
                           .Data + (longlong)(int)uVar10 * 8);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>(&local_130,&local_1b0,&local_158);
    if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_ !=
        (TOutputDataVertex<Metasound::FAudioBuffer> *)
        (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20)) {
      pTVar7 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_;
      do {
        if (*(longlong *)&pTVar7->field_0x8 == *(longlong *)&pTVar6->field_0x8) {
          *(longlong *)&pTVar7->field_0x8 = *(longlong *)&pTVar6->field_0x8;
          *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar6->field_0x10;
          *(undefined4 *)&pTVar7->field_0x18 = *(undefined4 *)&pTVar6->field_0x18;
          goto LAB_14b000966;
        }
        pTVar7 = pTVar7 + 1;
      } while (pTVar7 != (TOutputDataVertex<Metasound::FAudioBuffer> *)
                         (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20));
    }
    if (((ulonglong)local_1f0._padding_ <= pTVar6) &&
       (pTVar6 < (TOutputDataVertex<Metasound::FAudioBuffer> *)
                 (local_1f0._padding_ + (longlong)local_1f0._padding_._4_4_ * 0x20))) {
      local_208 = 0x20;
      local_220 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_;
      local_228 = pTVar6;
      local_218 = (longlong)local_1f0._padding_._4_4_;
      local_210 = (longlong)(int)local_1f0._padding_;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexInterface *)(*pcVar1)();
        return pFVar4;
      }
    }
    if ((int)local_1f0._padding_ == local_1f0._padding_._4_4_) {
      local_1f0._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_1f0,
                      (int *)((longlong)&local_1f0._padding_ + 4));
    }
    *(undefined ***)(local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20))->field_0x8 =
         *(undefined8 *)&pTVar6->field_0x8;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20))->field_0x10 =
         *(undefined8 *)&pTVar6->field_0x10;
    *(undefined4 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20))->field_0x18 =
         *(undefined4 *)&pTVar6->field_0x18;
    *(undefined ***)(local_1f0._padding_ + (longlong)(int)local_1f0._padding_ * 0x20) =
         &___7FOutputDataVertex_Metasound__6B_;
    local_1f0._padding_._0_4_ = (int)local_1f0._padding_ + 1;
LAB_14b000966:
    if (local_158.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_158.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.Description.TextData.Reference + 0x10))();
    }
    uVar10 = uVar10 + 1;
    if (4 < uVar10) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_1d0,&local_1f0);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1f0.SubInterfaces.AllocatorInstance.Data,
                 local_1f0.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1f0.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1f0.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_1f0._padding_ !=
          (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free((void *)local_1f0._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1d0.SubInterfaces.AllocatorInstance.Data,
                 local_1d0.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1d0.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1d0.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_1d0._padding_,(int)local_1d0._padding_);
      if ((FInputDataVertex *)local_1d0._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_1d0._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// operator() @ 14b000a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TBandSplitterOperator<5,2>::GetDefaultInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  FVertexInterface *pFVar5;
  FInputDataVertex *pFVar6;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar7;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_258 [32];
  TOutputDataVertex<Metasound::FAudioBuffer> *local_238;
  TOutputDataVertex<Metasound::FAudioBuffer> *local_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  bool local_208 [8];
  FOutputVertexInterface local_200;
  float local_1e0;
  FName local_1dc;
  FInputVertexInterface local_1d0;
  FDataVertexMetadata local_1b0;
  FDataVertexMetadata local_188;
  FDataVertexMetadata local_160;
  TOutputDataVertex<Metasound::FAudioBuffer> local_138;
  TInputDataVertex<Metasound::FAudioBuffer> local_118;
  undefined1 local_e0 [32];
  undefined1 local_c0 [16];
  byte local_b0;
  TInputDataVertex<bool> local_a8;
  TInputDataVertex<float> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_258;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_1d0);
  uVar9 = 0;
  do {
    FText::FText(&local_188.Description);
    FText::FText(&local_188.DisplayName);
    local_188.bIsAdvancedDisplay = false;
    if (Metasound::TBandSplitterOperator<5,2>::AudioInputNames.ArrayNum <= (int)uVar9) {
      local_238 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar9;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<5,2>::AudioInputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar6 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_118,
                        (FName *)(Metasound::TBandSplitterOperator<5,2>::AudioInputNames.
                                  AllocatorInstance.Data + (longlong)(int)uVar9 * 8),&local_188);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar6);
    uVar10 = (ulonglong)(byte)local_118._48_1_;
    if (0xc < (byte)local_118._48_1_) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_118.field_0x20);
    if (local_188.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_188.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.Description.TextData.Reference + 0x10))();
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 2);
  pFVar6 = (FInputDataVertex *)
           Metasound::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
           TInputDataVertex<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_><>
                     (local_e0,&Metasound::BandSplitterNode::InputFilterOrderName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar6);
  if (0xc < local_b0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_b0])(local_c0);
  local_208[0] = true;
  pFVar6 = (FInputDataVertex *)
           Metasound::TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                     (&local_a8,&Metasound::BandSplitterNode::InputPhaseCompensateName,
                      &Metasound::FDataVertexMetadata::EmptyBasic,local_208);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar6);
  if (0xc < (byte)local_a8._48_1_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
  fVar2 = __real_43fa0000;
  uVar9 = 0;
  do {
    FText::FText(&local_160.Description);
    FText::FText(&local_160.DisplayName);
    local_160.bIsAdvancedDisplay = false;
    uVar11 = uVar9 + 1;
    local_1e0 = (float)uVar11 * fVar2;
    if (Metasound::TBandSplitterOperator<5,2>::CrossoverInputNames.ArrayNum <= (int)uVar9) {
      local_238 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar9;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<5,2>::CrossoverInputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar6 = (FInputDataVertex *)
             Metasound::TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_70,
                        (FName *)(Metasound::TBandSplitterOperator<5,2>::CrossoverInputNames.
                                  AllocatorInstance.Data + (longlong)(int)uVar9 * 8),&local_160,
                        &local_1e0);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_1d0,pFVar6);
    uVar10 = (ulonglong)(byte)local_70._48_1_;
    if (0xc < (byte)local_70._48_1_) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar10])(&local_70.field_0x20);
    if (local_160.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_160.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.Description.TextData.Reference + 0x10))();
    }
    uVar9 = uVar11;
  } while (uVar11 < 4);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_200);
  uVar9 = 0;
  do {
    FText::FText(&local_1b0.Description);
    FText::FText(&local_1b0.DisplayName);
    local_1b0.bIsAdvancedDisplay = false;
    uVar11 = 0;
    if ((int)uVar9 < Metasound::TBandSplitterOperator<5,2>::AudioOutputNames.ArrayNum) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    if (uVar11 == 0) {
      local_238 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar9;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<5,2>::AudioOutputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    local_1dc = *(FName *)(Metasound::TBandSplitterOperator<5,2>::AudioOutputNames.AllocatorInstance
                           .Data + (longlong)(int)uVar9 * 8);
    pTVar7 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>(&local_138,&local_1dc,&local_1b0);
    if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_ !=
        (TOutputDataVertex<Metasound::FAudioBuffer> *)
        (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20)) {
      pTVar8 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_;
      do {
        if (*(longlong *)&pTVar8->field_0x8 == *(longlong *)&pTVar7->field_0x8) {
          *(longlong *)&pTVar8->field_0x8 = *(longlong *)&pTVar7->field_0x8;
          *(undefined8 *)&pTVar8->field_0x10 = *(undefined8 *)&pTVar7->field_0x10;
          *(undefined4 *)&pTVar8->field_0x18 = *(undefined4 *)&pTVar7->field_0x18;
          goto LAB_14b000f06;
        }
        pTVar8 = pTVar8 + 1;
      } while (pTVar8 != (TOutputDataVertex<Metasound::FAudioBuffer> *)
                         (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20));
    }
    if (((ulonglong)local_200._padding_ <= pTVar7) &&
       (pTVar7 < (TOutputDataVertex<Metasound::FAudioBuffer> *)
                 (local_200._padding_ + (longlong)local_200._padding_._4_4_ * 0x20))) {
      local_218 = 0x20;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_;
      local_238 = pTVar7;
      local_228 = (longlong)local_200._padding_._4_4_;
      local_220 = (longlong)(int)local_200._padding_;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    if ((int)local_200._padding_ == local_200._padding_._4_4_) {
      local_200._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_200,
                      (int *)((longlong)&local_200._padding_ + 4));
    }
    *(undefined ***)(local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x8 =
         *(undefined8 *)&pTVar7->field_0x8;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x10 =
         *(undefined8 *)&pTVar7->field_0x10;
    *(undefined4 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x18 =
         *(undefined4 *)&pTVar7->field_0x18;
    *(undefined ***)(local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20) =
         &___7FOutputDataVertex_Metasound__6B_;
    local_200._padding_._0_4_ = (int)local_200._padding_ + 1;
LAB_14b000f06:
    if (local_1b0.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_1b0.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.Description.TextData.Reference + 0x10))();
    }
    FText::FText(&local_1b0.Description);
    FText::FText(&local_1b0.DisplayName);
    uVar11 = uVar9 + 1;
    local_1b0.bIsAdvancedDisplay = false;
    uVar4 = 0;
    if ((int)uVar11 < Metasound::TBandSplitterOperator<5,2>::AudioOutputNames.ArrayNum) {
      uVar4 = ~uVar11 >> 0x1f;
    }
    if (uVar4 == 0) {
      local_238 = (TOutputDataVertex<Metasound::FAudioBuffer> *)(longlong)(int)uVar11;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)
                  (longlong)Metasound::TBandSplitterOperator<5,2>::AudioOutputNames.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    local_1dc = *(FName *)(Metasound::TBandSplitterOperator<5,2>::AudioOutputNames.AllocatorInstance
                           .Data + (longlong)(int)uVar11 * 8);
    pTVar7 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>(&local_138,&local_1dc,&local_1b0);
    if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_ !=
        (TOutputDataVertex<Metasound::FAudioBuffer> *)
        (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20)) {
      pTVar8 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_;
      do {
        if (*(longlong *)&pTVar8->field_0x8 == *(longlong *)&pTVar7->field_0x8) {
          *(longlong *)&pTVar8->field_0x8 = *(longlong *)&pTVar7->field_0x8;
          *(undefined8 *)&pTVar8->field_0x10 = *(undefined8 *)&pTVar7->field_0x10;
          *(undefined4 *)&pTVar8->field_0x18 = *(undefined4 *)&pTVar7->field_0x18;
          goto LAB_14b001096;
        }
        pTVar8 = pTVar8 + 1;
      } while (pTVar8 != (TOutputDataVertex<Metasound::FAudioBuffer> *)
                         (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20));
    }
    if (((ulonglong)local_200._padding_ <= pTVar7) &&
       (pTVar7 < (TOutputDataVertex<Metasound::FAudioBuffer> *)
                 (local_200._padding_ + (longlong)local_200._padding_._4_4_ * 0x20))) {
      local_218 = 0x20;
      local_230 = (TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_;
      local_238 = pTVar7;
      local_228 = (longlong)local_200._padding_._4_4_;
      local_220 = (longlong)(int)local_200._padding_;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FVertexInterface *)(*pcVar1)();
        return pFVar5;
      }
    }
    if ((int)local_200._padding_ == local_200._padding_._4_4_) {
      local_200._padding_._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,(ForAnyElementType *)&local_200,
                      (int *)((longlong)&local_200._padding_ + 4));
    }
    *(undefined ***)(local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20) =
         &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x8 =
         *(undefined8 *)&pTVar7->field_0x8;
    *(undefined8 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x10 =
         *(undefined8 *)&pTVar7->field_0x10;
    *(undefined4 *)
     &((TOutputDataVertex<Metasound::FAudioBuffer> *)
      (local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20))->field_0x18 =
         *(undefined4 *)&pTVar7->field_0x18;
    *(undefined ***)(local_200._padding_ + (longlong)(int)local_200._padding_ * 0x20) =
         &___7FOutputDataVertex_Metasound__6B_;
    local_200._padding_._0_4_ = (int)local_200._padding_ + 1;
LAB_14b001096:
    if (local_1b0.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_1b0.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.Description.TextData.Reference + 0x10))();
    }
    uVar9 = uVar9 + 2;
    if (9 < uVar9) {
      Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_1d0,&local_200);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_200.SubInterfaces.AllocatorInstance.Data,
                 local_200.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_200.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_200.SubInterfaces.AllocatorInstance.Data);
      }
      if ((TOutputDataVertex<Metasound::FAudioBuffer> *)local_200._padding_ !=
          (TOutputDataVertex<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free((void *)local_200._padding_);
      }
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1d0.SubInterfaces.AllocatorInstance.Data,
                 local_1d0.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1d0.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1d0.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_1d0._padding_,(int)local_1d0._padding_);
      if ((FInputDataVertex *)local_1d0._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_1d0._padding_);
      }
      return __return_storage_ptr__;
    }
  } while( true );
}

// CopyClampCrossovers @ 14b006070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Metasound::TBandSplitterOperator<2,1>::CopyClampCrossovers(TBandSplitterOperator<2,1> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((this->Crossovers).ArrayNum != (this->CrossoverFrequencies).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Crossovers.Num() == CrossoverFrequencies.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBandsplitterNode.cpp"
                       ,0x145,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = false;
  iVar5 = 0;
  pFVar4 = (this->Crossovers).AllocatorInstance.Data;
  fVar8 = (float)(this->Settings).SampleRate * ___real_3ef33333;
  fVar9 = fVar8;
  if (__real_41a00000 <= fVar8) {
    fVar9 = __real_41a00000;
  }
  if (0 < (this->CrossoverFrequencies).ArrayNum) {
    pFVar6 = (this->CrossoverFrequencies).AllocatorInstance.Data + 8;
    bVar2 = false;
    do {
      fVar7 = **(float **)pFVar6;
      if (fVar8 <= **(float **)pFVar6) {
        fVar7 = fVar8;
      }
      if (fVar7 <= fVar9) {
        fVar7 = fVar9;
      }
      if (fVar7 != *(float *)pFVar4) {
        *(float *)pFVar4 = fVar7;
        bVar2 = true;
      }
      iVar5 = iVar5 + 1;
      pFVar6 = pFVar6 + 0x20;
      pFVar4 = pFVar4 + 4;
    } while (iVar5 < (this->CrossoverFrequencies).ArrayNum);
  }
  return bVar2;
}

// CopyClampCrossovers @ 14b006120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Metasound::TBandSplitterOperator<2,2>::CopyClampCrossovers(TBandSplitterOperator<2,2> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((this->Crossovers).ArrayNum != (this->CrossoverFrequencies).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Crossovers.Num() == CrossoverFrequencies.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBandsplitterNode.cpp"
                       ,0x145,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = false;
  iVar5 = 0;
  pFVar4 = (this->Crossovers).AllocatorInstance.Data;
  fVar8 = (float)(this->Settings).SampleRate * ___real_3ef33333;
  fVar9 = fVar8;
  if (__real_41a00000 <= fVar8) {
    fVar9 = __real_41a00000;
  }
  if (0 < (this->CrossoverFrequencies).ArrayNum) {
    pFVar6 = (this->CrossoverFrequencies).AllocatorInstance.Data + 8;
    bVar2 = false;
    do {
      fVar7 = **(float **)pFVar6;
      if (fVar8 <= **(float **)pFVar6) {
        fVar7 = fVar8;
      }
      if (fVar7 <= fVar9) {
        fVar7 = fVar9;
      }
      if (fVar7 != *(float *)pFVar4) {
        *(float *)pFVar4 = fVar7;
        bVar2 = true;
      }
      iVar5 = iVar5 + 1;
      pFVar6 = pFVar6 + 0x20;
      pFVar4 = pFVar4 + 4;
    } while (iVar5 < (this->CrossoverFrequencies).ArrayNum);
  }
  return bVar2;
}

// CopyClampCrossovers @ 14b0061d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Metasound::TBandSplitterOperator<3,1>::CopyClampCrossovers(TBandSplitterOperator<3,1> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((this->Crossovers).ArrayNum != (this->CrossoverFrequencies).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Crossovers.Num() == CrossoverFrequencies.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBandsplitterNode.cpp"
                       ,0x145,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = false;
  iVar5 = 0;
  pFVar4 = (this->Crossovers).AllocatorInstance.Data;
  fVar8 = (float)(this->Settings).SampleRate * ___real_3ef33333;
  fVar9 = fVar8;
  if (__real_41a00000 <= fVar8) {
    fVar9 = __real_41a00000;
  }
  if (0 < (this->CrossoverFrequencies).ArrayNum) {
    pFVar6 = (this->CrossoverFrequencies).AllocatorInstance.Data + 8;
    bVar2 = false;
    do {
      fVar7 = **(float **)pFVar6;
      if (fVar8 <= **(float **)pFVar6) {
        fVar7 = fVar8;
      }
      if (fVar7 <= fVar9) {
        fVar7 = fVar9;
      }
      if (fVar7 != *(float *)pFVar4) {
        *(float *)pFVar4 = fVar7;
        bVar2 = true;
      }
      iVar5 = iVar5 + 1;
      pFVar6 = pFVar6 + 0x20;
      pFVar4 = pFVar4 + 4;
    } while (iVar5 < (this->CrossoverFrequencies).ArrayNum);
  }
  return bVar2;
}

// CopyClampCrossovers @ 14b006280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Metasound::TBandSplitterOperator<3,2>::CopyClampCrossovers(TBandSplitterOperator<3,2> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((this->Crossovers).ArrayNum != (this->CrossoverFrequencies).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Crossovers.Num() == CrossoverFrequencies.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBandsplitterNode.cpp"
                       ,0x145,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = false;
  iVar5 = 0;
  pFVar4 = (this->Crossovers).AllocatorInstance.Data;
  fVar8 = (float)(this->Settings).SampleRate * ___real_3ef33333;
  fVar9 = fVar8;
  if (__real_41a00000 <= fVar8) {
    fVar9 = __real_41a00000;
  }
  if (0 < (this->CrossoverFrequencies).ArrayNum) {
    pFVar6 = (this->CrossoverFrequencies).AllocatorInstance.Data + 8;
    bVar2 = false;
    do {
      fVar7 = **(float **)pFVar6;
      if (fVar8 <= **(float **)pFVar6) {
        fVar7 = fVar8;
      }
      if (fVar7 <= fVar9) {
        fVar7 = fVar9;
      }
      if (fVar7 != *(float *)pFVar4) {
        *(float *)pFVar4 = fVar7;
        bVar2 = true;
      }
      iVar5 = iVar5 + 1;
      pFVar6 = pFVar6 + 0x20;
      pFVar4 = pFVar4 + 4;
    } while (iVar5 < (this->CrossoverFrequencies).ArrayNum);
  }
  return bVar2;
}

// CopyClampCrossovers @ 14b006330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Metasound::TBandSplitterOperator<4,1>::CopyClampCrossovers(TBandSplitterOperator<4,1> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((this->Crossovers).ArrayNum != (this->CrossoverFrequencies).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Crossovers.Num() == CrossoverFrequencies.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBandsplitterNode.cpp"
                       ,0x145,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = false;
  iVar5 = 0;
  pFVar4 = (this->Crossovers).AllocatorInstance.Data;
  fVar8 = (float)(this->Settings).SampleRate * ___real_3ef33333;
  fVar9 = fVar8;
  if (__real_41a00000 <= fVar8) {
    fVar9 = __real_41a00000;
  }
  if (0 < (this->CrossoverFrequencies).ArrayNum) {
    pFVar6 = (this->CrossoverFrequencies).AllocatorInstance.Data + 8;
    bVar2 = false;
    do {
      fVar7 = **(float **)pFVar6;
      if (fVar8 <= **(float **)pFVar6) {
        fVar7 = fVar8;
      }
      if (fVar7 <= fVar9) {
        fVar7 = fVar9;
      }
      if (fVar7 != *(float *)pFVar4) {
        *(float *)pFVar4 = fVar7;
        bVar2 = true;
      }
      iVar5 = iVar5 + 1;
      pFVar6 = pFVar6 + 0x20;
      pFVar4 = pFVar4 + 4;
    } while (iVar5 < (this->CrossoverFrequencies).ArrayNum);
  }
  return bVar2;
}

// CopyClampCrossovers @ 14b0063e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Metasound::TBandSplitterOperator<4,2>::CopyClampCrossovers(TBandSplitterOperator<4,2> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((this->Crossovers).ArrayNum != (this->CrossoverFrequencies).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Crossovers.Num() == CrossoverFrequencies.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBandsplitterNode.cpp"
                       ,0x145,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = false;
  iVar5 = 0;
  pFVar4 = (this->Crossovers).AllocatorInstance.Data;
  fVar8 = (float)(this->Settings).SampleRate * ___real_3ef33333;
  fVar9 = fVar8;
  if (__real_41a00000 <= fVar8) {
    fVar9 = __real_41a00000;
  }
  if (0 < (this->CrossoverFrequencies).ArrayNum) {
    pFVar6 = (this->CrossoverFrequencies).AllocatorInstance.Data + 8;
    bVar2 = false;
    do {
      fVar7 = **(float **)pFVar6;
      if (fVar8 <= **(float **)pFVar6) {
        fVar7 = fVar8;
      }
      if (fVar7 <= fVar9) {
        fVar7 = fVar9;
      }
      if (fVar7 != *(float *)pFVar4) {
        *(float *)pFVar4 = fVar7;
        bVar2 = true;
      }
      iVar5 = iVar5 + 1;
      pFVar6 = pFVar6 + 0x20;
      pFVar4 = pFVar4 + 4;
    } while (iVar5 < (this->CrossoverFrequencies).ArrayNum);
  }
  return bVar2;
}

// CopyClampCrossovers @ 14b006490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Metasound::TBandSplitterOperator<5,1>::CopyClampCrossovers(TBandSplitterOperator<5,1> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((this->Crossovers).ArrayNum != (this->CrossoverFrequencies).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Crossovers.Num() == CrossoverFrequencies.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBandsplitterNode.cpp"
                       ,0x145,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = false;
  iVar5 = 0;
  pFVar4 = (this->Crossovers).AllocatorInstance.Data;
  fVar8 = (float)(this->Settings).SampleRate * ___real_3ef33333;
  fVar9 = fVar8;
  if (__real_41a00000 <= fVar8) {
    fVar9 = __real_41a00000;
  }
  if (0 < (this->CrossoverFrequencies).ArrayNum) {
    pFVar6 = (this->CrossoverFrequencies).AllocatorInstance.Data + 8;
    bVar2 = false;
    do {
      fVar7 = **(float **)pFVar6;
      if (fVar8 <= **(float **)pFVar6) {
        fVar7 = fVar8;
      }
      if (fVar7 <= fVar9) {
        fVar7 = fVar9;
      }
      if (fVar7 != *(float *)pFVar4) {
        *(float *)pFVar4 = fVar7;
        bVar2 = true;
      }
      iVar5 = iVar5 + 1;
      pFVar6 = pFVar6 + 0x20;
      pFVar4 = pFVar4 + 4;
    } while (iVar5 < (this->CrossoverFrequencies).ArrayNum);
  }
  return bVar2;
}

// CopyClampCrossovers @ 14b006540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Metasound::TBandSplitterOperator<5,2>::CopyClampCrossovers(TBandSplitterOperator<5,2> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((this->Crossovers).ArrayNum != (this->CrossoverFrequencies).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Crossovers.Num() == CrossoverFrequencies.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBandsplitterNode.cpp"
                       ,0x145,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = false;
  iVar5 = 0;
  pFVar4 = (this->Crossovers).AllocatorInstance.Data;
  fVar8 = (float)(this->Settings).SampleRate * ___real_3ef33333;
  fVar9 = fVar8;
  if (__real_41a00000 <= fVar8) {
    fVar9 = __real_41a00000;
  }
  if (0 < (this->CrossoverFrequencies).ArrayNum) {
    pFVar6 = (this->CrossoverFrequencies).AllocatorInstance.Data + 8;
    bVar2 = false;
    do {
      fVar7 = **(float **)pFVar6;
      if (fVar8 <= **(float **)pFVar6) {
        fVar7 = fVar8;
      }
      if (fVar7 <= fVar9) {
        fVar7 = fVar9;
      }
      if (fVar7 != *(float *)pFVar4) {
        *(float *)pFVar4 = fVar7;
        bVar2 = true;
      }
      iVar5 = iVar5 + 1;
      pFVar6 = pFVar6 + 0x20;
      pFVar4 = pFVar4 + 4;
    } while (iVar5 < (this->CrossoverFrequencies).ArrayNum);
  }
  return bVar2;
}

// CreateNodeClassMetadata @ 14b009520

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TBandSplitterOperator<2,1>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  FNodeDisplayStyle local_108;
  TArray<FText,TSizedDefaultAllocator<32>_> local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FNodeClassName local_a8;
  FVertexInterface local_90;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_e8.TextData.Reference = NodeCategories::Filters.TextData.Reference;
  if (NodeCategories::Filters.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Filters.TextData.Reference + 8))
              (NodeCategories::Filters.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Filters.Flags;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_90,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  local_b8.Flags = param_2->Flags;
  ::FName::FName(&local_res20,"BandSplitter");
  FVar1 = local_148.Name;
  local_108.ImageName = local_148.Namespace;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_108.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_108.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_108.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_108.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName(&local_a8,&local_res20,param_1,&local_res18);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,0,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_118,&local_f8,&local_108);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b0097a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TBandSplitterOperator<2,2>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  FNodeDisplayStyle local_108;
  TArray<FText,TSizedDefaultAllocator<32>_> local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FNodeClassName local_a8;
  FVertexInterface local_90;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_e8.TextData.Reference = NodeCategories::Filters.TextData.Reference;
  if (NodeCategories::Filters.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Filters.TextData.Reference + 8))
              (NodeCategories::Filters.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Filters.Flags;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_90,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  local_b8.Flags = param_2->Flags;
  ::FName::FName(&local_res20,"BandSplitter");
  FVar1 = local_148.Name;
  local_108.ImageName = local_148.Namespace;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_108.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_108.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_108.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_108.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName(&local_a8,&local_res20,param_1,&local_res18);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,0,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_118,&local_f8,&local_108);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b009a20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TBandSplitterOperator<3,1>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  FNodeDisplayStyle local_108;
  TArray<FText,TSizedDefaultAllocator<32>_> local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FNodeClassName local_a8;
  FVertexInterface local_90;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_e8.TextData.Reference = NodeCategories::Filters.TextData.Reference;
  if (NodeCategories::Filters.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Filters.TextData.Reference + 8))
              (NodeCategories::Filters.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Filters.Flags;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_90,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  local_b8.Flags = param_2->Flags;
  ::FName::FName(&local_res20,"BandSplitter");
  FVar1 = local_148.Name;
  local_108.ImageName = local_148.Namespace;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_108.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_108.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_108.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_108.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName(&local_a8,&local_res20,param_1,&local_res18);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,0,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_118,&local_f8,&local_108);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b009ca0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TBandSplitterOperator<3,2>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  FNodeDisplayStyle local_108;
  TArray<FText,TSizedDefaultAllocator<32>_> local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FNodeClassName local_a8;
  FVertexInterface local_90;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_e8.TextData.Reference = NodeCategories::Filters.TextData.Reference;
  if (NodeCategories::Filters.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Filters.TextData.Reference + 8))
              (NodeCategories::Filters.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Filters.Flags;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_90,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  local_b8.Flags = param_2->Flags;
  ::FName::FName(&local_res20,"BandSplitter");
  FVar1 = local_148.Name;
  local_108.ImageName = local_148.Namespace;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_108.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_108.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_108.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_108.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName(&local_a8,&local_res20,param_1,&local_res18);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,0,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_118,&local_f8,&local_108);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b009f20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TBandSplitterOperator<4,1>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  FNodeDisplayStyle local_108;
  TArray<FText,TSizedDefaultAllocator<32>_> local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FNodeClassName local_a8;
  FVertexInterface local_90;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_e8.TextData.Reference = NodeCategories::Filters.TextData.Reference;
  if (NodeCategories::Filters.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Filters.TextData.Reference + 8))
              (NodeCategories::Filters.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Filters.Flags;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_90,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  local_b8.Flags = param_2->Flags;
  ::FName::FName(&local_res20,"BandSplitter");
  FVar1 = local_148.Name;
  local_108.ImageName = local_148.Namespace;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_108.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_108.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_108.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_108.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName(&local_a8,&local_res20,param_1,&local_res18);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,0,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_118,&local_f8,&local_108);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b00a1a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TBandSplitterOperator<4,2>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  FNodeDisplayStyle local_108;
  TArray<FText,TSizedDefaultAllocator<32>_> local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FNodeClassName local_a8;
  FVertexInterface local_90;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_e8.TextData.Reference = NodeCategories::Filters.TextData.Reference;
  if (NodeCategories::Filters.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Filters.TextData.Reference + 8))
              (NodeCategories::Filters.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Filters.Flags;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_90,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  local_b8.Flags = param_2->Flags;
  ::FName::FName(&local_res20,"BandSplitter");
  FVar1 = local_148.Name;
  local_108.ImageName = local_148.Namespace;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_108.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_108.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_108.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_108.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName(&local_a8,&local_res20,param_1,&local_res18);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,0,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_118,&local_f8,&local_108);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b00a420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TBandSplitterOperator<5,1>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  FNodeDisplayStyle local_108;
  TArray<FText,TSizedDefaultAllocator<32>_> local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FNodeClassName local_a8;
  FVertexInterface local_90;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_e8.TextData.Reference = NodeCategories::Filters.TextData.Reference;
  if (NodeCategories::Filters.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Filters.TextData.Reference + 8))
              (NodeCategories::Filters.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Filters.Flags;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_90,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  local_b8.Flags = param_2->Flags;
  ::FName::FName(&local_res20,"BandSplitter");
  FVar1 = local_148.Name;
  local_108.ImageName = local_148.Namespace;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_108.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_108.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_108.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_108.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName(&local_a8,&local_res20,param_1,&local_res18);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,0,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_118,&local_f8,&local_108);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateNodeClassMetadata @ 14b00a6a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TBandSplitterOperator<5,2>::CreateNodeClassMetadata
          (FNodeClassMetadata *__return_storage_ptr__,FName *param_1,FText *param_2,FText *param_3,
          FVertexInterface *param_4)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FNodeClassName *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  FNodeDisplayStyle local_108;
  TArray<FText,TSizedDefaultAllocator<32>_> local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FNodeClassName local_a8;
  FVertexInterface local_90;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_e8.TextData.Reference = NodeCategories::Filters.TextData.Reference;
  if (NodeCategories::Filters.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*NodeCategories::Filters.TextData.Reference + 8))
              (NodeCategories::Filters.TextData.Reference,local_res8);
  }
  local_e8.Flags = NodeCategories::Filters.Flags;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = FVertexInterface::FVertexInterface(&local_90,param_4);
  local_d8.TextData.Reference = PluginNodeMissingPrompt.TextData.Reference;
  if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
              (PluginNodeMissingPrompt.TextData.Reference,local_res8);
  }
  _Src.Data = PluginAuthor.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar4 = (longlong)PluginAuthor.Data.ArrayNum;
  local_d8.Flags = PluginNodeMissingPrompt.Flags;
  local_128.Data.ArrayNum = PluginAuthor.Data.ArrayNum;
  if (PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  local_c8.TextData.Reference = (param_3->TextData).Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 8))
              (local_c8.TextData.Reference,local_res8);
  }
  local_b8.TextData.Reference = (param_2->TextData).Reference;
  local_c8.Flags = param_3->Flags;
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 8))
              (local_b8.TextData.Reference,local_res8);
  }
  local_b8.Flags = param_2->Flags;
  ::FName::FName(&local_res20,"BandSplitter");
  FVar1 = local_148.Name;
  local_108.ImageName = local_148.Namespace;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_108.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_108.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_108.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_108.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_148.Name = FVar1;
  pFVar3 = FNodeClassName::FNodeClassName(&local_a8,&local_res20,param_1,&local_res18);
  local_148.Namespace = pFVar3->Namespace;
  local_148.Name = pFVar3->Name;
  local_148.Variant = pFVar3->Variant;
  FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,0,&local_b8,&local_c8,&local_128,&local_d8,pFVar2,
             &local_118,&local_f8,&local_108);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b00d670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TBandSplitterOperator<2,1>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  FInputBinding *pFVar7;
  FLiteral *pFVar8;
  TBandSplitterOperator<2,1> *this_00;
  TBandSplitterOperator<2,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar11;
  undefined1 auStackY_1c8 [32];
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> local_178;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_168;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  FName local_118;
  FName local_110;
  FString local_108;
  FString local_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_a8;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_90;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pTVar9 = (TBandSplitterOperator<2,1> *)0x0;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
            (this,(TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
                  local_c8,&local_118,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_e8,&local_110,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((AudioInputNames.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar2)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  FVar3.Data = AudioInputNames.AllocatorInstance.Data;
  pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)AudioInputNames.AllocatorInstance.Data);
  if (pFVar7 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar3.Data,&local_108);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_78);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar1,pFVar8);
    if ((0xc < local_78.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar2)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    pTVar11 = &local_78;
    local_a8.TypeIndex = local_78.TypeIndex;
LAB_14b00d8a0:
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_a8.TypeIndex])(pTVar11);
  }
  else {
    if ((pFVar7->Data).bIsSet == false) {
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_a8,&(pFVar7->Vertex).Literal.Value);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar1,
                 (FLiteral *)&local_a8);
      if ((0xc < local_a8.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
      pTVar11 = &local_a8;
      goto LAB_14b00d8a0;
    }
    if (((pFVar7->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar2)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_158);
  }
  if (((local_168.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_158
       ) && ((FScriptContainerElement *)local_158 <
             local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar2)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  iVar5 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar5 + 1;
  pFVar10 = local_168.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_158._8_8_;
  *(undefined8 *)(pFVar10 + 0x10) = local_158._16_8_;
  if ((TReferenceControllerBase<0> *)local_158._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_158._16_8_ + 8) = *(int *)(local_158._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((CrossoverInputNames.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar2)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  FVar3.Data = CrossoverInputNames.AllocatorInstance.Data;
  pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)CrossoverInputNames.AllocatorInstance.Data)
  ;
  if (pFVar7 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar3.Data,&local_f8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_60);
    TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
              ((TDataReadReference<float> *)local_138,pFVar1,pFVar8);
    if ((0xc < local_60.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar2)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    pTVar11 = &local_60;
    local_90.TypeIndex = local_60.TypeIndex;
  }
  else {
    if ((pFVar7->Data).bIsSet != false) {
      if (((pFVar7->Data).bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                (&(pFVar7->Data).TypedValue,(TDataReadReference<float> *)local_138);
      goto LAB_14b00db18;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_90,&(pFVar7->Vertex).Literal.Value);
    TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
              ((TDataReadReference<float> *)local_138,pFVar1,(FLiteral *)&local_90);
    if ((0xc < local_90.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar2)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    pTVar11 = &local_90;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_90.TypeIndex])(pTVar11);
LAB_14b00db18:
  if (((local_178.AllocatorInstance.Data <= (TDataReadReference<float> *)local_138) &&
      ((FScriptContainerElement *)local_138 <
       local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar2)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  iVar5 = local_178.ArrayNum;
  if (local_178.ArrayNum == local_178.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
  }
  local_178.ArrayNum = iVar5 + 1;
  pFVar10 = local_178.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_138._8_8_;
  *(undefined8 *)(pFVar10 + 0x10) = local_138._16_8_;
  if ((TReferenceControllerBase<0> *)local_138._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_138._16_8_ + 8) = *(int *)(local_138._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_M_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_138._16_8_);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0xc0);
  if (this_00 != (TBandSplitterOperator<2,1> *)0x0) {
    pTVar9 = TBandSplitterOperator<2,1>
                       (this_00,pFVar1,&local_168,&local_178,
                        (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                         *)local_c8,(TDataReadReference<bool> *)local_e8);
  }
  param_1->Node = (INode *)pTVar9;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c8._16_8_);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
  if ((TDataReadReference<float> *)local_178.AllocatorInstance.Data !=
      (TDataReadReference<float> *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)local_168.AllocatorInstance.Data,
             local_168.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)local_168.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b00dcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TBandSplitterOperator<2,2>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  FInputBinding *pFVar7;
  FLiteral *pFVar8;
  TBandSplitterOperator<2,2> *this_00;
  TBandSplitterOperator<2,2> *pTVar9;
  FScriptContainerElement *pFVar10;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar11;
  code *pcVar12;
  undefined1 auStackY_1c8 [32];
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_178;
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> local_168;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  FName local_118;
  FName local_110;
  FString local_108;
  FString local_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_a8;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_90;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pTVar9 = (TBandSplitterOperator<2,2> *)0x0;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
            (this,(TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
                  local_c8,&local_118,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_e8,&local_110,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((AudioInputNames.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar12 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  FVar3.Data = AudioInputNames.AllocatorInstance.Data;
  pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)AudioInputNames.AllocatorInstance.Data);
  if (pFVar7 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar3.Data,&local_108);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_90);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,pFVar8);
    bVar1 = local_90.TypeIndex;
    if ((0xc < local_90.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar12 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    pTVar11 = &local_90;
LAB_14b00def0:
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1])(pTVar11);
  }
  else {
    if ((pFVar7->Data).bIsSet == false) {
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_a8,&(pFVar7->Vertex).Literal.Value);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,
                 (FLiteral *)&local_a8);
      bVar1 = local_a8.TypeIndex;
      if ((0xc < local_a8.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar12 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar12)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
      pTVar11 = &local_a8;
      goto LAB_14b00def0;
    }
    if (((pFVar7->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar12 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_158);
  }
  if (((local_178.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_158
       ) && ((FScriptContainerElement *)local_158 <
             local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar12 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  iVar5 = local_178.ArrayNum;
  if (local_178.ArrayNum == local_178.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
  }
  local_178.ArrayNum = iVar5 + 1;
  pFVar10 = local_178.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_158._8_8_;
  *(undefined8 *)(pFVar10 + 0x10) = local_158._16_8_;
  if ((TReferenceControllerBase<0> *)local_158._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_158._16_8_ + 8) = *(int *)(local_158._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((AudioInputNames.ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar12 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  FVar3.Data = AudioInputNames.AllocatorInstance.Data;
  pFVar7 = FInputVertexInterfaceData::Find
                     (this,(FName *)(AudioInputNames.AllocatorInstance.Data + 8));
  if (pFVar7 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)(FVar3.Data + 8),&local_108);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_90);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,pFVar8);
    if ((0xc < local_90.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar12 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    pTVar11 = &local_90;
    local_a8.TypeIndex = local_90.TypeIndex;
LAB_14b00e16c:
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_a8.TypeIndex])(pTVar11);
  }
  else {
    if ((pFVar7->Data).bIsSet == false) {
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_a8,&(pFVar7->Vertex).Literal.Value);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,
                 (FLiteral *)&local_a8);
      if ((0xc < local_a8.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar12 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar12)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
      pTVar11 = &local_a8;
      goto LAB_14b00e16c;
    }
    if (((pFVar7->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar12 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_158);
  }
  if (((local_178.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_158
       ) && ((FScriptContainerElement *)local_158 <
             local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar12 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  iVar5 = local_178.ArrayNum;
  if (local_178.ArrayNum == local_178.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
  }
  local_178.ArrayNum = iVar5 + 1;
  pFVar10 = local_178.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_158._8_8_;
  *(undefined8 *)(pFVar10 + 0x10) = local_158._16_8_;
  if ((TReferenceControllerBase<0> *)local_158._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_158._16_8_ + 8) = *(int *)(local_158._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((CrossoverInputNames.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar12 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  FVar3.Data = CrossoverInputNames.AllocatorInstance.Data;
  pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)CrossoverInputNames.AllocatorInstance.Data)
  ;
  if (pFVar7 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar3.Data,&local_f8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_60);
    TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
              ((TDataReadReference<float> *)local_138,pFVar2,pFVar8);
    if ((0xc < local_60.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar12 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    pcVar12 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_60.TypeIndex];
    pTVar11 = &local_60;
  }
  else {
    if ((pFVar7->Data).bIsSet != false) {
      if (((pFVar7->Data).bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar12 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar12)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                (&(pFVar7->Data).TypedValue,(TDataReadReference<float> *)local_138);
      goto LAB_14b00e3f6;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_78,&(pFVar7->Vertex).Literal.Value);
    TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
              ((TDataReadReference<float> *)local_138,pFVar2,(FLiteral *)&local_78);
    if ((0xc < local_78.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar12 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    pcVar12 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_78.TypeIndex];
    pTVar11 = &local_78;
  }
  (*pcVar12)(pTVar11);
LAB_14b00e3f6:
  if (((local_168.AllocatorInstance.Data <= (TDataReadReference<float> *)local_138) &&
      ((FScriptContainerElement *)local_138 <
       local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar12 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  iVar5 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar5 + 1;
  pFVar10 = local_168.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_138._8_8_;
  *(undefined8 *)(pFVar10 + 0x10) = local_138._16_8_;
  if ((TReferenceControllerBase<0> *)local_138._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_138._16_8_ + 8) = *(int *)(local_138._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_M_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_138._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0xc0);
  if (this_00 != (TBandSplitterOperator<2,2> *)0x0) {
    pTVar9 = TBandSplitterOperator<2,2>
                       (this_00,pFVar2,&local_178,&local_168,
                        (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                         *)local_c8,(TDataReadReference<bool> *)local_e8);
  }
  param_1->Node = (INode *)pTVar9;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c8._16_8_);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
  if ((TDataReadReference<float> *)local_168.AllocatorInstance.Data !=
      (TDataReadReference<float> *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)local_178.AllocatorInstance.Data,
             local_178.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)local_178.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b00e5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TBandSplitterOperator<3,1>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar7;
  FInputBinding *pFVar8;
  FLiteral *pFVar9;
  TBandSplitterOperator<3,1> *this_00;
  TBandSplitterOperator<3,1> *pTVar10;
  FScriptContainerElement *pFVar11;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar12;
  undefined1 auStackY_1c8 [32];
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> local_178;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_168;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  FName local_118;
  FName local_110;
  FString local_108;
  FString local_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_a8;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_90;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pTVar10 = (TBandSplitterOperator<3,1> *)0x0;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
            (this,(TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
                  local_c8,&local_118,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_e8,&local_110,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((AudioInputNames.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar3)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  FVar4.Data = AudioInputNames.AllocatorInstance.Data;
  pFVar8 = FInputVertexInterfaceData::Find(this,(FName *)AudioInputNames.AllocatorInstance.Data);
  if (pFVar8 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar4.Data,&local_f8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_60);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_138,pFVar2,pFVar9);
    if ((0xc < local_60.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pTVar12 = &local_60;
    local_78.TypeIndex = local_60.TypeIndex;
LAB_14b00e7cd:
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_78.TypeIndex])(pTVar12);
  }
  else {
    if ((pFVar8->Data).bIsSet == false) {
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_78,&(pFVar8->Vertex).Literal.Value);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_138,pFVar2,
                 (FLiteral *)&local_78);
      if ((0xc < local_78.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      pTVar12 = &local_78;
      goto LAB_14b00e7cd;
    }
    if (((pFVar8->Data).bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_138);
  }
  if (((local_168.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_138
       ) && ((FScriptContainerElement *)local_138 <
             local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar3)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  iVar6 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar6 + 1;
  pFVar11 = local_168.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
  *(undefined ***)pFVar11 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar11 + 8) = local_138._8_8_;
  *(undefined8 *)(pFVar11 + 0x10) = local_138._16_8_;
  if ((TReferenceControllerBase<0> *)local_138._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_138._16_8_ + 8) = *(int *)(local_138._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar11 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_138._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((CrossoverInputNames.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar3)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  FVar4.Data = CrossoverInputNames.AllocatorInstance.Data;
  pFVar8 = FInputVertexInterfaceData::Find(this,(FName *)CrossoverInputNames.AllocatorInstance.Data)
  ;
  if (pFVar8 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar4.Data,&local_108);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_90);
    TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
              ((TDataReadReference<float> *)local_158,pFVar2,pFVar9);
    bVar1 = local_90.TypeIndex;
    if ((0xc < local_90.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pTVar12 = &local_90;
LAB_14b00ea3e:
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1])(pTVar12);
  }
  else {
    if ((pFVar8->Data).bIsSet == false) {
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_a8,&(pFVar8->Vertex).Literal.Value);
      TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                ((TDataReadReference<float> *)local_158,pFVar2,(FLiteral *)&local_a8);
      bVar1 = local_a8.TypeIndex;
      if ((0xc < local_a8.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      pTVar12 = &local_a8;
      goto LAB_14b00ea3e;
    }
    if (((pFVar8->Data).bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
              (&(pFVar8->Data).TypedValue,(TDataReadReference<float> *)local_158);
  }
  if (((local_178.AllocatorInstance.Data <= (TDataReadReference<float> *)local_158) &&
      ((FScriptContainerElement *)local_158 <
       local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar3)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  iVar6 = local_178.ArrayNum;
  if (local_178.ArrayNum == local_178.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
  }
  local_178.ArrayNum = iVar6 + 1;
  pFVar11 = local_178.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
  *(undefined ***)pFVar11 = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)(pFVar11 + 8) = local_158._8_8_;
  *(undefined8 *)(pFVar11 + 0x10) = local_158._16_8_;
  if ((TReferenceControllerBase<0> *)local_158._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_158._16_8_ + 8) = *(int *)(local_158._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar11 = &___7__TDataReadReference_M_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((CrossoverInputNames.ArrayNum < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar3)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  FVar4.Data = CrossoverInputNames.AllocatorInstance.Data;
  pFVar8 = FInputVertexInterfaceData::Find
                     (this,(FName *)(CrossoverInputNames.AllocatorInstance.Data + 8));
  if (pFVar8 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)(FVar4.Data + 8),&local_108);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_90);
    TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
              ((TDataReadReference<float> *)local_158,pFVar2,pFVar9);
    if ((0xc < local_90.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pTVar12 = &local_90;
    local_a8.TypeIndex = local_90.TypeIndex;
  }
  else {
    if ((pFVar8->Data).bIsSet != false) {
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<float> *)local_158);
      goto LAB_14b00ecc7;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_a8,&(pFVar8->Vertex).Literal.Value);
    TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
              ((TDataReadReference<float> *)local_158,pFVar2,(FLiteral *)&local_a8);
    if ((0xc < local_a8.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pTVar12 = &local_a8;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_a8.TypeIndex])(pTVar12);
LAB_14b00ecc7:
  if (((local_178.AllocatorInstance.Data <= (TDataReadReference<float> *)local_158) &&
      ((FScriptContainerElement *)local_158 <
       local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar3)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  iVar6 = local_178.ArrayNum;
  if (local_178.ArrayNum == local_178.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
  }
  local_178.ArrayNum = iVar6 + 1;
  pFVar11 = local_178.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
  *(undefined ***)pFVar11 = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)(pFVar11 + 8) = local_158._8_8_;
  *(undefined8 *)(pFVar11 + 0x10) = local_158._16_8_;
  if ((TReferenceControllerBase<0> *)local_158._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_158._16_8_ + 8) = *(int *)(local_158._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar11 = &___7__TDataReadReference_M_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0xc0);
  if (this_00 != (TBandSplitterOperator<3,1> *)0x0) {
    pTVar10 = TBandSplitterOperator<3,1>
                        (this_00,pFVar2,&local_168,&local_178,
                         (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                          *)local_c8,(TDataReadReference<bool> *)local_e8);
  }
  param_1->Node = (INode *)pTVar10;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c8._16_8_);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
  if ((TDataReadReference<float> *)local_178.AllocatorInstance.Data !=
      (TDataReadReference<float> *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)local_168.AllocatorInstance.Data,
             local_168.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)local_168.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b00ee70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TBandSplitterOperator<3,2>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  FInputBinding *pFVar7;
  FLiteral *pFVar8;
  TBandSplitterOperator<3,2> *this_00;
  TBandSplitterOperator<3,2> *pTVar9;
  FScriptContainerElement *pFVar10;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar11;
  code *pcVar12;
  ulonglong uVar13;
  undefined1 auStackY_1c8 [32];
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> local_178;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_168;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  FName local_118;
  FName local_110;
  FString local_108;
  FString local_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_a8;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_90;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pTVar9 = (TBandSplitterOperator<3,2> *)0x0;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
            (this,(TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *)
                  local_c8,&local_118,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_e8,&local_110,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((AudioInputNames.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar12 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  FVar3.Data = AudioInputNames.AllocatorInstance.Data;
  pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)AudioInputNames.AllocatorInstance.Data);
  if (pFVar7 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar3.Data,&local_108);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_78);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,pFVar8);
    bVar1 = local_78.TypeIndex;
    if ((0xc < local_78.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar12 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    pTVar11 = &local_78;
LAB_14b00f0a0:
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1])(pTVar11);
  }
  else {
    if ((pFVar7->Data).bIsSet == false) {
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_a8,&(pFVar7->Vertex).Literal.Value);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,
                 (FLiteral *)&local_a8);
      bVar1 = local_a8.TypeIndex;
      if ((0xc < local_a8.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar12 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar12)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
      pTVar11 = &local_a8;
      goto LAB_14b00f0a0;
    }
    if (((pFVar7->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar12 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_158);
  }
  if (((local_168.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_158
       ) && ((FScriptContainerElement *)local_158 <
             local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar12 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  iVar5 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar5 + 1;
  pFVar10 = local_168.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_158._8_8_;
  *(undefined8 *)(pFVar10 + 0x10) = local_158._16_8_;
  if ((TReferenceControllerBase<0> *)local_158._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_158._16_8_ + 8) = *(int *)(local_158._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((AudioInputNames.ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar12 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  FVar3.Data = AudioInputNames.AllocatorInstance.Data;
  pFVar7 = FInputVertexInterfaceData::Find
                     (this,(FName *)(AudioInputNames.AllocatorInstance.Data + 8));
  if (pFVar7 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)(FVar3.Data + 8),&local_108);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_78);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,pFVar8);
    if ((0xc < local_78.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar12 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    pTVar11 = &local_78;
    local_a8.TypeIndex = local_78.TypeIndex;
LAB_14b00f31c:
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_a8.TypeIndex])(pTVar11);
  }
  else {
    if ((pFVar7->Data).bIsSet == false) {
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_a8,&(pFVar7->Vertex).Literal.Value);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,
                 (FLiteral *)&local_a8);
      if ((0xc < local_a8.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar12 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar12)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
      pTVar11 = &local_a8;
      goto LAB_14b00f31c;
    }
    if (((pFVar7->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar12 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (&(pFVar7->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_158);
  }
  if (((local_168.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_158
       ) && ((FScriptContainerElement *)local_158 <
             local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar12 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  iVar5 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar5 + 1;
  pFVar10 = local_168.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_158._8_8_;
  *(undefined8 *)(pFVar10 + 0x10) = local_158._16_8_;
  if ((TReferenceControllerBase<0> *)local_158._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_158._16_8_ + 8) = *(int *)(local_158._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((CrossoverInputNames.ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar12 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  FVar3.Data = CrossoverInputNames.AllocatorInstance.Data;
  pFVar7 = FInputVertexInterfaceData::Find(this,(FName *)CrossoverInputNames.AllocatorInstance.Data)
  ;
  if (pFVar7 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar3.Data,&local_f8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_60);
    TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
              ((TDataReadReference<float> *)local_138,pFVar2,pFVar8);
    uVar13 = (ulonglong)local_60.TypeIndex;
    if ((0xc < local_60.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar12 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    pcVar12 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar13];
    pTVar11 = &local_60;
LAB_14b00f5a4:
    (*pcVar12)(pTVar11);
  }
  else {
    if ((pFVar7->Data).bIsSet == false) {
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_90,&(pFVar7->Vertex).Literal.Value);
      TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                ((TDataReadReference<float> *)local_138,pFVar2,(FLiteral *)&local_90);
      uVar13 = (ulonglong)local_90.TypeIndex;
      if ((0xc < local_90.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar12 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar12)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
      pcVar12 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar13];
      pTVar11 = &local_90;
      goto LAB_14b00f5a4;
    }
    if (((pFVar7->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar12 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
              (&(pFVar7->Data).TypedValue,(TDataReadReference<float> *)local_138);
  }
  if (((local_178.AllocatorInstance.Data <= (TDataReadReference<float> *)local_138) &&
      ((FScriptContainerElement *)local_138 <
       local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar12 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  iVar5 = local_178.ArrayNum;
  if (local_178.ArrayNum == local_178.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
  }
  local_178.ArrayNum = iVar5 + 1;
  pFVar10 = local_178.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_138._8_8_;
  *(undefined8 *)(pFVar10 + 0x10) = local_138._16_8_;
  if ((TReferenceControllerBase<0> *)local_138._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_138._16_8_ + 8) = *(int *)(local_138._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_M_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_138._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((CrossoverInputNames.ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar12 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  FVar3.Data = CrossoverInputNames.AllocatorInstance.Data;
  pFVar7 = FInputVertexInterfaceData::Find
                     (this,(FName *)(CrossoverInputNames.AllocatorInstance.Data + 8));
  if (pFVar7 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)(FVar3.Data + 8),&local_f8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    pFVar8 = FLiteral::CreateInvalid((FLiteral *)&local_60);
    TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
              ((TDataReadReference<float> *)local_138,pFVar2,pFVar8);
    if ((0xc < local_60.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar12 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    pcVar12 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_60.TypeIndex];
    pTVar11 = &local_60;
  }
  else {
    if ((pFVar7->Data).bIsSet != false) {
      if (((pFVar7->Data).bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar12 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar12)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                (&(pFVar7->Data).TypedValue,(TDataReadReference<float> *)local_138);
      goto LAB_14b00f82d;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_90,&(pFVar7->Vertex).Literal.Value);
    TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
              ((TDataReadReference<float> *)local_138,pFVar2,(FLiteral *)&local_90);
    if ((0xc < local_90.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar12 = (code *)swi(3);
      TVar6.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
    }
    pcVar12 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_90.TypeIndex];
    pTVar11 = &local_90;
  }
  (*pcVar12)(pTVar11);
LAB_14b00f82d:
  if (((local_178.AllocatorInstance.Data <= (TDataReadReference<float> *)local_138) &&
      ((FScriptContainerElement *)local_138 <
       local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar12 = (code *)swi(3);
    TVar6.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
  }
  iVar5 = local_178.ArrayNum;
  if (local_178.ArrayNum == local_178.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
  }
  local_178.ArrayNum = iVar5 + 1;
  pFVar10 = local_178.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_138._8_8_;
  *(undefined8 *)(pFVar10 + 0x10) = local_138._16_8_;
  if ((TReferenceControllerBase<0> *)local_138._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_138._16_8_ + 8) = *(int *)(local_138._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_M_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_138._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0xc0);
  if (this_00 != (TBandSplitterOperator<3,2> *)0x0) {
    pTVar9 = TBandSplitterOperator<3,2>
                       (this_00,pFVar2,&local_168,&local_178,
                        (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                         *)local_c8,(TDataReadReference<bool> *)local_e8);
  }
  param_1->Node = (INode *)pTVar9;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c8._16_8_);
  DestructItems<Metasound::TDataReadReference<float>,int>
            ((TDataReadReference<float> *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
  if ((TDataReadReference<float> *)local_178.AllocatorInstance.Data !=
      (TDataReadReference<float> *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)local_168.AllocatorInstance.Data,
             local_168.ArrayNum);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)local_168.AllocatorInstance.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b00f9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TBandSplitterOperator<4,1>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *this;
  byte bVar1;
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  ForAnyElementType this_01;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar7;
  FInputBinding *pFVar8;
  FLiteral *pFVar9;
  TBandSplitterOperator<4,1> *this_02;
  FScriptContainerElement *pFVar10;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar11;
  uint uVar12;
  TBandSplitterOperator<4,1> *pTVar13;
  undefined1 auStackY_1c8 [32];
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> local_178;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_168;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  FName local_118;
  FName local_110;
  FBuildOperatorParams *local_108;
  FString local_100;
  FString local_f0;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_a0;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_88;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  uVar12 = 0;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  local_108 = param_1;
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *
                     )local_c0,&local_118,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)local_e0,&local_110,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((AudioInputNames.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar3)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  this_01.Data = AudioInputNames.AllocatorInstance.Data;
  pFVar8 = FInputVertexInterfaceData::Find(this_00,(FName *)AudioInputNames.AllocatorInstance.Data);
  if (pFVar8 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)this_01.Data,&local_100);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_70);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,pFVar9);
    if ((0xc < local_70.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pTVar11 = &local_70;
    local_a0.TypeIndex = local_70.TypeIndex;
  }
  else {
    if ((pFVar8->Data).bIsSet != false) {
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_158
                );
      goto LAB_14b00fc09;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_a0,&(pFVar8->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs
              ((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,(FLiteral *)&local_a0
              );
    if ((0xc < local_a0.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pTVar11 = &local_a0;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_a0.TypeIndex])(pTVar11);
LAB_14b00fc09:
  if (((local_168.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_158
       ) && ((FScriptContainerElement *)local_158 <
             local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar3)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  iVar6 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar6 + 1;
  pFVar10 = local_168.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_158._8_8_;
  *(undefined8 *)(pFVar10 + 0x10) = local_158._16_8_;
  if ((TReferenceControllerBase<0> *)local_158._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_158._16_8_ + 8) = *(int *)(local_158._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    if ((CrossoverInputNames.ArrayNum <= (int)uVar12) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    this = (FName *)(CrossoverInputNames.AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
    pFVar8 = FInputVertexInterfaceData::Find(this_00,this);
    if (pFVar8 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(this,&local_f0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                ((TDataReadReference<float> *)local_138,pFVar2,pFVar9);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      pTVar11 = &local_58;
LAB_14b00fe96:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar11);
    }
    else {
      if ((pFVar8->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_88,&(pFVar8->Vertex).Literal.Value);
        TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                  ((TDataReadReference<float> *)local_138,pFVar2,(FLiteral *)&local_88);
        bVar1 = local_88.TypeIndex;
        if ((0xc < local_88.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
        }
        pTVar11 = &local_88;
        goto LAB_14b00fe96;
      }
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<float> *)local_138);
    }
    if (((local_178.AllocatorInstance.Data <= (TDataReadReference<float> *)local_138) &&
        ((FScriptContainerElement *)local_138 <
         local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    iVar6 = local_178.ArrayNum;
    if (local_178.ArrayNum == local_178.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
    }
    local_178.ArrayNum = iVar6 + 1;
    pFVar10 = local_178.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar10 = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)(pFVar10 + 8) = local_138._8_8_;
    *(undefined8 *)(pFVar10 + 0x10) = local_138._16_8_;
    if ((TReferenceControllerBase<0> *)local_138._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_138._16_8_ + 8) = *(int *)(local_138._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar10 = &___7__TDataReadReference_M_Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_138._16_8_);
    uVar12 = uVar12 + 1;
    if (2 < uVar12) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      this_02 = ::operator_new(0xc0);
      pTVar13 = (TBandSplitterOperator<4,1> *)0x0;
      if (this_02 != (TBandSplitterOperator<4,1> *)0x0) {
        pTVar13 = TBandSplitterOperator<4,1>
                            (this_02,pFVar2,&local_168,&local_178,
                             (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                              *)local_c0,(TDataReadReference<bool> *)local_e0);
      }
      pFVar4 = local_108;
      local_108->Node = (INode *)pTVar13;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_e0._16_8_);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_c0._16_8_);
      DestructItems<Metasound::TDataReadReference<float>,int>
                ((TDataReadReference<float> *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
      if ((TDataReadReference<float> *)local_178.AllocatorInstance.Data !=
          (TDataReadReference<float> *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_168.AllocatorInstance.Data,
                 local_168.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_168.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b010050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TBandSplitterOperator<4,2>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *this;
  byte bVar1;
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar2;
  ForAnyElementType FVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar7;
  FInputBinding *pFVar8;
  FLiteral *pFVar9;
  TBandSplitterOperator<4,2> *this_01;
  FScriptContainerElement *pFVar10;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar11;
  code *pcVar12;
  ulonglong uVar13;
  uint uVar14;
  TBandSplitterOperator<4,2> *pTVar15;
  undefined1 auStackY_1c8 [32];
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_178;
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> local_168;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  FName local_118;
  FName local_110;
  FBuildOperatorParams *local_108;
  FString local_100;
  FString local_f0;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_a0;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_88;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  uVar14 = 0;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_108 = param_1;
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *
                     )local_c0,&local_118,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)local_e0,&local_110,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((AudioInputNames.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar12 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  FVar3.Data = AudioInputNames.AllocatorInstance.Data;
  pFVar8 = FInputVertexInterfaceData::Find(this_00,(FName *)AudioInputNames.AllocatorInstance.Data);
  if (pFVar8 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar3.Data,&local_100);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_88);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,pFVar9);
    bVar1 = local_88.TypeIndex;
    if ((0xc < local_88.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar12 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pTVar11 = &local_88;
LAB_14b010283:
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1])(pTVar11);
  }
  else {
    if ((pFVar8->Data).bIsSet == false) {
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_a0,&(pFVar8->Vertex).Literal.Value);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,
                 (FLiteral *)&local_a0);
      bVar1 = local_a0.TypeIndex;
      if ((0xc < local_a0.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar12 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar12)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      pTVar11 = &local_a0;
      goto LAB_14b010283;
    }
    if (((pFVar8->Data).bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar12 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_158);
  }
  if (((local_178.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_158
       ) && ((FScriptContainerElement *)local_158 <
             local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar12 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  iVar6 = local_178.ArrayNum;
  if (local_178.ArrayNum == local_178.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
  }
  local_178.ArrayNum = iVar6 + 1;
  pFVar10 = local_178.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_158._8_8_;
  *(undefined8 *)(pFVar10 + 0x10) = local_158._16_8_;
  if ((TReferenceControllerBase<0> *)local_158._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_158._16_8_ + 8) = *(int *)(local_158._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((AudioInputNames.ArrayNum < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar12 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  FVar3.Data = AudioInputNames.AllocatorInstance.Data;
  pFVar8 = FInputVertexInterfaceData::Find
                     (this_00,(FName *)(AudioInputNames.AllocatorInstance.Data + 8));
  if (pFVar8 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)(FVar3.Data + 8),&local_100);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_88);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,pFVar9);
    if ((0xc < local_88.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar12 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pTVar11 = &local_88;
    local_a0.TypeIndex = local_88.TypeIndex;
  }
  else {
    if ((pFVar8->Data).bIsSet != false) {
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar12 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar12)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_158
                );
      goto LAB_14b01050d;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_a0,&(pFVar8->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs
              ((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,(FLiteral *)&local_a0
              );
    if ((0xc < local_a0.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar12 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pTVar11 = &local_a0;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_a0.TypeIndex])(pTVar11);
LAB_14b01050d:
  if (((local_178.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_158
       ) && ((FScriptContainerElement *)local_158 <
             local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar12 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  iVar6 = local_178.ArrayNum;
  if (local_178.ArrayNum == local_178.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
  }
  local_178.ArrayNum = iVar6 + 1;
  pFVar10 = local_178.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_158._8_8_;
  *(undefined8 *)(pFVar10 + 0x10) = local_158._16_8_;
  if ((TReferenceControllerBase<0> *)local_158._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_158._16_8_ + 8) = *(int *)(local_158._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    if ((CrossoverInputNames.ArrayNum <= (int)uVar14) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar12 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    this = (FName *)(CrossoverInputNames.AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
    pFVar8 = FInputVertexInterfaceData::Find(this_00,this);
    if (pFVar8 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(this,&local_f0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                ((TDataReadReference<float> *)local_138,pFVar2,pFVar9);
      uVar13 = (ulonglong)local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar12 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar12)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      pcVar12 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar13];
      pTVar11 = &local_58;
LAB_14b0107ac:
      (*pcVar12)(pTVar11);
    }
    else {
      if ((pFVar8->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar8->Vertex).Literal.Value);
        TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                  ((TDataReadReference<float> *)local_138,pFVar2,(FLiteral *)&local_70);
        uVar13 = (ulonglong)local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar12 = (code *)swi(3);
          TVar7.Ptr = (IOperator *)(*pcVar12)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
        }
        pcVar12 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar13];
        pTVar11 = &local_70;
        goto LAB_14b0107ac;
      }
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar12 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar12)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<float> *)local_138);
    }
    if (((local_168.AllocatorInstance.Data <= (TDataReadReference<float> *)local_138) &&
        ((FScriptContainerElement *)local_138 <
         local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar12 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    iVar6 = local_168.ArrayNum;
    if (local_168.ArrayNum == local_168.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
    }
    local_168.ArrayNum = iVar6 + 1;
    pFVar10 = local_168.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar10 = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)(pFVar10 + 8) = local_138._8_8_;
    *(undefined8 *)(pFVar10 + 0x10) = local_138._16_8_;
    if ((TReferenceControllerBase<0> *)local_138._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_138._16_8_ + 8) = *(int *)(local_138._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar10 = &___7__TDataReadReference_M_Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_138._16_8_);
    uVar14 = uVar14 + 1;
    if (2 < uVar14) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      this_01 = ::operator_new(0xc0);
      pTVar15 = (TBandSplitterOperator<4,2> *)0x0;
      if (this_01 != (TBandSplitterOperator<4,2> *)0x0) {
        pTVar15 = TBandSplitterOperator<4,2>
                            (this_01,pFVar2,&local_178,&local_168,
                             (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                              *)local_c0,(TDataReadReference<bool> *)local_e0);
      }
      pFVar4 = local_108;
      local_108->Node = (INode *)pTVar15;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_e0._16_8_);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_c0._16_8_);
      DestructItems<Metasound::TDataReadReference<float>,int>
                ((TDataReadReference<float> *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
      if ((TDataReadReference<float> *)local_168.AllocatorInstance.Data !=
          (TDataReadReference<float> *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_178.AllocatorInstance.Data,
                 local_178.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_178.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b010960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TBandSplitterOperator<5,1>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *this;
  byte bVar1;
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  ForAnyElementType this_01;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar7;
  FInputBinding *pFVar8;
  FLiteral *pFVar9;
  TBandSplitterOperator<5,1> *this_02;
  FScriptContainerElement *pFVar10;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar11;
  uint uVar12;
  TBandSplitterOperator<5,1> *pTVar13;
  undefined1 auStackY_1c8 [32];
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> local_178;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_168;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  FName local_118;
  FName local_110;
  FBuildOperatorParams *local_108;
  FString local_100;
  FString local_f0;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_a0;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_88;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  uVar12 = 0;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  local_108 = param_1;
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *
                     )local_c0,&local_118,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)local_e0,&local_110,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((AudioInputNames.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar3)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  this_01.Data = AudioInputNames.AllocatorInstance.Data;
  pFVar8 = FInputVertexInterfaceData::Find(this_00,(FName *)AudioInputNames.AllocatorInstance.Data);
  if (pFVar8 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)this_01.Data,&local_100);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_70);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,pFVar9);
    if ((0xc < local_70.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pTVar11 = &local_70;
    local_a0.TypeIndex = local_70.TypeIndex;
  }
  else {
    if ((pFVar8->Data).bIsSet != false) {
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_158
                );
      goto LAB_14b010b99;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_a0,&(pFVar8->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs
              ((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,(FLiteral *)&local_a0
              );
    if ((0xc < local_a0.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pTVar11 = &local_a0;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_a0.TypeIndex])(pTVar11);
LAB_14b010b99:
  if (((local_168.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_158
       ) && ((FScriptContainerElement *)local_158 <
             local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar3)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  iVar6 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar6 + 1;
  pFVar10 = local_168.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_158._8_8_;
  *(undefined8 *)(pFVar10 + 0x10) = local_158._16_8_;
  if ((TReferenceControllerBase<0> *)local_158._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_158._16_8_ + 8) = *(int *)(local_158._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    if ((CrossoverInputNames.ArrayNum <= (int)uVar12) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    this = (FName *)(CrossoverInputNames.AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
    pFVar8 = FInputVertexInterfaceData::Find(this_00,this);
    if (pFVar8 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(this,&local_f0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                ((TDataReadReference<float> *)local_138,pFVar2,pFVar9);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      pTVar11 = &local_58;
LAB_14b010e26:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar11);
    }
    else {
      if ((pFVar8->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_88,&(pFVar8->Vertex).Literal.Value);
        TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                  ((TDataReadReference<float> *)local_138,pFVar2,(FLiteral *)&local_88);
        bVar1 = local_88.TypeIndex;
        if ((0xc < local_88.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7.Ptr = (IOperator *)(*pcVar3)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
        }
        pTVar11 = &local_88;
        goto LAB_14b010e26;
      }
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<float> *)local_138);
    }
    if (((local_178.AllocatorInstance.Data <= (TDataReadReference<float> *)local_138) &&
        ((FScriptContainerElement *)local_138 <
         local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    iVar6 = local_178.ArrayNum;
    if (local_178.ArrayNum == local_178.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
    }
    local_178.ArrayNum = iVar6 + 1;
    pFVar10 = local_178.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar10 = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)(pFVar10 + 8) = local_138._8_8_;
    *(undefined8 *)(pFVar10 + 0x10) = local_138._16_8_;
    if ((TReferenceControllerBase<0> *)local_138._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_138._16_8_ + 8) = *(int *)(local_138._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar10 = &___7__TDataReadReference_M_Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_138._16_8_);
    uVar12 = uVar12 + 1;
    if (3 < uVar12) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      this_02 = ::operator_new(0xc0);
      pTVar13 = (TBandSplitterOperator<5,1> *)0x0;
      if (this_02 != (TBandSplitterOperator<5,1> *)0x0) {
        pTVar13 = TBandSplitterOperator<5,1>
                            (this_02,pFVar2,&local_168,&local_178,
                             (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                              *)local_c0,(TDataReadReference<bool> *)local_e0);
      }
      pFVar4 = local_108;
      local_108->Node = (INode *)pTVar13;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_e0._16_8_);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_c0._16_8_);
      DestructItems<Metasound::TDataReadReference<float>,int>
                ((TDataReadReference<float> *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
      if ((TDataReadReference<float> *)local_178.AllocatorInstance.Data !=
          (TDataReadReference<float> *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_168.AllocatorInstance.Data,
                 local_168.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_168.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// CreateOperator @ 14b010fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TBandSplitterOperator<5,2>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FName *this;
  byte bVar1;
  FInputVertexInterfaceData *this_00;
  FOperatorSettings *pFVar2;
  ForAnyElementType FVar3;
  FBuildOperatorParams *pFVar4;
  bool bVar5;
  int iVar6;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar7;
  FInputBinding *pFVar8;
  FLiteral *pFVar9;
  TBandSplitterOperator<5,2> *this_01;
  FScriptContainerElement *pFVar10;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar11;
  code *pcVar12;
  ulonglong uVar13;
  uint uVar14;
  TBandSplitterOperator<5,2> *pTVar15;
  undefined1 auStackY_1c8 [32];
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_178;
  TArray<Metasound::TDataReadReference<float>,TSizedDefaultAllocator<32>_> local_168;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  FName local_118;
  FName local_110;
  FBuildOperatorParams *local_108;
  FString local_100;
  FString local_f0;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_a0;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_88;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  uVar14 = 0;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_108 = param_1;
  FLazyName::Resolve(&BandSplitterNode::InputFilterOrderName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
            (this_00,(TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> *
                     )local_c0,&local_118,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BandSplitterNode::InputPhaseCompensateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this_00,(TDataReadReference<bool> *)local_e0,&local_110,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((AudioInputNames.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar12 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  FVar3.Data = AudioInputNames.AllocatorInstance.Data;
  pFVar8 = FInputVertexInterfaceData::Find(this_00,(FName *)AudioInputNames.AllocatorInstance.Data);
  if (pFVar8 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)FVar3.Data,&local_100);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_88);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,pFVar9);
    bVar1 = local_88.TypeIndex;
    if ((0xc < local_88.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar12 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pTVar11 = &local_88;
LAB_14b011213:
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1])(pTVar11);
  }
  else {
    if ((pFVar8->Data).bIsSet == false) {
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_a0,&(pFVar8->Vertex).Literal.Value);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,
                 (FLiteral *)&local_a0);
      bVar1 = local_a0.TypeIndex;
      if ((0xc < local_a0.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar12 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar12)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      pTVar11 = &local_a0;
      goto LAB_14b011213;
    }
    if (((pFVar8->Data).bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar12 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_158);
  }
  if (((local_178.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_158
       ) && ((FScriptContainerElement *)local_158 <
             local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar12 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  iVar6 = local_178.ArrayNum;
  if (local_178.ArrayNum == local_178.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
  }
  local_178.ArrayNum = iVar6 + 1;
  pFVar10 = local_178.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_158._8_8_;
  *(undefined8 *)(pFVar10 + 0x10) = local_158._16_8_;
  if ((TReferenceControllerBase<0> *)local_158._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_158._16_8_ + 8) = *(int *)(local_158._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  if ((AudioInputNames.ArrayNum < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar12 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  FVar3.Data = AudioInputNames.AllocatorInstance.Data;
  pFVar8 = FInputVertexInterfaceData::Find
                     (this_00,(FName *)(AudioInputNames.AllocatorInstance.Data + 8));
  if (pFVar8 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString((FName *)(FVar3.Data + 8),&local_100);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_88);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,pFVar9);
    if ((0xc < local_88.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar12 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pTVar11 = &local_88;
    local_a0.TypeIndex = local_88.TypeIndex;
  }
  else {
    if ((pFVar8->Data).bIsSet != false) {
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar12 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar12)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_158
                );
      goto LAB_14b01149d;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_a0,&(pFVar8->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs
              ((TDataReadReference<Metasound::FAudioBuffer> *)local_158,pFVar2,(FLiteral *)&local_a0
              );
    if ((0xc < local_a0.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar12 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    pTVar11 = &local_a0;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_a0.TypeIndex])(pTVar11);
LAB_14b01149d:
  if (((local_178.AllocatorInstance.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_158
       ) && ((FScriptContainerElement *)local_158 <
             local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar12 = (code *)swi(3);
    TVar7.Ptr = (IOperator *)(*pcVar12)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
  }
  iVar6 = local_178.ArrayNum;
  if (local_178.ArrayNum == local_178.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
  }
  local_178.ArrayNum = iVar6 + 1;
  pFVar10 = local_178.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_158._8_8_;
  *(undefined8 *)(pFVar10 + 0x10) = local_158._16_8_;
  if ((TReferenceControllerBase<0> *)local_158._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_158._16_8_ + 8) = *(int *)(local_158._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  do {
    pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    if ((CrossoverInputNames.ArrayNum <= (int)uVar14) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar12 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    this = (FName *)(CrossoverInputNames.AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
    pFVar8 = FInputVertexInterfaceData::Find(this_00,this);
    if (pFVar8 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(this,&local_f0);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<float>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      pFVar9 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                ((TDataReadReference<float> *)local_138,pFVar2,pFVar9);
      uVar13 = (ulonglong)local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar12 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar12)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      pcVar12 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar13];
      pTVar11 = &local_58;
LAB_14b01173c:
      (*pcVar12)(pTVar11);
    }
    else {
      if ((pFVar8->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar8->Vertex).Literal.Value);
        TDataLiteralFactory<float,Metasound::TDataReadReference<float>_>::CreateExplicitArgs
                  ((TDataReadReference<float> *)local_138,pFVar2,(FLiteral *)&local_70);
        uVar13 = (ulonglong)local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar12 = (code *)swi(3);
          TVar7.Ptr = (IOperator *)(*pcVar12)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
        }
        pcVar12 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar13];
        pTVar11 = &local_70;
        goto LAB_14b01173c;
      }
      if (((pFVar8->Data).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar12 = (code *)swi(3);
        TVar7.Ptr = (IOperator *)(*pcVar12)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<float>_>
                (&(pFVar8->Data).TypedValue,(TDataReadReference<float> *)local_138);
    }
    if (((local_168.AllocatorInstance.Data <= (TDataReadReference<float> *)local_138) &&
        ((FScriptContainerElement *)local_138 <
         local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar12 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar12)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    iVar6 = local_168.ArrayNum;
    if (local_168.ArrayNum == local_168.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
    }
    local_168.ArrayNum = iVar6 + 1;
    pFVar10 = local_168.AllocatorInstance.Data + (longlong)iVar6 * 0x20;
    *(undefined ***)pFVar10 = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)(pFVar10 + 8) = local_138._8_8_;
    *(undefined8 *)(pFVar10 + 0x10) = local_138._16_8_;
    if ((TReferenceControllerBase<0> *)local_138._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_138._16_8_ + 8) = *(int *)(local_138._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar10 = &___7__TDataReadReference_M_Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_138._16_8_);
    uVar14 = uVar14 + 1;
    if (3 < uVar14) {
      pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
      this_01 = ::operator_new(0xc0);
      pTVar15 = (TBandSplitterOperator<5,2> *)0x0;
      if (this_01 != (TBandSplitterOperator<5,2> *)0x0) {
        pTVar15 = TBandSplitterOperator<5,2>
                            (this_01,pFVar2,&local_178,&local_168,
                             (TDataReadReference<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>
                              *)local_c0,(TDataReadReference<bool> *)local_e0);
      }
      pFVar4 = local_108;
      local_108->Node = (INode *)pTVar15;
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_e0._16_8_);
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<0> *)local_c0._16_8_);
      DestructItems<Metasound::TDataReadReference<float>,int>
                ((TDataReadReference<float> *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
      if ((TDataReadReference<float> *)local_168.AllocatorInstance.Data !=
          (TDataReadReference<float> *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
      DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_178.AllocatorInstance.Data,
                 local_178.ArrayNum);
      if ((TDataReadReference<Metasound::FAudioBuffer> *)local_178.AllocatorInstance.Data !=
          (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
             (IOperator *)pFVar4;
    }
  } while( true );
}

// Execute @ 14b01b760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TBandSplitterOperator<2,1>::Execute(TBandSplitterOperator<2,1> *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  FMultibandBuffer *pFVar4;
  FLinkwitzRileyBandSplitter *this_00;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  void *_Src;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  
  UpdateFilterSettings(this);
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar3 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)(lVar3 + 8);
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar4 = (FMultibandBuffer *)(this->MultiBandBuffers).AllocatorInstance.Data;
  pFVar4->NumSamples = iVar1;
  Audio::FMultibandBuffer::Reset(pFVar4);
  if ((this->Filters).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  this_00 = (FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data;
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar4 = (FMultibandBuffer *)(this->MultiBandBuffers).AllocatorInstance.Data;
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FLinkwitzRileyBandSplitter::ProcessAudioBuffer(this_00,(float *)*puVar5,pFVar4,iVar1);
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = (this->MultiBandBuffers).AllocatorInstance.Data;
  if (*(int *)(pFVar6 + 8) < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  _Src = *(void **)pFVar6;
  if ((this->AudioOutputs).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  memcpy((void *)*puVar5,_Src,(longlong)iVar1 << 2);
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = (this->MultiBandBuffers).AllocatorInstance.Data;
  uVar2 = *(uint *)(pFVar6 + 0x14);
  uVar9 = 0;
  if ((int)uVar2 < *(int *)(pFVar6 + 8)) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar3 = *(longlong *)pFVar6;
  if ((this->AudioOutputs).ArrayNum < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0x28);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  memcpy((void *)*puVar5,(void *)(lVar3 + (longlong)(int)uVar2 * 4),(longlong)iVar1 << 2);
  return;
}

// Execute @ 14b01bb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TBandSplitterOperator<2,2>::Execute(TBandSplitterOperator<2,2> *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FMultibandBuffer *this_00;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong local_res18;
  longlong local_res20;
  
  UpdateFilterSettings(this);
  uVar9 = 0;
  local_res18 = 0;
  lVar11 = 0;
  local_res20 = 0;
  do {
    uVar8 = ~uVar9 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar9 < (this->AudioInputs).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + lVar11 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    iVar1 = *(int *)(lVar2 + 8);
    uVar7 = 0;
    if ((int)uVar9 < (this->MultiBandBuffers).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this_00 = (FMultibandBuffer *)((this->MultiBandBuffers).AllocatorInstance.Data + local_res18);
    this_00->NumSamples = iVar1;
    Audio::FMultibandBuffer::Reset(this_00);
    uVar7 = 0;
    if ((int)uVar9 < (this->Filters).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar10 = (this->Filters).AllocatorInstance.Data;
    uVar7 = 0;
    if ((int)uVar9 < (this->MultiBandBuffers).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = (this->MultiBandBuffers).AllocatorInstance.Data;
    uVar7 = 0;
    if ((int)uVar9 < (this->AudioInputs).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar4 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + lVar11 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    Audio::FLinkwitzRileyBandSplitter::ProcessAudioBuffer
              ((FLinkwitzRileyBandSplitter *)(pFVar10 + local_res20),(float *)*puVar4,
               (FMultibandBuffer *)(pFVar3 + local_res18),iVar1);
    uVar7 = 0;
    if ((int)uVar9 < (this->MultiBandBuffers).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar10 = (this->MultiBandBuffers).AllocatorInstance.Data + local_res18;
    if (*(int *)(pFVar10 + 8) < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    _Src = *(void **)pFVar10;
    uVar7 = 0;
    if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + lVar11 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    memcpy((void *)*puVar4,_Src,(longlong)iVar1 << 2);
    uVar7 = 0;
    if ((int)uVar9 < (this->MultiBandBuffers).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar10 = (this->MultiBandBuffers).AllocatorInstance.Data + local_res18;
    uVar7 = *(uint *)(pFVar10 + 0x14);
    uVar8 = 0;
    if ((int)uVar7 < *(int *)(pFVar10 + 8)) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = *(longlong *)pFVar10;
    uVar8 = 0;
    if ((int)(uVar9 + 2) < (this->AudioOutputs).ArrayNum) {
      uVar8 = ~(uVar9 + 2) >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + lVar11 + 0x48);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    memcpy((void *)*puVar4,(void *)(lVar2 + (longlong)(int)uVar7 * 4),(longlong)iVar1 << 2);
    uVar9 = uVar9 + 1;
    local_res20 = local_res20 + 0x70;
    local_res18 = local_res18 + 0x18;
    lVar11 = lVar11 + 0x20;
  } while (uVar9 < 2);
  return;
}

// Execute @ 14b01c050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TBandSplitterOperator<3,1>::Execute(TBandSplitterOperator<3,1> *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  FMultibandBuffer *pFVar4;
  FLinkwitzRileyBandSplitter *this_00;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  void *_Src;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  size_t _Size;
  
  UpdateFilterSettings(this);
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar3 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)(lVar3 + 8);
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar4 = (FMultibandBuffer *)(this->MultiBandBuffers).AllocatorInstance.Data;
  pFVar4->NumSamples = iVar1;
  Audio::FMultibandBuffer::Reset(pFVar4);
  if ((this->Filters).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  this_00 = (FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data;
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar4 = (FMultibandBuffer *)(this->MultiBandBuffers).AllocatorInstance.Data;
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FLinkwitzRileyBandSplitter::ProcessAudioBuffer(this_00,(float *)*puVar5,pFVar4,iVar1);
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = (this->MultiBandBuffers).AllocatorInstance.Data;
  if (*(int *)(pFVar6 + 8) < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  _Src = *(void **)pFVar6;
  if ((this->AudioOutputs).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  _Size = (longlong)iVar1 << 2;
  memcpy((void *)*puVar5,_Src,_Size);
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = (this->MultiBandBuffers).AllocatorInstance.Data;
  uVar2 = *(uint *)(pFVar6 + 0x14);
  uVar9 = 0;
  if ((int)uVar2 < *(int *)(pFVar6 + 8)) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar3 = *(longlong *)pFVar6;
  if ((this->AudioOutputs).ArrayNum < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0x28);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  memcpy((void *)*puVar5,(void *)(lVar3 + (longlong)(int)uVar2 * 4),_Size);
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = (this->MultiBandBuffers).AllocatorInstance.Data;
  uVar2 = *(int *)(pFVar6 + 0x14) * 2;
  uVar9 = 0;
  if ((int)uVar2 < *(int *)(pFVar6 + 8)) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar3 = *(longlong *)pFVar6;
  if ((this->AudioOutputs).ArrayNum < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  puVar5 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0x48);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar5 + 2) != *(int *)(puVar5 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  memcpy((void *)*puVar5,(void *)(lVar3 + (longlong)(int)uVar2 * 4),_Size);
  return;
}

// Execute @ 14b01c560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TBandSplitterOperator<3,2>::Execute(TBandSplitterOperator<3,2> *this)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FMultibandBuffer *this_00;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  size_t _Size;
  longlong lVar12;
  longlong local_res18;
  longlong local_res20;
  
  UpdateFilterSettings(this);
  uVar10 = 0;
  local_res18 = 0;
  lVar12 = 0;
  local_res20 = 0;
  do {
    uVar9 = ~uVar10 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar10 < (this->AudioInputs).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + lVar12 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    iVar1 = *(int *)(lVar2 + 8);
    uVar7 = 0;
    if ((int)uVar10 < (this->MultiBandBuffers).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this_00 = (FMultibandBuffer *)((this->MultiBandBuffers).AllocatorInstance.Data + local_res18);
    this_00->NumSamples = iVar1;
    Audio::FMultibandBuffer::Reset(this_00);
    uVar7 = 0;
    if ((int)uVar10 < (this->Filters).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar11 = (this->Filters).AllocatorInstance.Data;
    uVar7 = 0;
    if ((int)uVar10 < (this->MultiBandBuffers).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = (this->MultiBandBuffers).AllocatorInstance.Data;
    uVar7 = 0;
    if ((int)uVar10 < (this->AudioInputs).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar4 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + lVar12 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    Audio::FLinkwitzRileyBandSplitter::ProcessAudioBuffer
              ((FLinkwitzRileyBandSplitter *)(pFVar11 + local_res20),(float *)*puVar4,
               (FMultibandBuffer *)(pFVar3 + local_res18),iVar1);
    uVar7 = 0;
    if ((int)uVar10 < (this->MultiBandBuffers).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar11 = (this->MultiBandBuffers).AllocatorInstance.Data + local_res18;
    if (*(int *)(pFVar11 + 8) < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    _Src = *(void **)pFVar11;
    uVar7 = 0;
    if ((int)uVar10 < (this->AudioOutputs).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + lVar12 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    _Size = (longlong)iVar1 << 2;
    memcpy((void *)*puVar4,_Src,_Size);
    uVar7 = 0;
    if ((int)uVar10 < (this->MultiBandBuffers).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar11 = (this->MultiBandBuffers).AllocatorInstance.Data + local_res18;
    uVar7 = *(uint *)(pFVar11 + 0x14);
    uVar8 = 0;
    if ((int)uVar7 < *(int *)(pFVar11 + 8)) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = *(longlong *)pFVar11;
    uVar8 = 0;
    if ((int)(uVar10 + 2) < (this->AudioOutputs).ArrayNum) {
      uVar8 = ~(uVar10 + 2) >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + lVar12 + 0x48);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    memcpy((void *)*puVar4,(void *)(lVar2 + (longlong)(int)uVar7 * 4),_Size);
    uVar7 = 0;
    if ((int)uVar10 < (this->MultiBandBuffers).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar11 = (this->MultiBandBuffers).AllocatorInstance.Data + local_res18;
    uVar7 = *(int *)(pFVar11 + 0x14) * 2;
    uVar9 = 0;
    if ((int)uVar7 < *(int *)(pFVar11 + 8)) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = *(longlong *)pFVar11;
    uVar9 = 0;
    if ((int)(uVar10 + 4) < (this->AudioOutputs).ArrayNum) {
      uVar9 = ~(uVar10 + 4) >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + lVar12 + 0x88);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    memcpy((void *)*puVar4,(void *)(lVar2 + (longlong)(int)uVar7 * 4),_Size);
    uVar10 = uVar10 + 1;
    local_res20 = local_res20 + 0x70;
    local_res18 = local_res18 + 0x18;
    lVar12 = lVar12 + 0x20;
  } while (uVar10 < 2);
  return;
}

// Execute @ 14b01cb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TBandSplitterOperator<4,1>::Execute(TBandSplitterOperator<4,1> *this)

{
  int iVar1;
  longlong lVar2;
  FMultibandBuffer *pFVar3;
  FLinkwitzRileyBandSplitter *this_00;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  UpdateFilterSettings(this);
  uVar10 = 0;
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar2 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)(lVar2 + 8);
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3 = (FMultibandBuffer *)(this->MultiBandBuffers).AllocatorInstance.Data;
  pFVar3->NumSamples = iVar1;
  Audio::FMultibandBuffer::Reset(pFVar3);
  if ((this->Filters).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this_00 = (FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data;
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3 = (FMultibandBuffer *)(this->MultiBandBuffers).AllocatorInstance.Data;
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  puVar4 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FLinkwitzRileyBandSplitter::ProcessAudioBuffer(this_00,(float *)*puVar4,pFVar3,iVar1);
  uVar12 = uVar10;
  do {
    if ((this->MultiBandBuffers).ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar5 = (this->MultiBandBuffers).AllocatorInstance.Data;
    uVar11 = (uint)uVar12;
    uVar9 = uVar11 * *(int *)(pFVar5 + 0x14);
    uVar8 = 0;
    if ((int)uVar9 < *(int *)(pFVar5 + 8)) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar2 = *(longlong *)pFVar5;
    uVar8 = 0;
    if ((int)uVar11 < (this->AudioOutputs).ArrayNum) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + uVar10 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    memcpy((void *)*puVar4,(void *)(lVar2 + (longlong)(int)uVar9 * 4),(longlong)iVar1 << 2);
    uVar12 = (ulonglong)(uVar11 + 1);
    uVar10 = uVar10 + 0x20;
  } while (uVar11 + 1 < 4);
  return;
}

// Execute @ 14b01ced0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TBandSplitterOperator<4,2>::Execute(TBandSplitterOperator<4,2> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FMultibandBuffer *this_00;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong local_res18;
  longlong local_58;
  longlong local_50;
  
  UpdateFilterSettings(this);
  uVar9 = 0;
  local_res18 = 0;
  local_58 = 0;
  local_50 = 0;
  do {
    uVar11 = ~uVar9 >> 0x1f;
    uVar12 = 0;
    if ((int)uVar9 < (this->AudioInputs).ArrayNum) {
      uVar12 = uVar11;
    }
    if (uVar12 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar13 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + local_res18 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar13 + 0x10) != *(int *)(lVar13 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    iVar1 = *(int *)(lVar13 + 8);
    uVar12 = 0;
    if ((int)uVar9 < (this->MultiBandBuffers).ArrayNum) {
      uVar12 = uVar11;
    }
    if (uVar12 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this_00 = (FMultibandBuffer *)((this->MultiBandBuffers).AllocatorInstance.Data + local_58);
    this_00->NumSamples = iVar1;
    Audio::FMultibandBuffer::Reset(this_00);
    uVar12 = 0;
    if ((int)uVar9 < (this->Filters).ArrayNum) {
      uVar12 = uVar11;
    }
    if (uVar12 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar10 = (this->Filters).AllocatorInstance.Data;
    uVar12 = 0;
    if ((int)uVar9 < (this->MultiBandBuffers).ArrayNum) {
      uVar12 = uVar11;
    }
    if (uVar12 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar2 = (this->MultiBandBuffers).AllocatorInstance.Data;
    uVar12 = 0;
    if ((int)uVar9 < (this->AudioInputs).ArrayNum) {
      uVar12 = uVar11;
    }
    if (uVar12 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar3 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + local_res18 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    Audio::FLinkwitzRileyBandSplitter::ProcessAudioBuffer
              ((FLinkwitzRileyBandSplitter *)(pFVar10 + local_50),(float *)*puVar3,
               (FMultibandBuffer *)(pFVar2 + local_58),iVar1);
    uVar14 = 0;
    lVar13 = local_res18;
    uVar12 = uVar9;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->MultiBandBuffers).ArrayNum) {
        uVar7 = uVar11;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar10 = (this->MultiBandBuffers).AllocatorInstance.Data + local_58;
      uVar8 = uVar14 * *(int *)(pFVar10 + 0x14);
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(pFVar10 + 8)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar4 = *(longlong *)pFVar10;
      uVar7 = 0;
      if ((int)uVar12 < (this->AudioOutputs).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      puVar3 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + lVar13 + 8);
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      memcpy((void *)*puVar3,(void *)(lVar4 + (longlong)(int)uVar8 * 4),(longlong)iVar1 << 2);
      uVar14 = uVar14 + 1;
      uVar12 = uVar12 + 2;
      lVar13 = lVar13 + 0x40;
    } while (uVar14 < 4);
    uVar9 = uVar9 + 1;
    local_50 = local_50 + 0x70;
    local_58 = local_58 + 0x18;
    local_res18 = local_res18 + 0x20;
  } while (uVar9 < 2);
  return;
}

// Execute @ 14b01d310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TBandSplitterOperator<5,1>::Execute(TBandSplitterOperator<5,1> *this)

{
  int iVar1;
  longlong lVar2;
  FMultibandBuffer *pFVar3;
  FLinkwitzRileyBandSplitter *this_00;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  UpdateFilterSettings(this);
  uVar10 = 0;
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar2 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)(lVar2 + 8);
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3 = (FMultibandBuffer *)(this->MultiBandBuffers).AllocatorInstance.Data;
  pFVar3->NumSamples = iVar1;
  Audio::FMultibandBuffer::Reset(pFVar3);
  if ((this->Filters).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this_00 = (FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data;
  if ((this->MultiBandBuffers).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3 = (FMultibandBuffer *)(this->MultiBandBuffers).AllocatorInstance.Data;
  if ((this->AudioInputs).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  puVar4 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FLinkwitzRileyBandSplitter::ProcessAudioBuffer(this_00,(float *)*puVar4,pFVar3,iVar1);
  uVar12 = uVar10;
  do {
    if ((this->MultiBandBuffers).ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar5 = (this->MultiBandBuffers).AllocatorInstance.Data;
    uVar11 = (uint)uVar12;
    uVar9 = uVar11 * *(int *)(pFVar5 + 0x14);
    uVar8 = 0;
    if ((int)uVar9 < *(int *)(pFVar5 + 8)) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar2 = *(longlong *)pFVar5;
    uVar8 = 0;
    if ((int)uVar11 < (this->AudioOutputs).ArrayNum) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + uVar10 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    memcpy((void *)*puVar4,(void *)(lVar2 + (longlong)(int)uVar9 * 4),(longlong)iVar1 << 2);
    uVar12 = (ulonglong)(uVar11 + 1);
    uVar10 = uVar10 + 0x20;
  } while (uVar11 + 1 < 5);
  return;
}

// Execute @ 14b01d650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TBandSplitterOperator<5,2>::Execute(TBandSplitterOperator<5,2> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FMultibandBuffer *this_00;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong local_res18;
  longlong local_58;
  longlong local_50;
  
  UpdateFilterSettings(this);
  uVar9 = 0;
  local_res18 = 0;
  local_58 = 0;
  local_50 = 0;
  do {
    uVar11 = ~uVar9 >> 0x1f;
    uVar12 = 0;
    if ((int)uVar9 < (this->AudioInputs).ArrayNum) {
      uVar12 = uVar11;
    }
    if (uVar12 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar13 = *(longlong *)((this->AudioInputs).AllocatorInstance.Data + local_res18 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar13 + 0x10) != *(int *)(lVar13 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    iVar1 = *(int *)(lVar13 + 8);
    uVar12 = 0;
    if ((int)uVar9 < (this->MultiBandBuffers).ArrayNum) {
      uVar12 = uVar11;
    }
    if (uVar12 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this_00 = (FMultibandBuffer *)((this->MultiBandBuffers).AllocatorInstance.Data + local_58);
    this_00->NumSamples = iVar1;
    Audio::FMultibandBuffer::Reset(this_00);
    uVar12 = 0;
    if ((int)uVar9 < (this->Filters).ArrayNum) {
      uVar12 = uVar11;
    }
    if (uVar12 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar10 = (this->Filters).AllocatorInstance.Data;
    uVar12 = 0;
    if ((int)uVar9 < (this->MultiBandBuffers).ArrayNum) {
      uVar12 = uVar11;
    }
    if (uVar12 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar2 = (this->MultiBandBuffers).AllocatorInstance.Data;
    uVar12 = 0;
    if ((int)uVar9 < (this->AudioInputs).ArrayNum) {
      uVar12 = uVar11;
    }
    if (uVar12 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar3 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + local_res18 + 8);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    Audio::FLinkwitzRileyBandSplitter::ProcessAudioBuffer
              ((FLinkwitzRileyBandSplitter *)(pFVar10 + local_50),(float *)*puVar3,
               (FMultibandBuffer *)(pFVar2 + local_58),iVar1);
    uVar14 = 0;
    lVar13 = local_res18;
    uVar12 = uVar9;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->MultiBandBuffers).ArrayNum) {
        uVar7 = uVar11;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar10 = (this->MultiBandBuffers).AllocatorInstance.Data + local_58;
      uVar8 = uVar14 * *(int *)(pFVar10 + 0x14);
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(pFVar10 + 8)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar4 = *(longlong *)pFVar10;
      uVar7 = 0;
      if ((int)uVar12 < (this->AudioOutputs).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      puVar3 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + lVar13 + 8);
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      memcpy((void *)*puVar3,(void *)(lVar4 + (longlong)(int)uVar8 * 4),(longlong)iVar1 << 2);
      uVar14 = uVar14 + 1;
      uVar12 = uVar12 + 2;
      lVar13 = lVar13 + 0x40;
    } while (uVar14 < 5);
    uVar9 = uVar9 + 1;
    local_50 = local_50 + 0x70;
    local_58 = local_58 + 0x18;
    local_res18 = local_res18 + 0x20;
  } while (uVar9 < 2);
  return;
}

// GetDefaultInterface @ 14b024090

FVertexInterface * __cdecl Metasound::TBandSplitterOperator<2,1>::GetDefaultInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,1>::GetDefaultInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,1>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,1>::GetDefaultInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TBandSplitterOperator<2,1>::GetDefaultInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,1>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TBandSplitterOperator<2,1>::GetDefaultInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,1>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,1>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,1>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b024120

FVertexInterface * __cdecl Metasound::TBandSplitterOperator<2,2>::GetDefaultInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,2>::GetDefaultInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,2>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,2>::GetDefaultInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TBandSplitterOperator<2,2>::GetDefaultInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,2>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TBandSplitterOperator<2,2>::GetDefaultInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,2>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,2>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,2>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b0241b0

FVertexInterface * __cdecl Metasound::TBandSplitterOperator<3,1>::GetDefaultInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,1>::GetDefaultInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,1>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,1>::GetDefaultInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TBandSplitterOperator<3,1>::GetDefaultInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,1>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TBandSplitterOperator<3,1>::GetDefaultInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,1>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,1>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,1>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b024240

FVertexInterface * __cdecl Metasound::TBandSplitterOperator<3,2>::GetDefaultInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,2>::GetDefaultInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,2>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,2>::GetDefaultInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TBandSplitterOperator<3,2>::GetDefaultInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,2>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TBandSplitterOperator<3,2>::GetDefaultInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,2>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,2>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,2>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b0242d0

FVertexInterface * __cdecl Metasound::TBandSplitterOperator<4,1>::GetDefaultInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,1>::GetDefaultInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,1>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,1>::GetDefaultInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TBandSplitterOperator<4,1>::GetDefaultInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,1>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TBandSplitterOperator<4,1>::GetDefaultInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,1>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,1>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,1>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b024360

FVertexInterface * __cdecl Metasound::TBandSplitterOperator<4,2>::GetDefaultInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,2>::GetDefaultInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,2>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,2>::GetDefaultInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TBandSplitterOperator<4,2>::GetDefaultInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,2>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TBandSplitterOperator<4,2>::GetDefaultInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,2>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,2>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,2>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b0243f0

FVertexInterface * __cdecl Metasound::TBandSplitterOperator<5,1>::GetDefaultInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,1>::GetDefaultInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,1>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,1>::GetDefaultInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TBandSplitterOperator<5,1>::GetDefaultInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,1>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TBandSplitterOperator<5,1>::GetDefaultInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,1>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,1>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,1>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetDefaultInterface @ 14b024480

FVertexInterface * __cdecl Metasound::TBandSplitterOperator<5,2>::GetDefaultInterface(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,2>::GetDefaultInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,2>::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,2>::GetDefaultInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TBandSplitterOperator<5,2>::GetDefaultInterface'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,2>::GetDefaultInterface(void)'
                  ::__l2::DefaultInterface);
      atexit(`Metasound::TBandSplitterOperator<5,2>::GetDefaultInterface'::__l2::
             _dynamic_atexit_destructor_for__DefaultInterface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,2>::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,2>::GetDefaultInterface(void)'
              ::__l2::DefaultInterface;
    }
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,2>::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b026820

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TBandSplitterOperator<2,1>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_168;
  FText local_158;
  FText local_148;
  FVertexInterface local_138;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,1>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,1>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,1>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_168,L"Band Splitter (Mono, %d)");
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_168.Data.ArrayNum != 0) {
        FVar2.Data = local_168.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_148);
      FText::FText(&local_158);
      pFVar1 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_138,pFVar1);
      CreateNodeClassMetadata(&local_e8,local_res8,&local_148,&local_158,&local_138);
      FVertexInterface::~FVertexInterface(&local_138);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,1>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      atexit(`Metasound::TBandSplitterOperator<2,1>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,1>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,1>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,1>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b026990

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TBandSplitterOperator<2,2>::GetNodeInfo(void)

{
  FNodeClassMetadata *pFVar1;
  FVertexInterface *pFVar2;
  ForAnyElementType FVar3;
  FName local_res8 [4];
  FString local_248;
  FText local_238;
  FText local_228;
  FVertexInterface local_218;
  FNodeClassMetadata local_1c8;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_248,L"Band Splitter (Stereo, %d)");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_248.Data.ArrayNum != 0) {
        FVar3.Data = local_248.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar3.Data);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_228);
      FText::FText(&local_238);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_218,pFVar2);
      CreateNodeClassMetadata(&local_1c8,local_res8,&local_228,&local_238,&local_218);
      FVertexInterface::~FVertexInterface(&local_218);
      if (local_238.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
      }
      if (local_228.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
      }
      pFVar1 = FNodeClassMetadata::FNodeClassMetadata(&local_e8,&local_1c8);
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,2>::GetNodeInfo(void)'
                  ::__l2::Metadata,pFVar1);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_1c8);
      atexit(`Metasound::TBandSplitterOperator<2,2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,2>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<2,2>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b026b20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TBandSplitterOperator<3,1>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_168;
  FText local_158;
  FText local_148;
  FVertexInterface local_138;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,1>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,1>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,1>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_168,L"Band Splitter (Mono, %d)");
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_168.Data.ArrayNum != 0) {
        FVar2.Data = local_168.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_148);
      FText::FText(&local_158);
      pFVar1 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_138,pFVar1);
      CreateNodeClassMetadata(&local_e8,local_res8,&local_148,&local_158,&local_138);
      FVertexInterface::~FVertexInterface(&local_138);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,1>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      atexit(`Metasound::TBandSplitterOperator<3,1>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,1>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,1>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,1>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b026c90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TBandSplitterOperator<3,2>::GetNodeInfo(void)

{
  FNodeClassMetadata *pFVar1;
  FVertexInterface *pFVar2;
  ForAnyElementType FVar3;
  FName local_res8 [4];
  FString local_248;
  FText local_238;
  FText local_228;
  FVertexInterface local_218;
  FNodeClassMetadata local_1c8;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_248,L"Band Splitter (Stereo, %d)");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_248.Data.ArrayNum != 0) {
        FVar3.Data = local_248.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar3.Data);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_228);
      FText::FText(&local_238);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_218,pFVar2);
      CreateNodeClassMetadata(&local_1c8,local_res8,&local_228,&local_238,&local_218);
      FVertexInterface::~FVertexInterface(&local_218);
      if (local_238.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
      }
      if (local_228.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
      }
      pFVar1 = FNodeClassMetadata::FNodeClassMetadata(&local_e8,&local_1c8);
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,2>::GetNodeInfo(void)'
                  ::__l2::Metadata,pFVar1);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_1c8);
      atexit(`Metasound::TBandSplitterOperator<3,2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,2>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<3,2>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b026e20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TBandSplitterOperator<4,1>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_168;
  FText local_158;
  FText local_148;
  FVertexInterface local_138;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,1>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,1>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,1>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_168,L"Band Splitter (Mono, %d)");
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_168.Data.ArrayNum != 0) {
        FVar2.Data = local_168.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_148);
      FText::FText(&local_158);
      pFVar1 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_138,pFVar1);
      CreateNodeClassMetadata(&local_e8,local_res8,&local_148,&local_158,&local_138);
      FVertexInterface::~FVertexInterface(&local_138);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,1>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      atexit(`Metasound::TBandSplitterOperator<4,1>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,1>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,1>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,1>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b026f90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TBandSplitterOperator<4,2>::GetNodeInfo(void)

{
  FNodeClassMetadata *pFVar1;
  FVertexInterface *pFVar2;
  ForAnyElementType FVar3;
  FName local_res8 [4];
  FString local_248;
  FText local_238;
  FText local_228;
  FVertexInterface local_218;
  FNodeClassMetadata local_1c8;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_248,L"Band Splitter (Stereo, %d)");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_248.Data.ArrayNum != 0) {
        FVar3.Data = local_248.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar3.Data);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_228);
      FText::FText(&local_238);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_218,pFVar2);
      CreateNodeClassMetadata(&local_1c8,local_res8,&local_228,&local_238,&local_218);
      FVertexInterface::~FVertexInterface(&local_218);
      if (local_238.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
      }
      if (local_228.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
      }
      pFVar1 = FNodeClassMetadata::FNodeClassMetadata(&local_e8,&local_1c8);
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,2>::GetNodeInfo(void)'
                  ::__l2::Metadata,pFVar1);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_1c8);
      atexit(`Metasound::TBandSplitterOperator<4,2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,2>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<4,2>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b027120

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TBandSplitterOperator<5,1>::GetNodeInfo(void)

{
  FVertexInterface *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_168;
  FText local_158;
  FText local_148;
  FVertexInterface local_138;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,1>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,1>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,1>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_168,L"Band Splitter (Mono, %d)");
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_168.Data.ArrayNum != 0) {
        FVar2.Data = local_168.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_148);
      FText::FText(&local_158);
      pFVar1 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_138,pFVar1);
      CreateNodeClassMetadata(&local_e8,local_res8,&local_148,&local_158,&local_138);
      FVertexInterface::~FVertexInterface(&local_138);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,1>::GetNodeInfo(void)'
                  ::__l2::Metadata,&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      atexit(`Metasound::TBandSplitterOperator<5,1>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,1>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,1>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,1>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetNodeInfo @ 14b027290

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TBandSplitterOperator<5,2>::GetNodeInfo(void)

{
  FNodeClassMetadata *pFVar1;
  FVertexInterface *pFVar2;
  ForAnyElementType FVar3;
  FName local_res8 [4];
  FString local_248;
  FText local_238;
  FText local_228;
  FVertexInterface local_218;
  FNodeClassMetadata local_1c8;
  FNodeClassMetadata local_e8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl(&local_248,L"Band Splitter (Stereo, %d)");
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_248.Data.ArrayNum != 0) {
        FVar3.Data = local_248.Data.AllocatorInstance.Data;
      }
      ::FName::FName(local_res8,(wchar_t *)FVar3.Data);
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      FText::FText(&local_228);
      FText::FText(&local_238);
      pFVar2 = GetDefaultInterface();
      FVertexInterface::FVertexInterface(&local_218,pFVar2);
      CreateNodeClassMetadata(&local_1c8,local_res8,&local_228,&local_238,&local_218);
      FVertexInterface::~FVertexInterface(&local_218);
      if (local_238.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
      }
      if (local_228.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
      }
      pFVar1 = FNodeClassMetadata::FNodeClassMetadata(&local_e8,&local_1c8);
      FNodeClassMetadata::FNodeClassMetadata
                (&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,2>::GetNodeInfo(void)'
                  ::__l2::Metadata,pFVar1);
      FNodeClassMetadata::~FNodeClassMetadata(&local_e8);
      FNodeClassMetadata::~FNodeClassMetadata(&local_1c8);
      atexit(`Metasound::TBandSplitterOperator<5,2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,2>::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBandSplitterOperator<5,2>::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// InitializeAudioOutputNames @ 14b02ba90

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TBandSplitterOperator<2,2>::InitializeAudioOutputNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  uint uVar9;
  FName local_res8;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,4,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  lVar8 = 0;
  uVar9 = 0;
  do {
    ::FString::PrintfImpl(&local_38,L"Band %i %s");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
    FVar3 = local_res8;
    uVar5 = 0;
    if ((int)uVar9 < *piVar1) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
    }
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + lVar8) = FVar3;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_38,L"Band %i %s");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
    FVar3 = local_res8;
    uVar5 = 0;
    if ((int)(uVar9 + 1) < *piVar1) {
      uVar5 = ~(uVar9 + 1) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
    }
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + lVar8 + 8) = FVar3;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 + 2;
    lVar8 = lVar8 + 0x10;
  } while (uVar9 < 4);
  return __return_storage_ptr__;
}

// InitializeAudioOutputNames @ 14b02bc70

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TBandSplitterOperator<3,2>::InitializeAudioOutputNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  uint uVar9;
  FName local_res8;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,6,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  lVar8 = 0;
  uVar9 = 0;
  do {
    ::FString::PrintfImpl(&local_38,L"Band %i %s");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
    FVar3 = local_res8;
    uVar5 = 0;
    if ((int)uVar9 < *piVar1) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
    }
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + lVar8) = FVar3;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_38,L"Band %i %s");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
    FVar3 = local_res8;
    uVar5 = 0;
    if ((int)(uVar9 + 1) < *piVar1) {
      uVar5 = ~(uVar9 + 1) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
    }
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + lVar8 + 8) = FVar3;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 + 2;
    lVar8 = lVar8 + 0x10;
  } while (uVar9 < 6);
  return __return_storage_ptr__;
}

// InitializeAudioOutputNames @ 14b02be50

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TBandSplitterOperator<4,2>::InitializeAudioOutputNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  uint uVar9;
  FName local_res8;
  FString local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,8,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  lVar8 = 0;
  uVar9 = 0;
  do {
    ::FString::PrintfImpl(&local_38,L"Band %i %s");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
    FVar3 = local_res8;
    uVar5 = 0;
    if ((int)uVar9 < *piVar1) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
    }
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + lVar8) = FVar3;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_38,L"Band %i %s");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
    FVar3 = local_res8;
    uVar5 = 0;
    if ((int)(uVar9 + 1) < *piVar1) {
      uVar5 = ~(uVar9 + 1) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
    }
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + lVar8 + 8) = FVar3;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 + 2;
    lVar8 = lVar8 + 0x10;
  } while (uVar9 < 8);
  return __return_storage_ptr__;
}

// InitializeAudioOutputNames @ 14b02c030

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TBandSplitterOperator<5,2>::InitializeAudioOutputNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  uint uVar9;
  FName local_res8;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,10,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  lVar8 = 0;
  uVar9 = 0;
  do {
    ::FString::PrintfImpl(&local_38,L"Band %i %s");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
    FVar3 = local_res8;
    uVar5 = 0;
    if ((int)uVar9 < *piVar1) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
    }
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + lVar8) = FVar3;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_38,L"Band %i %s");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
    FVar3 = local_res8;
    uVar5 = 0;
    if ((int)(uVar9 + 1) < *piVar1) {
      uVar5 = ~(uVar9 + 1) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
    }
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + lVar8 + 8) = FVar3;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 + 2;
    lVar8 = lVar8 + 0x10;
  } while (uVar9 < 10);
  return __return_storage_ptr__;
}

// InitializeCrossoverInputNames @ 14b02c210

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TBandSplitterOperator<3,1>::InitializeCrossoverInputNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FString local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,3,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)(__return_storage_ptr__->AllocatorInstance).Data = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 8) = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  if (*piVar1 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 0x10) = local_res8;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeCrossoverInputNames @ 14b02c410

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TBandSplitterOperator<3,2>::InitializeCrossoverInputNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FString local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,3,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)(__return_storage_ptr__->AllocatorInstance).Data = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 8) = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  if (*piVar1 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 0x10) = local_res8;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeCrossoverInputNames @ 14b02c610

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TBandSplitterOperator<4,1>::InitializeCrossoverInputNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FString local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,4,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)(__return_storage_ptr__->AllocatorInstance).Data = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 8) = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 0x10) = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  if (*piVar1 < 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 0x18) = local_res8;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeCrossoverInputNames @ 14b02c890

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TBandSplitterOperator<4,2>::InitializeCrossoverInputNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FString local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,4,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)(__return_storage_ptr__->AllocatorInstance).Data = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 8) = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 0x10) = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  if (*piVar1 < 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 0x18) = local_res8;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeCrossoverInputNames @ 14b02cb10

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TBandSplitterOperator<5,1>::InitializeCrossoverInputNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FString local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,5,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)(__return_storage_ptr__->AllocatorInstance).Data = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 8) = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 0x10) = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 0x18) = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  if (*piVar1 < 5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 0x20) = local_res8;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeCrossoverInputNames @ 14b02ce10

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
Metasound::TBandSplitterOperator<5,2>::InitializeCrossoverInputNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FString local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,5,&__return_storage_ptr__->AllocatorInstance,piVar1,
             &__return_storage_ptr__->ArrayMax);
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)(__return_storage_ptr__->AllocatorInstance).Data = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 8) = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 0x10) = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  FVar3 = local_res8;
  if (*piVar1 < 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 0x18) = FVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"Crossover %i");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar6.Data);
  if (*piVar1 < 5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + 0x20) = local_res8;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Reset @ 14b02f240

void __thiscall
Metasound::TBandSplitterOperator<2,1>::Reset(TBandSplitterOperator<2,1> *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  EFilterOrder EVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar4 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      EVar3 = FourPole;
      goto LAB_14b02f29e;
    }
    if (iVar4 == 2) {
      EVar3 = SixPole;
      goto LAB_14b02f29e;
    }
    if (iVar4 == 3) {
      EVar3 = EightPole;
      goto LAB_14b02f29e;
    }
    local_res8[0] = 0;
    `Metasound::TBandSplitterOperator<2,1>::GetFilterOrder'::__l4::<lambda_1>::operator()
              (local_res8);
  }
  EVar3 = TwoPole;
LAB_14b02f29e:
  this->PrevFilterOrder = EVar3;
  if (((this->MultiBandBuffers).ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar7 = (this->MultiBandBuffers).AllocatorInstance.Data;
  uVar5 = *(int *)(pFVar7 + 0x14) * *(int *)&pFVar7[0x10].field_0x0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  iVar4 = *(int *)(pFVar7 + 0xc);
  *(undefined4 *)&pFVar7[8].field_0x0 = 0;
  if (iVar4 < (int)uVar5) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar5,(ForAnyElementType *)pFVar7,0,(int *)(pFVar7 + 0xc));
  }
  iVar6 = *(int *)&pFVar7[0x10].field_0x0 * *(int *)(pFVar7 + 0x14);
  iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar6,(ForAnyElementType *)pFVar7,(int *)(pFVar7 + 8),(int *)(pFVar7 + 0xc)
                    );
  memset(*(FScriptContainerElement **)&pFVar7->field_0x0 + (longlong)iVar4 * 4,0,
         (longlong)iVar6 << 2);
  if (((this->Filters).ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  Audio::FLinkwitzRileyBandSplitter::Init
            ((FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data,1,
             (float)param_1->OperatorSettings->SampleRate,this->PrevFilterOrder,
             this->bPrevPhaseCompensate,&this->Crossovers);
  iVar4 = (this->AudioOutputs).ArrayNum;
  pFVar7 = (this->AudioOutputs).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar4 * 0x20;
  while( true ) {
    if ((this->AudioOutputs).ArrayNum != iVar4) {
      `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar8) break;
    iVar6 = *(int *)(*(undefined8 **)(pFVar7 + 8) + 1);
    if (0 < iVar6) {
      memset((void *)**(undefined8 **)(pFVar7 + 8),0,(longlong)iVar6 << 2);
    }
    pFVar7 = pFVar7 + 0x20;
  }
  return;
}

// Reset @ 14b02f4b0

void __thiscall
Metasound::TBandSplitterOperator<2,2>::Reset(TBandSplitterOperator<2,2> *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  EFilterOrder EVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar4 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      EVar3 = FourPole;
      goto LAB_14b02f50e;
    }
    if (iVar4 == 2) {
      EVar3 = SixPole;
      goto LAB_14b02f50e;
    }
    if (iVar4 == 3) {
      EVar3 = EightPole;
      goto LAB_14b02f50e;
    }
    local_res8[0] = 0;
    `Metasound::TBandSplitterOperator<2,2>::GetFilterOrder'::__l4::<lambda_1>::operator()
              (local_res8);
  }
  EVar3 = TwoPole;
LAB_14b02f50e:
  uVar8 = 0;
  this->PrevFilterOrder = EVar3;
  do {
    if ((this->MultiBandBuffers).ArrayNum <= (int)uVar8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar9 = (this->MultiBandBuffers).AllocatorInstance.Data;
    lVar10 = (longlong)(int)uVar8;
    pFVar7 = pFVar9 + lVar10 * 0x18;
    uVar5 = *(int *)(pFVar9 + lVar10 * 0x18 + 0x14) * *(int *)&pFVar7[0x10].field_0x0;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    iVar4 = *(int *)(pFVar7 + 0xc);
    *(undefined4 *)&pFVar7[8].field_0x0 = 0;
    if (iVar4 < (int)uVar5) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar5,(ForAnyElementType *)pFVar7,0,(int *)(pFVar7 + 0xc));
    }
    iVar6 = *(int *)&pFVar7[0x10].field_0x0 * *(int *)(pFVar7 + 0x14);
    iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar6,(ForAnyElementType *)pFVar7,(int *)(pFVar7 + 8),
                       (int *)(pFVar7 + 0xc));
    memset(*(FScriptContainerElement **)&pFVar7->field_0x0 + (longlong)iVar4 * 4,0,
           (longlong)iVar6 << 2);
    if ((this->Filters).ArrayNum <= (int)uVar8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    Audio::FLinkwitzRileyBandSplitter::Init
              ((FLinkwitzRileyBandSplitter *)
               ((this->Filters).AllocatorInstance.Data + lVar10 * 0x70),1,
               (float)param_1->OperatorSettings->SampleRate,this->PrevFilterOrder,
               this->bPrevPhaseCompensate,&this->Crossovers);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  iVar4 = (this->AudioOutputs).ArrayNum;
  pFVar7 = (this->AudioOutputs).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar4 * 0x20;
  while( true ) {
    if ((this->AudioOutputs).ArrayNum != iVar4) {
      `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar9) break;
    iVar6 = *(int *)(*(undefined8 **)(pFVar7 + 8) + 1);
    if (0 < iVar6) {
      memset((void *)**(undefined8 **)(pFVar7 + 8),0,(longlong)iVar6 << 2);
    }
    pFVar7 = pFVar7 + 0x20;
  }
  return;
}

// Reset @ 14b02f720

void __thiscall
Metasound::TBandSplitterOperator<3,1>::Reset(TBandSplitterOperator<3,1> *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  EFilterOrder EVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar4 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      EVar3 = FourPole;
      goto LAB_14b02f77e;
    }
    if (iVar4 == 2) {
      EVar3 = SixPole;
      goto LAB_14b02f77e;
    }
    if (iVar4 == 3) {
      EVar3 = EightPole;
      goto LAB_14b02f77e;
    }
    local_res8[0] = 0;
    `Metasound::TBandSplitterOperator<3,1>::GetFilterOrder'::__l4::<lambda_1>::operator()
              (local_res8);
  }
  EVar3 = TwoPole;
LAB_14b02f77e:
  this->PrevFilterOrder = EVar3;
  if (((this->MultiBandBuffers).ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar7 = (this->MultiBandBuffers).AllocatorInstance.Data;
  uVar5 = *(int *)(pFVar7 + 0x14) * *(int *)&pFVar7[0x10].field_0x0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  iVar4 = *(int *)(pFVar7 + 0xc);
  *(undefined4 *)&pFVar7[8].field_0x0 = 0;
  if (iVar4 < (int)uVar5) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar5,(ForAnyElementType *)pFVar7,0,(int *)(pFVar7 + 0xc));
  }
  iVar6 = *(int *)&pFVar7[0x10].field_0x0 * *(int *)(pFVar7 + 0x14);
  iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar6,(ForAnyElementType *)pFVar7,(int *)(pFVar7 + 8),(int *)(pFVar7 + 0xc)
                    );
  memset(*(FScriptContainerElement **)&pFVar7->field_0x0 + (longlong)iVar4 * 4,0,
         (longlong)iVar6 << 2);
  if (((this->Filters).ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  Audio::FLinkwitzRileyBandSplitter::Init
            ((FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data,1,
             (float)param_1->OperatorSettings->SampleRate,this->PrevFilterOrder,
             this->bPrevPhaseCompensate,&this->Crossovers);
  iVar4 = (this->AudioOutputs).ArrayNum;
  pFVar7 = (this->AudioOutputs).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar4 * 0x20;
  while( true ) {
    if ((this->AudioOutputs).ArrayNum != iVar4) {
      `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar8) break;
    iVar6 = *(int *)(*(undefined8 **)(pFVar7 + 8) + 1);
    if (0 < iVar6) {
      memset((void *)**(undefined8 **)(pFVar7 + 8),0,(longlong)iVar6 << 2);
    }
    pFVar7 = pFVar7 + 0x20;
  }
  return;
}

// Reset @ 14b02f990

void __thiscall
Metasound::TBandSplitterOperator<3,2>::Reset(TBandSplitterOperator<3,2> *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  EFilterOrder EVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar4 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      EVar3 = FourPole;
      goto LAB_14b02f9ee;
    }
    if (iVar4 == 2) {
      EVar3 = SixPole;
      goto LAB_14b02f9ee;
    }
    if (iVar4 == 3) {
      EVar3 = EightPole;
      goto LAB_14b02f9ee;
    }
    local_res8[0] = 0;
    `Metasound::TBandSplitterOperator<3,2>::GetFilterOrder'::__l4::<lambda_1>::operator()
              (local_res8);
  }
  EVar3 = TwoPole;
LAB_14b02f9ee:
  uVar8 = 0;
  this->PrevFilterOrder = EVar3;
  do {
    if ((this->MultiBandBuffers).ArrayNum <= (int)uVar8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar9 = (this->MultiBandBuffers).AllocatorInstance.Data;
    lVar10 = (longlong)(int)uVar8;
    pFVar7 = pFVar9 + lVar10 * 0x18;
    uVar5 = *(int *)(pFVar9 + lVar10 * 0x18 + 0x14) * *(int *)&pFVar7[0x10].field_0x0;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    iVar4 = *(int *)(pFVar7 + 0xc);
    *(undefined4 *)&pFVar7[8].field_0x0 = 0;
    if (iVar4 < (int)uVar5) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar5,(ForAnyElementType *)pFVar7,0,(int *)(pFVar7 + 0xc));
    }
    iVar6 = *(int *)&pFVar7[0x10].field_0x0 * *(int *)(pFVar7 + 0x14);
    iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar6,(ForAnyElementType *)pFVar7,(int *)(pFVar7 + 8),
                       (int *)(pFVar7 + 0xc));
    memset(*(FScriptContainerElement **)&pFVar7->field_0x0 + (longlong)iVar4 * 4,0,
           (longlong)iVar6 << 2);
    if ((this->Filters).ArrayNum <= (int)uVar8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    Audio::FLinkwitzRileyBandSplitter::Init
              ((FLinkwitzRileyBandSplitter *)
               ((this->Filters).AllocatorInstance.Data + lVar10 * 0x70),1,
               (float)param_1->OperatorSettings->SampleRate,this->PrevFilterOrder,
               this->bPrevPhaseCompensate,&this->Crossovers);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  iVar4 = (this->AudioOutputs).ArrayNum;
  pFVar7 = (this->AudioOutputs).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar4 * 0x20;
  while( true ) {
    if ((this->AudioOutputs).ArrayNum != iVar4) {
      `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar9) break;
    iVar6 = *(int *)(*(undefined8 **)(pFVar7 + 8) + 1);
    if (0 < iVar6) {
      memset((void *)**(undefined8 **)(pFVar7 + 8),0,(longlong)iVar6 << 2);
    }
    pFVar7 = pFVar7 + 0x20;
  }
  return;
}

// Reset @ 14b02fc00

void __thiscall
Metasound::TBandSplitterOperator<4,1>::Reset(TBandSplitterOperator<4,1> *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  EFilterOrder EVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar4 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      EVar3 = FourPole;
      goto LAB_14b02fc5e;
    }
    if (iVar4 == 2) {
      EVar3 = SixPole;
      goto LAB_14b02fc5e;
    }
    if (iVar4 == 3) {
      EVar3 = EightPole;
      goto LAB_14b02fc5e;
    }
    local_res8[0] = 0;
    `Metasound::TBandSplitterOperator<4,1>::GetFilterOrder'::__l4::<lambda_1>::operator()
              (local_res8);
  }
  EVar3 = TwoPole;
LAB_14b02fc5e:
  this->PrevFilterOrder = EVar3;
  if (((this->MultiBandBuffers).ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar7 = (this->MultiBandBuffers).AllocatorInstance.Data;
  uVar5 = *(int *)(pFVar7 + 0x14) * *(int *)&pFVar7[0x10].field_0x0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  iVar4 = *(int *)(pFVar7 + 0xc);
  *(undefined4 *)&pFVar7[8].field_0x0 = 0;
  if (iVar4 < (int)uVar5) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar5,(ForAnyElementType *)pFVar7,0,(int *)(pFVar7 + 0xc));
  }
  iVar6 = *(int *)&pFVar7[0x10].field_0x0 * *(int *)(pFVar7 + 0x14);
  iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar6,(ForAnyElementType *)pFVar7,(int *)(pFVar7 + 8),(int *)(pFVar7 + 0xc)
                    );
  memset(*(FScriptContainerElement **)&pFVar7->field_0x0 + (longlong)iVar4 * 4,0,
         (longlong)iVar6 << 2);
  if (((this->Filters).ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  Audio::FLinkwitzRileyBandSplitter::Init
            ((FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data,1,
             (float)param_1->OperatorSettings->SampleRate,this->PrevFilterOrder,
             this->bPrevPhaseCompensate,&this->Crossovers);
  iVar4 = (this->AudioOutputs).ArrayNum;
  pFVar7 = (this->AudioOutputs).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar4 * 0x20;
  while( true ) {
    if ((this->AudioOutputs).ArrayNum != iVar4) {
      `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar8) break;
    iVar6 = *(int *)(*(undefined8 **)(pFVar7 + 8) + 1);
    if (0 < iVar6) {
      memset((void *)**(undefined8 **)(pFVar7 + 8),0,(longlong)iVar6 << 2);
    }
    pFVar7 = pFVar7 + 0x20;
  }
  return;
}

// Reset @ 14b02fe70

void __thiscall
Metasound::TBandSplitterOperator<4,2>::Reset(TBandSplitterOperator<4,2> *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  EFilterOrder EVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar4 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      EVar3 = FourPole;
      goto LAB_14b02fece;
    }
    if (iVar4 == 2) {
      EVar3 = SixPole;
      goto LAB_14b02fece;
    }
    if (iVar4 == 3) {
      EVar3 = EightPole;
      goto LAB_14b02fece;
    }
    local_res8[0] = 0;
    `Metasound::TBandSplitterOperator<4,2>::GetFilterOrder'::__l4::<lambda_1>::operator()
              (local_res8);
  }
  EVar3 = TwoPole;
LAB_14b02fece:
  uVar8 = 0;
  this->PrevFilterOrder = EVar3;
  do {
    if ((this->MultiBandBuffers).ArrayNum <= (int)uVar8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar9 = (this->MultiBandBuffers).AllocatorInstance.Data;
    lVar10 = (longlong)(int)uVar8;
    pFVar7 = pFVar9 + lVar10 * 0x18;
    uVar5 = *(int *)(pFVar9 + lVar10 * 0x18 + 0x14) * *(int *)&pFVar7[0x10].field_0x0;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    iVar4 = *(int *)(pFVar7 + 0xc);
    *(undefined4 *)&pFVar7[8].field_0x0 = 0;
    if (iVar4 < (int)uVar5) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar5,(ForAnyElementType *)pFVar7,0,(int *)(pFVar7 + 0xc));
    }
    iVar6 = *(int *)&pFVar7[0x10].field_0x0 * *(int *)(pFVar7 + 0x14);
    iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar6,(ForAnyElementType *)pFVar7,(int *)(pFVar7 + 8),
                       (int *)(pFVar7 + 0xc));
    memset(*(FScriptContainerElement **)&pFVar7->field_0x0 + (longlong)iVar4 * 4,0,
           (longlong)iVar6 << 2);
    if ((this->Filters).ArrayNum <= (int)uVar8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    Audio::FLinkwitzRileyBandSplitter::Init
              ((FLinkwitzRileyBandSplitter *)
               ((this->Filters).AllocatorInstance.Data + lVar10 * 0x70),1,
               (float)param_1->OperatorSettings->SampleRate,this->PrevFilterOrder,
               this->bPrevPhaseCompensate,&this->Crossovers);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  iVar4 = (this->AudioOutputs).ArrayNum;
  pFVar7 = (this->AudioOutputs).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar4 * 0x20;
  while( true ) {
    if ((this->AudioOutputs).ArrayNum != iVar4) {
      `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar9) break;
    iVar6 = *(int *)(*(undefined8 **)(pFVar7 + 8) + 1);
    if (0 < iVar6) {
      memset((void *)**(undefined8 **)(pFVar7 + 8),0,(longlong)iVar6 << 2);
    }
    pFVar7 = pFVar7 + 0x20;
  }
  return;
}

// Reset @ 14b0300e0

void __thiscall
Metasound::TBandSplitterOperator<5,1>::Reset(TBandSplitterOperator<5,1> *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  EFilterOrder EVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar4 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      EVar3 = FourPole;
      goto LAB_14b03013e;
    }
    if (iVar4 == 2) {
      EVar3 = SixPole;
      goto LAB_14b03013e;
    }
    if (iVar4 == 3) {
      EVar3 = EightPole;
      goto LAB_14b03013e;
    }
    local_res8[0] = 0;
    `Metasound::TBandSplitterOperator<5,1>::GetFilterOrder'::__l4::<lambda_1>::operator()
              (local_res8);
  }
  EVar3 = TwoPole;
LAB_14b03013e:
  this->PrevFilterOrder = EVar3;
  if (((this->MultiBandBuffers).ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar7 = (this->MultiBandBuffers).AllocatorInstance.Data;
  uVar5 = *(int *)(pFVar7 + 0x14) * *(int *)&pFVar7[0x10].field_0x0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  iVar4 = *(int *)(pFVar7 + 0xc);
  *(undefined4 *)&pFVar7[8].field_0x0 = 0;
  if (iVar4 < (int)uVar5) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar5,(ForAnyElementType *)pFVar7,0,(int *)(pFVar7 + 0xc));
  }
  iVar6 = *(int *)&pFVar7[0x10].field_0x0 * *(int *)(pFVar7 + 0x14);
  iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar6,(ForAnyElementType *)pFVar7,(int *)(pFVar7 + 8),(int *)(pFVar7 + 0xc)
                    );
  memset(*(FScriptContainerElement **)&pFVar7->field_0x0 + (longlong)iVar4 * 4,0,
         (longlong)iVar6 << 2);
  if (((this->Filters).ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  Audio::FLinkwitzRileyBandSplitter::Init
            ((FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data,1,
             (float)param_1->OperatorSettings->SampleRate,this->PrevFilterOrder,
             this->bPrevPhaseCompensate,&this->Crossovers);
  iVar4 = (this->AudioOutputs).ArrayNum;
  pFVar7 = (this->AudioOutputs).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar4 * 0x20;
  while( true ) {
    if ((this->AudioOutputs).ArrayNum != iVar4) {
      `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar8) break;
    iVar6 = *(int *)(*(undefined8 **)(pFVar7 + 8) + 1);
    if (0 < iVar6) {
      memset((void *)**(undefined8 **)(pFVar7 + 8),0,(longlong)iVar6 << 2);
    }
    pFVar7 = pFVar7 + 0x20;
  }
  return;
}

// Reset @ 14b030350

void __thiscall
Metasound::TBandSplitterOperator<5,2>::Reset(TBandSplitterOperator<5,2> *this,FResetParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  EFilterOrder EVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  CopyClampCrossovers(this);
  this->bPrevPhaseCompensate = (bool)**(undefined1 **)&(this->bPhaseCompensate).field_0x8;
  iVar4 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      EVar3 = FourPole;
      goto LAB_14b0303ae;
    }
    if (iVar4 == 2) {
      EVar3 = SixPole;
      goto LAB_14b0303ae;
    }
    if (iVar4 == 3) {
      EVar3 = EightPole;
      goto LAB_14b0303ae;
    }
    local_res8[0] = 0;
    `Metasound::TBandSplitterOperator<5,2>::GetFilterOrder'::__l4::<lambda_1>::operator()
              (local_res8);
  }
  EVar3 = TwoPole;
LAB_14b0303ae:
  uVar8 = 0;
  this->PrevFilterOrder = EVar3;
  do {
    if ((this->MultiBandBuffers).ArrayNum <= (int)uVar8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar9 = (this->MultiBandBuffers).AllocatorInstance.Data;
    lVar10 = (longlong)(int)uVar8;
    pFVar7 = pFVar9 + lVar10 * 0x18;
    uVar5 = *(int *)(pFVar9 + lVar10 * 0x18 + 0x14) * *(int *)&pFVar7[0x10].field_0x0;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    iVar4 = *(int *)(pFVar7 + 0xc);
    *(undefined4 *)&pFVar7[8].field_0x0 = 0;
    if (iVar4 < (int)uVar5) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar5,(ForAnyElementType *)pFVar7,0,(int *)(pFVar7 + 0xc));
    }
    iVar6 = *(int *)&pFVar7[0x10].field_0x0 * *(int *)(pFVar7 + 0x14);
    iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar6,(ForAnyElementType *)pFVar7,(int *)(pFVar7 + 8),
                       (int *)(pFVar7 + 0xc));
    memset(*(FScriptContainerElement **)&pFVar7->field_0x0 + (longlong)iVar4 * 4,0,
           (longlong)iVar6 << 2);
    if ((this->Filters).ArrayNum <= (int)uVar8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    Audio::FLinkwitzRileyBandSplitter::Init
              ((FLinkwitzRileyBandSplitter *)
               ((this->Filters).AllocatorInstance.Data + lVar10 * 0x70),1,
               (float)param_1->OperatorSettings->SampleRate,this->PrevFilterOrder,
               this->bPrevPhaseCompensate,&this->Crossovers);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  iVar4 = (this->AudioOutputs).ArrayNum;
  pFVar7 = (this->AudioOutputs).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar4 * 0x20;
  while( true ) {
    if ((this->AudioOutputs).ArrayNum != iVar4) {
      `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar9) break;
    iVar6 = *(int *)(*(undefined8 **)(pFVar7 + 8) + 1);
    if (0 < iVar6) {
      memset((void *)**(undefined8 **)(pFVar7 + 8),0,(longlong)iVar6 << 2);
    }
    pFVar7 = pFVar7 + 0x20;
  }
  return;
}

// UpdateFilterSettings @ 14b033270

void __thiscall
Metasound::TBandSplitterOperator<2,1>::UpdateFilterSettings(TBandSplitterOperator<2,1> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  EFilterOrder EVar5;
  EFilterOrder EVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  bVar3 = CopyClampCrossovers(this);
  bVar4 = (bool)**(char **)&(this->bPhaseCompensate).field_0x8;
  bVar7 = bVar4 == this->bPrevPhaseCompensate;
  if (!bVar7) {
    this->bPrevPhaseCompensate = bVar4;
  }
  EVar6 = EightPole;
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b0332c9:
    EVar5 = TwoPole;
  }
  else if (iVar1 == 1) {
    EVar5 = FourPole;
  }
  else if (iVar1 == 2) {
    EVar5 = SixPole;
  }
  else {
    if (iVar1 != 3) {
      local_res8[0] = 0;
      `Metasound::TBandSplitterOperator<2,1>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res8);
      goto LAB_14b0332c9;
    }
    EVar5 = EightPole;
  }
  if (this->PrevFilterOrder == EVar5) {
    if (bVar7) {
      if (bVar3) {
        if ((this->Filters).ArrayNum < 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        Audio::FLinkwitzRileyBandSplitter::SetCrossovers
                  ((FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data,
                   &this->Crossovers);
      }
      return;
    }
    goto LAB_14b033330;
  }
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b0332fb:
    EVar6 = TwoPole;
  }
  else {
    if (iVar1 == 1) {
      this->PrevFilterOrder = FourPole;
      goto LAB_14b033330;
    }
    if (iVar1 == 2) {
      this->PrevFilterOrder = SixPole;
      goto LAB_14b033330;
    }
    if (iVar1 != 3) {
      local_res10[0] = 0;
      `Metasound::TBandSplitterOperator<2,1>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res10);
      goto LAB_14b0332fb;
    }
  }
  this->PrevFilterOrder = EVar6;
LAB_14b033330:
  if ((this->Filters).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Audio::FLinkwitzRileyBandSplitter::Init
            ((FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data,1,
             (float)(this->Settings).SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,
             &this->Crossovers);
  return;
}

// UpdateFilterSettings @ 14b033420

void __thiscall
Metasound::TBandSplitterOperator<2,2>::UpdateFilterSettings(TBandSplitterOperator<2,2> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  EFilterOrder EVar5;
  uint uVar6;
  EFilterOrder EVar7;
  uint uVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  bVar3 = CopyClampCrossovers(this);
  bVar4 = (bool)**(char **)&(this->bPhaseCompensate).field_0x8;
  bVar9 = bVar4 == this->bPrevPhaseCompensate;
  if (!bVar9) {
    this->bPrevPhaseCompensate = bVar4;
  }
  EVar7 = EightPole;
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b033479:
    EVar5 = TwoPole;
  }
  else if (iVar1 == 1) {
    EVar5 = FourPole;
  }
  else if (iVar1 == 2) {
    EVar5 = SixPole;
  }
  else {
    if (iVar1 != 3) {
      local_res8[0] = 0;
      `Metasound::TBandSplitterOperator<2,2>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res8);
      goto LAB_14b033479;
    }
    EVar5 = EightPole;
  }
  if (this->PrevFilterOrder == EVar5) {
    if (bVar9) {
      if (bVar3) {
        uVar8 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar8 < (this->Filters).ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          Audio::FLinkwitzRileyBandSplitter::SetCrossovers
                    ((FLinkwitzRileyBandSplitter *)
                     ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x70),
                     &this->Crossovers);
          uVar8 = uVar8 + 1;
        } while (uVar8 < 2);
      }
      return;
    }
    goto LAB_14b0334e4;
  }
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b0334ab:
    EVar7 = TwoPole;
  }
  else {
    if (iVar1 == 1) {
      this->PrevFilterOrder = FourPole;
      goto LAB_14b0334e4;
    }
    if (iVar1 == 2) {
      this->PrevFilterOrder = SixPole;
      goto LAB_14b0334e4;
    }
    if (iVar1 != 3) {
      local_res10[0] = 0;
      `Metasound::TBandSplitterOperator<2,2>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res10);
      goto LAB_14b0334ab;
    }
  }
  this->PrevFilterOrder = EVar7;
LAB_14b0334e4:
  uVar8 = 0;
  do {
    uVar6 = 0;
    if ((int)uVar8 < (this->Filters).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Audio::FLinkwitzRileyBandSplitter::Init
              ((FLinkwitzRileyBandSplitter *)
               ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x70),1,
               (float)(this->Settings).SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,
               &this->Crossovers);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  return;
}

// UpdateFilterSettings @ 14b033610

void __thiscall
Metasound::TBandSplitterOperator<3,1>::UpdateFilterSettings(TBandSplitterOperator<3,1> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  EFilterOrder EVar5;
  EFilterOrder EVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  bVar3 = CopyClampCrossovers(this);
  bVar4 = (bool)**(char **)&(this->bPhaseCompensate).field_0x8;
  bVar7 = bVar4 == this->bPrevPhaseCompensate;
  if (!bVar7) {
    this->bPrevPhaseCompensate = bVar4;
  }
  EVar6 = EightPole;
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b033669:
    EVar5 = TwoPole;
  }
  else if (iVar1 == 1) {
    EVar5 = FourPole;
  }
  else if (iVar1 == 2) {
    EVar5 = SixPole;
  }
  else {
    if (iVar1 != 3) {
      local_res8[0] = 0;
      `Metasound::TBandSplitterOperator<3,1>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res8);
      goto LAB_14b033669;
    }
    EVar5 = EightPole;
  }
  if (this->PrevFilterOrder == EVar5) {
    if (bVar7) {
      if (bVar3) {
        if ((this->Filters).ArrayNum < 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        Audio::FLinkwitzRileyBandSplitter::SetCrossovers
                  ((FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data,
                   &this->Crossovers);
      }
      return;
    }
    goto LAB_14b0336d0;
  }
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b03369b:
    EVar6 = TwoPole;
  }
  else {
    if (iVar1 == 1) {
      this->PrevFilterOrder = FourPole;
      goto LAB_14b0336d0;
    }
    if (iVar1 == 2) {
      this->PrevFilterOrder = SixPole;
      goto LAB_14b0336d0;
    }
    if (iVar1 != 3) {
      local_res10[0] = 0;
      `Metasound::TBandSplitterOperator<3,1>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res10);
      goto LAB_14b03369b;
    }
  }
  this->PrevFilterOrder = EVar6;
LAB_14b0336d0:
  if ((this->Filters).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Audio::FLinkwitzRileyBandSplitter::Init
            ((FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data,1,
             (float)(this->Settings).SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,
             &this->Crossovers);
  return;
}

// UpdateFilterSettings @ 14b0337c0

void __thiscall
Metasound::TBandSplitterOperator<3,2>::UpdateFilterSettings(TBandSplitterOperator<3,2> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  EFilterOrder EVar5;
  uint uVar6;
  EFilterOrder EVar7;
  uint uVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  bVar3 = CopyClampCrossovers(this);
  bVar4 = (bool)**(char **)&(this->bPhaseCompensate).field_0x8;
  bVar9 = bVar4 == this->bPrevPhaseCompensate;
  if (!bVar9) {
    this->bPrevPhaseCompensate = bVar4;
  }
  EVar7 = EightPole;
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b033819:
    EVar5 = TwoPole;
  }
  else if (iVar1 == 1) {
    EVar5 = FourPole;
  }
  else if (iVar1 == 2) {
    EVar5 = SixPole;
  }
  else {
    if (iVar1 != 3) {
      local_res8[0] = 0;
      `Metasound::TBandSplitterOperator<3,2>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res8);
      goto LAB_14b033819;
    }
    EVar5 = EightPole;
  }
  if (this->PrevFilterOrder == EVar5) {
    if (bVar9) {
      if (bVar3) {
        uVar8 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar8 < (this->Filters).ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          Audio::FLinkwitzRileyBandSplitter::SetCrossovers
                    ((FLinkwitzRileyBandSplitter *)
                     ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x70),
                     &this->Crossovers);
          uVar8 = uVar8 + 1;
        } while (uVar8 < 2);
      }
      return;
    }
    goto LAB_14b033884;
  }
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b03384b:
    EVar7 = TwoPole;
  }
  else {
    if (iVar1 == 1) {
      this->PrevFilterOrder = FourPole;
      goto LAB_14b033884;
    }
    if (iVar1 == 2) {
      this->PrevFilterOrder = SixPole;
      goto LAB_14b033884;
    }
    if (iVar1 != 3) {
      local_res10[0] = 0;
      `Metasound::TBandSplitterOperator<3,2>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res10);
      goto LAB_14b03384b;
    }
  }
  this->PrevFilterOrder = EVar7;
LAB_14b033884:
  uVar8 = 0;
  do {
    uVar6 = 0;
    if ((int)uVar8 < (this->Filters).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Audio::FLinkwitzRileyBandSplitter::Init
              ((FLinkwitzRileyBandSplitter *)
               ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x70),1,
               (float)(this->Settings).SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,
               &this->Crossovers);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  return;
}

// UpdateFilterSettings @ 14b0339b0

void __thiscall
Metasound::TBandSplitterOperator<4,1>::UpdateFilterSettings(TBandSplitterOperator<4,1> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  EFilterOrder EVar5;
  EFilterOrder EVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  bVar3 = CopyClampCrossovers(this);
  bVar4 = (bool)**(char **)&(this->bPhaseCompensate).field_0x8;
  bVar7 = bVar4 == this->bPrevPhaseCompensate;
  if (!bVar7) {
    this->bPrevPhaseCompensate = bVar4;
  }
  EVar6 = EightPole;
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b033a09:
    EVar5 = TwoPole;
  }
  else if (iVar1 == 1) {
    EVar5 = FourPole;
  }
  else if (iVar1 == 2) {
    EVar5 = SixPole;
  }
  else {
    if (iVar1 != 3) {
      local_res8[0] = 0;
      `Metasound::TBandSplitterOperator<4,1>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res8);
      goto LAB_14b033a09;
    }
    EVar5 = EightPole;
  }
  if (this->PrevFilterOrder == EVar5) {
    if (bVar7) {
      if (bVar3) {
        if ((this->Filters).ArrayNum < 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        Audio::FLinkwitzRileyBandSplitter::SetCrossovers
                  ((FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data,
                   &this->Crossovers);
      }
      return;
    }
    goto LAB_14b033a70;
  }
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b033a3b:
    EVar6 = TwoPole;
  }
  else {
    if (iVar1 == 1) {
      this->PrevFilterOrder = FourPole;
      goto LAB_14b033a70;
    }
    if (iVar1 == 2) {
      this->PrevFilterOrder = SixPole;
      goto LAB_14b033a70;
    }
    if (iVar1 != 3) {
      local_res10[0] = 0;
      `Metasound::TBandSplitterOperator<4,1>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res10);
      goto LAB_14b033a3b;
    }
  }
  this->PrevFilterOrder = EVar6;
LAB_14b033a70:
  if ((this->Filters).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Audio::FLinkwitzRileyBandSplitter::Init
            ((FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data,1,
             (float)(this->Settings).SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,
             &this->Crossovers);
  return;
}

// UpdateFilterSettings @ 14b033b60

void __thiscall
Metasound::TBandSplitterOperator<4,2>::UpdateFilterSettings(TBandSplitterOperator<4,2> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  EFilterOrder EVar5;
  uint uVar6;
  EFilterOrder EVar7;
  uint uVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  bVar3 = CopyClampCrossovers(this);
  bVar4 = (bool)**(char **)&(this->bPhaseCompensate).field_0x8;
  bVar9 = bVar4 == this->bPrevPhaseCompensate;
  if (!bVar9) {
    this->bPrevPhaseCompensate = bVar4;
  }
  EVar7 = EightPole;
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b033bb9:
    EVar5 = TwoPole;
  }
  else if (iVar1 == 1) {
    EVar5 = FourPole;
  }
  else if (iVar1 == 2) {
    EVar5 = SixPole;
  }
  else {
    if (iVar1 != 3) {
      local_res8[0] = 0;
      `Metasound::TBandSplitterOperator<4,2>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res8);
      goto LAB_14b033bb9;
    }
    EVar5 = EightPole;
  }
  if (this->PrevFilterOrder == EVar5) {
    if (bVar9) {
      if (bVar3) {
        uVar8 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar8 < (this->Filters).ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          Audio::FLinkwitzRileyBandSplitter::SetCrossovers
                    ((FLinkwitzRileyBandSplitter *)
                     ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x70),
                     &this->Crossovers);
          uVar8 = uVar8 + 1;
        } while (uVar8 < 2);
      }
      return;
    }
    goto LAB_14b033c24;
  }
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b033beb:
    EVar7 = TwoPole;
  }
  else {
    if (iVar1 == 1) {
      this->PrevFilterOrder = FourPole;
      goto LAB_14b033c24;
    }
    if (iVar1 == 2) {
      this->PrevFilterOrder = SixPole;
      goto LAB_14b033c24;
    }
    if (iVar1 != 3) {
      local_res10[0] = 0;
      `Metasound::TBandSplitterOperator<4,2>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res10);
      goto LAB_14b033beb;
    }
  }
  this->PrevFilterOrder = EVar7;
LAB_14b033c24:
  uVar8 = 0;
  do {
    uVar6 = 0;
    if ((int)uVar8 < (this->Filters).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Audio::FLinkwitzRileyBandSplitter::Init
              ((FLinkwitzRileyBandSplitter *)
               ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x70),1,
               (float)(this->Settings).SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,
               &this->Crossovers);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  return;
}

// UpdateFilterSettings @ 14b033d50

void __thiscall
Metasound::TBandSplitterOperator<5,1>::UpdateFilterSettings(TBandSplitterOperator<5,1> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  EFilterOrder EVar5;
  EFilterOrder EVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  bVar3 = CopyClampCrossovers(this);
  bVar4 = (bool)**(char **)&(this->bPhaseCompensate).field_0x8;
  bVar7 = bVar4 == this->bPrevPhaseCompensate;
  if (!bVar7) {
    this->bPrevPhaseCompensate = bVar4;
  }
  EVar6 = EightPole;
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b033da9:
    EVar5 = TwoPole;
  }
  else if (iVar1 == 1) {
    EVar5 = FourPole;
  }
  else if (iVar1 == 2) {
    EVar5 = SixPole;
  }
  else {
    if (iVar1 != 3) {
      local_res8[0] = 0;
      `Metasound::TBandSplitterOperator<5,1>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res8);
      goto LAB_14b033da9;
    }
    EVar5 = EightPole;
  }
  if (this->PrevFilterOrder == EVar5) {
    if (bVar7) {
      if (bVar3) {
        if ((this->Filters).ArrayNum < 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        Audio::FLinkwitzRileyBandSplitter::SetCrossovers
                  ((FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data,
                   &this->Crossovers);
      }
      return;
    }
    goto LAB_14b033e10;
  }
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b033ddb:
    EVar6 = TwoPole;
  }
  else {
    if (iVar1 == 1) {
      this->PrevFilterOrder = FourPole;
      goto LAB_14b033e10;
    }
    if (iVar1 == 2) {
      this->PrevFilterOrder = SixPole;
      goto LAB_14b033e10;
    }
    if (iVar1 != 3) {
      local_res10[0] = 0;
      `Metasound::TBandSplitterOperator<5,1>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res10);
      goto LAB_14b033ddb;
    }
  }
  this->PrevFilterOrder = EVar6;
LAB_14b033e10:
  if ((this->Filters).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Audio::FLinkwitzRileyBandSplitter::Init
            ((FLinkwitzRileyBandSplitter *)(this->Filters).AllocatorInstance.Data,1,
             (float)(this->Settings).SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,
             &this->Crossovers);
  return;
}

// UpdateFilterSettings @ 14b033f00

void __thiscall
Metasound::TBandSplitterOperator<5,2>::UpdateFilterSettings(TBandSplitterOperator<5,2> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  EFilterOrder EVar5;
  uint uVar6;
  EFilterOrder EVar7;
  uint uVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  bVar3 = CopyClampCrossovers(this);
  bVar4 = (bool)**(char **)&(this->bPhaseCompensate).field_0x8;
  bVar9 = bVar4 == this->bPrevPhaseCompensate;
  if (!bVar9) {
    this->bPrevPhaseCompensate = bVar4;
  }
  EVar7 = EightPole;
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b033f59:
    EVar5 = TwoPole;
  }
  else if (iVar1 == 1) {
    EVar5 = FourPole;
  }
  else if (iVar1 == 2) {
    EVar5 = SixPole;
  }
  else {
    if (iVar1 != 3) {
      local_res8[0] = 0;
      `Metasound::TBandSplitterOperator<5,2>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res8);
      goto LAB_14b033f59;
    }
    EVar5 = EightPole;
  }
  if (this->PrevFilterOrder == EVar5) {
    if (bVar9) {
      if (bVar3) {
        uVar8 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar8 < (this->Filters).ArrayNum) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          Audio::FLinkwitzRileyBandSplitter::SetCrossovers
                    ((FLinkwitzRileyBandSplitter *)
                     ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x70),
                     &this->Crossovers);
          uVar8 = uVar8 + 1;
        } while (uVar8 < 2);
      }
      return;
    }
    goto LAB_14b033fc4;
  }
  iVar1 = **(int **)&(this->FilterOrder).field_0x8;
  if (iVar1 == 0) {
LAB_14b033f8b:
    EVar7 = TwoPole;
  }
  else {
    if (iVar1 == 1) {
      this->PrevFilterOrder = FourPole;
      goto LAB_14b033fc4;
    }
    if (iVar1 == 2) {
      this->PrevFilterOrder = SixPole;
      goto LAB_14b033fc4;
    }
    if (iVar1 != 3) {
      local_res10[0] = 0;
      `Metasound::TBandSplitterOperator<5,2>::GetFilterOrder'::__l4::<lambda_1>::operator()
                (local_res10);
      goto LAB_14b033f8b;
    }
  }
  this->PrevFilterOrder = EVar7;
LAB_14b033fc4:
  uVar8 = 0;
  do {
    uVar6 = 0;
    if ((int)uVar8 < (this->Filters).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Audio::FLinkwitzRileyBandSplitter::Init
              ((FLinkwitzRileyBandSplitter *)
               ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x70),1,
               (float)(this->Settings).SampleRate,this->PrevFilterOrder,this->bPrevPhaseCompensate,
               &this->Crossovers);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  return;
}

// operator() @ 150561090

bool __thiscall
`Metasound::TBandSplitterOperator<2,1>::GetFilterOrder'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1878974614915251680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1878974614915251680>,
                       &`public:___cdecl_`private:_enum_Audio::EFilterOrder___cdecl_Metasound::TBandSplitterOperator<2,1>::GetFilterOrder(Metasound::EBandSplitterFilterOrder)const___ptr64'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505610d0

bool __thiscall
`Metasound::TBandSplitterOperator<2,2>::GetFilterOrder'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1878974614915251680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1878974614915251680>,
                       &`public:___cdecl_`private:_enum_Audio::EFilterOrder___cdecl_Metasound::TBandSplitterOperator<2,2>::GetFilterOrder(Metasound::EBandSplitterFilterOrder)const___ptr64'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150561110

bool __thiscall
`Metasound::TBandSplitterOperator<3,1>::GetFilterOrder'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1878974614915251680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1878974614915251680>,
                       &`public:___cdecl_`private:_enum_Audio::EFilterOrder___cdecl_Metasound::TBandSplitterOperator<3,1>::GetFilterOrder(Metasound::EBandSplitterFilterOrder)const___ptr64'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150561150

bool __thiscall
`Metasound::TBandSplitterOperator<3,2>::GetFilterOrder'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1878974614915251680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1878974614915251680>,
                       &`public:___cdecl_`private:_enum_Audio::EFilterOrder___cdecl_Metasound::TBandSplitterOperator<3,2>::GetFilterOrder(Metasound::EBandSplitterFilterOrder)const___ptr64'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150561190

bool __thiscall
`Metasound::TBandSplitterOperator<4,1>::GetFilterOrder'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1878974614915251680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1878974614915251680>,
                       &`public:___cdecl_`private:_enum_Audio::EFilterOrder___cdecl_Metasound::TBandSplitterOperator<4,1>::GetFilterOrder(Metasound::EBandSplitterFilterOrder)const___ptr64'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505611d0

bool __thiscall
`Metasound::TBandSplitterOperator<4,2>::GetFilterOrder'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1878974614915251680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1878974614915251680>,
                       &`public:___cdecl_`private:_enum_Audio::EFilterOrder___cdecl_Metasound::TBandSplitterOperator<4,2>::GetFilterOrder(Metasound::EBandSplitterFilterOrder)const___ptr64'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150561210

bool __thiscall
`Metasound::TBandSplitterOperator<5,1>::GetFilterOrder'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1878974614915251680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1878974614915251680>,
                       &`public:___cdecl_`private:_enum_Audio::EFilterOrder___cdecl_Metasound::TBandSplitterOperator<5,1>::GetFilterOrder(Metasound::EBandSplitterFilterOrder)const___ptr64'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150561250

bool __thiscall
`Metasound::TBandSplitterOperator<5,2>::GetFilterOrder'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1878974614915251680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1878974614915251680>,
                       &`public:___cdecl_`private:_enum_Audio::EFilterOrder___cdecl_Metasound::TBandSplitterOperator<5,2>::GetFilterOrder(Metasound::EBandSplitterFilterOrder)const___ptr64'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

