// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 60

// BindInputs @ 14b2d2620

void __thiscall
Metasound::TAudioBusReaderOperator<8>::BindInputs
          (TAudioBusReaderOperator<8> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBusAsset> *local_res18 [2];
  FName *local_38;
  TDataReadReference<Metasound::FAudioBusAsset> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FAudioBusAsset> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&AudioBusReaderNode::InParamAudioBusInputName);
  local_res18[0] = &this->AudioBusAsset;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2d26b0

void __thiscall
Metasound::TAudioBusReaderOperator<8>::BindOutputs
          (TAudioBusReaderOperator<8> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  FString local_b0;
  FName *local_a0;
  FScriptContainerElement *local_98;
  code *local_90;
  FScriptContainerElement **local_88;
  code *local_80;
  FName **local_78;
  FString local_70;
  FStringFormatArg local_60;
  
  uVar7 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar7 < (this->AudioOutputs).ArrayNum) {
      uVar3 = ~uVar7 >> 0x1f;
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
    pFVar8 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_60,uVar7);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_c8.AllocatorInstance,1,&local_c8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_c8.AllocatorInstance.Data,&local_60,1);
    FLazyName::Resolve(&AudioBusReaderNode::OutParamAudioName);
    pFVar4 = ::FName::ToString(&local_res20,&local_70);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_b0,pwVar5,&local_c8);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar6.Data = local_b0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar6.Data);
    local_88 = &local_b8;
    local_a0 = &local_res18;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_78 = &local_a0;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_b8 = pFVar8;
    local_98 = pFVar8;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_80
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_90);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FStringFormatArg *)local_c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_60.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.StringValue.Data.AllocatorInstance.Data);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 8);
  return;
}

// BindInputs @ 14b2d36b0

void __thiscall
Metasound::TAudioBusReaderOperator<6>::BindInputs
          (TAudioBusReaderOperator<6> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBusAsset> *local_res18 [2];
  FName *local_38;
  TDataReadReference<Metasound::FAudioBusAsset> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FAudioBusAsset> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&AudioBusReaderNode::InParamAudioBusInputName);
  local_res18[0] = &this->AudioBusAsset;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2d3740

void __thiscall
Metasound::TAudioBusReaderOperator<6>::BindOutputs
          (TAudioBusReaderOperator<6> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  FString local_b0;
  FName *local_a0;
  FScriptContainerElement *local_98;
  code *local_90;
  FScriptContainerElement **local_88;
  code *local_80;
  FName **local_78;
  FString local_70;
  FStringFormatArg local_60;
  
  uVar7 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar7 < (this->AudioOutputs).ArrayNum) {
      uVar3 = ~uVar7 >> 0x1f;
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
    pFVar8 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_60,uVar7);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_c8.AllocatorInstance,1,&local_c8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_c8.AllocatorInstance.Data,&local_60,1);
    FLazyName::Resolve(&AudioBusReaderNode::OutParamAudioName);
    pFVar4 = ::FName::ToString(&local_res20,&local_70);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_b0,pwVar5,&local_c8);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar6.Data = local_b0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar6.Data);
    local_88 = &local_b8;
    local_a0 = &local_res18;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_78 = &local_a0;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_b8 = pFVar8;
    local_98 = pFVar8;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_80
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_90);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FStringFormatArg *)local_c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_60.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.StringValue.Data.AllocatorInstance.Data);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 6);
  return;
}

// BindInputs @ 14b2d4090

void __thiscall
Metasound::TAudioBusReaderOperator<4>::BindInputs
          (TAudioBusReaderOperator<4> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBusAsset> *local_res18 [2];
  FName *local_38;
  TDataReadReference<Metasound::FAudioBusAsset> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FAudioBusAsset> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&AudioBusReaderNode::InParamAudioBusInputName);
  local_res18[0] = &this->AudioBusAsset;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2d4120

void __thiscall
Metasound::TAudioBusReaderOperator<4>::BindOutputs
          (TAudioBusReaderOperator<4> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  FString local_b0;
  FName *local_a0;
  FScriptContainerElement *local_98;
  code *local_90;
  FScriptContainerElement **local_88;
  code *local_80;
  FName **local_78;
  FString local_70;
  FStringFormatArg local_60;
  
  uVar7 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar7 < (this->AudioOutputs).ArrayNum) {
      uVar3 = ~uVar7 >> 0x1f;
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
    pFVar8 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_60,uVar7);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_c8.AllocatorInstance,1,&local_c8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_c8.AllocatorInstance.Data,&local_60,1);
    FLazyName::Resolve(&AudioBusReaderNode::OutParamAudioName);
    pFVar4 = ::FName::ToString(&local_res20,&local_70);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_b0,pwVar5,&local_c8);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar6.Data = local_b0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar6.Data);
    local_88 = &local_b8;
    local_a0 = &local_res18;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_78 = &local_a0;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_b8 = pFVar8;
    local_98 = pFVar8;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_80
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_90);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FStringFormatArg *)local_c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_60.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.StringValue.Data.AllocatorInstance.Data);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  return;
}

// BindInputs @ 14b2d4e00

void __thiscall
Metasound::TAudioBusReaderOperator<2>::BindInputs
          (TAudioBusReaderOperator<2> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBusAsset> *local_res18 [2];
  FName *local_38;
  TDataReadReference<Metasound::FAudioBusAsset> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FAudioBusAsset> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&AudioBusReaderNode::InParamAudioBusInputName);
  local_res18[0] = &this->AudioBusAsset;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2d4f20

void __thiscall
Metasound::TAudioBusReaderOperator<2>::BindOutputs
          (TAudioBusReaderOperator<2> *this,FOutputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  FString local_b0;
  FName *local_a0;
  FScriptContainerElement *local_98;
  code *local_90;
  FScriptContainerElement **local_88;
  code *local_80;
  FName **local_78;
  FString local_70;
  FStringFormatArg local_60;
  
  uVar7 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar7 < (this->AudioOutputs).ArrayNum) {
      uVar3 = ~uVar7 >> 0x1f;
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
    pFVar8 = (this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_60,uVar7);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_c8.AllocatorInstance,1,&local_c8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_c8.AllocatorInstance.Data,&local_60,1);
    FLazyName::Resolve(&AudioBusReaderNode::OutParamAudioName);
    pFVar4 = ::FName::ToString(&local_res20,&local_70);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_b0,pwVar5,&local_c8);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar6.Data = local_b0.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar6.Data);
    local_88 = &local_b8;
    local_a0 = &local_res18;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
               ::Call;
    local_78 = &local_a0;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
               ::Call;
    local_b8 = pFVar8;
    local_98 = pFVar8;
    FOutputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_80
               ,(TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)
                &local_90);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FStringFormatArg *)local_c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_60.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.StringValue.Data.AllocatorInstance.Data);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  return;
}

// BindInputs @ 14b2d5af0

void __thiscall
Metasound::TAudioBusReaderOperator<1>::BindInputs
          (TAudioBusReaderOperator<1> *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBusAsset> *local_res18 [2];
  FName *local_38;
  TDataReadReference<Metasound::FAudioBusAsset> *local_30;
  code *local_28;
  TDataReadReference<Metasound::FAudioBusAsset> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&AudioBusReaderNode::InParamAudioBusInputName);
  local_res18[0] = &this->AudioBusAsset;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2d5b80

void __thiscall
Metasound::TAudioBusReaderOperator<1>::BindOutputs
          (TAudioBusReaderOperator<1> *this,FOutputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  FName local_res18;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_a8;
  FScriptContainerElement *local_98;
  FString local_90;
  FName *local_80;
  FScriptContainerElement *local_78;
  code *local_70;
  FScriptContainerElement **local_68;
  code *local_60;
  FName **local_58;
  FString local_50;
  FStringFormatArg local_40;
  
  if ((this->AudioOutputs).ArrayNum < 1) {
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
  pFVar1 = (this->AudioOutputs).AllocatorInstance.Data;
  FStringFormatArg::FStringFormatArg(&local_40,0);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_a8.AllocatorInstance,1,&local_a8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_a8.AllocatorInstance.Data,&local_40,1)
  ;
  FLazyName::Resolve(&AudioBusReaderNode::OutParamAudioName);
  pFVar4 = ::FName::ToString(&local_res20,&local_50);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FormatImpl(&local_90,pwVar5,&local_a8);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_90.Data.ArrayNum != 0) {
    FVar6.Data = local_90.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res18,(wchar_t *)FVar6.Data);
  local_68 = &local_98;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_80 = &local_res18;
  local_58 = &local_80;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_98 = pFVar1;
  local_78 = pFVar1;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_60,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_70
            );
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FStringFormatArg *)local_a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_40.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.StringValue.Data.AllocatorInstance.Data);
  }
  return;
}

// TAudioBusReaderOperator<1> @ 14b337c60

TAudioBusReaderOperator<1> * __thiscall
Metasound::TAudioBusReaderOperator<1>::TAudioBusReaderOperator<1>
          (TAudioBusReaderOperator<1> *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FAudioBusAsset> *param_2)

{
  TDataReference<Metasound::FAudioBuffer> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TAudioBusReaderOperator<1> *pTVar6;
  longlong lVar7;
  FResetParams local_48;
  TDataReference<Metasound::FAudioBuffer> local_30;
  
  this->_padding_ = (longlong)&___7__TAudioBusReaderOperator__00_Metasound__6B_;
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AudioBusAsset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar7 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioBusAsset).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  (this->AudioOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioOutputs).ArrayNum = 0;
  (this->AudioOutputs).ArrayMax = 0;
  (this->InterleavedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleavedBuffer).ArrayNum = 0;
  (this->InterleavedBuffer).ArrayMax = 0;
  (this->ResampledPatchOutput).Ptr = (FResampledPatchOutput *)0x0;
  this->InstanceID = 0;
  this->AudioBusId = 0;
  this->SampleRate = 0.0;
  (this->AudioBusPatchOutput).Object = (FPatchOutput *)0x0;
  (this->AudioBusPatchOutput).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PatchInput).OutputHandle.Object = (FPatchOutput *)0x0;
  (this->PatchInput).OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PatchInput).PushCallsCounter = 0;
  this->BlockSizeFrames = 0;
  this->bWasUnderrunReported = false;
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = -1.0;
  this->AudioDeviceId = 0xffffffff;
  this->AudioBusChannels = 0xffffffff;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_30,NewObject,param_1->OperatorSettings);
  pTVar1 = (TDataReference<Metasound::FAudioBuffer> *)(this->AudioOutputs).AllocatorInstance.Data;
  local_30._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar1 <= &local_30) && (&local_30 < pTVar1 + (this->AudioOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TAudioBusReaderOperator<1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->AudioOutputs).ArrayNum;
  if (iVar5 == (this->AudioOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->AudioOutputs).AllocatorInstance,&(this->AudioOutputs).ArrayMax)
    ;
  }
  pFVar2 = (this->AudioOutputs).AllocatorInstance.Data;
  (this->AudioOutputs).ArrayNum = iVar5 + 1;
  lVar7 = (longlong)iVar5 * 0x20;
  *(undefined ***)(pFVar2 + lVar7) = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar2 + lVar7 + 8) = local_30.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar2 + lVar7 + 0x10) =
       local_30.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_30.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_30.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_30.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar2 + lVar7) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_30.ObjectReference.SharedReferenceCount.ReferenceController);
  local_48.OperatorSettings = param_1->OperatorSettings;
  local_48.Environment = param_1->Environment;
  local_48.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_48);
  return this;
}

// TAudioBusReaderOperator<2> @ 14b337e60

TAudioBusReaderOperator<2> * __thiscall
Metasound::TAudioBusReaderOperator<2>::TAudioBusReaderOperator<2>
          (TAudioBusReaderOperator<2> *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FAudioBusAsset> *param_2)

{
  TDataReference<Metasound::FAudioBuffer> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TAudioBusReaderOperator<2> *pTVar6;
  longlong lVar7;
  FResetParams local_58;
  TDataReference<Metasound::FAudioBuffer> local_40;
  
  this->_padding_ = (longlong)&___7__TAudioBusReaderOperator__01_Metasound__6B_;
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AudioBusAsset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar7 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioBusAsset).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  (this->AudioOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioOutputs).ArrayNum = 0;
  (this->AudioOutputs).ArrayMax = 0;
  (this->InterleavedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleavedBuffer).ArrayNum = 0;
  (this->InterleavedBuffer).ArrayMax = 0;
  (this->ResampledPatchOutput).Ptr = (FResampledPatchOutput *)0x0;
  this->InstanceID = 0;
  this->AudioBusId = 0;
  this->SampleRate = 0.0;
  (this->AudioBusPatchOutput).Object = (FPatchOutput *)0x0;
  (this->AudioBusPatchOutput).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PatchInput).OutputHandle.Object = (FPatchOutput *)0x0;
  (this->PatchInput).OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PatchInput).PushCallsCounter = 0;
  this->BlockSizeFrames = 0;
  this->bWasUnderrunReported = false;
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = -1.0;
  this->AudioDeviceId = 0xffffffff;
  this->AudioBusChannels = 0xffffffff;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_40,NewObject,param_1->OperatorSettings);
  pTVar1 = (TDataReference<Metasound::FAudioBuffer> *)(this->AudioOutputs).AllocatorInstance.Data;
  local_40._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar1 <= &local_40) && (&local_40 < pTVar1 + (this->AudioOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TAudioBusReaderOperator<2> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->AudioOutputs).ArrayNum;
  if (iVar5 == (this->AudioOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->AudioOutputs).AllocatorInstance,&(this->AudioOutputs).ArrayMax)
    ;
  }
  pFVar2 = (this->AudioOutputs).AllocatorInstance.Data;
  (this->AudioOutputs).ArrayNum = iVar5 + 1;
  lVar7 = (longlong)iVar5 * 0x20;
  *(undefined ***)(pFVar2 + lVar7) = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar2 + lVar7 + 8) = local_40.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar2 + lVar7 + 0x10) =
       local_40.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_40.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_40.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_40.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar2 + lVar7) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_40.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_40,NewObject,param_1->OperatorSettings);
  pTVar1 = (TDataReference<Metasound::FAudioBuffer> *)(this->AudioOutputs).AllocatorInstance.Data;
  local_40._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if (pTVar1 <= &local_40) {
    if (&local_40 < pTVar1 + (this->AudioOutputs).ArrayMax) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TAudioBusReaderOperator<2> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  iVar5 = (this->AudioOutputs).ArrayNum;
  if (iVar5 == (this->AudioOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->AudioOutputs).AllocatorInstance,&(this->AudioOutputs).ArrayMax)
    ;
  }
  (this->AudioOutputs).ArrayNum = iVar5 + 1;
  pFVar2 = (this->AudioOutputs).AllocatorInstance.Data;
  lVar7 = (longlong)iVar5 * 0x20;
  *(undefined ***)(pFVar2 + lVar7) = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar2 + lVar7 + 8) = local_40.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar2 + lVar7 + 0x10) =
       local_40.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_40.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_40.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_40.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar2 + lVar7) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_40.ObjectReference.SharedReferenceCount.ReferenceController);
  local_58.OperatorSettings = param_1->OperatorSettings;
  local_58.Environment = param_1->Environment;
  local_58.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_58);
  return this;
}

// TAudioBusReaderOperator<4> @ 14b338150

TAudioBusReaderOperator<4> * __thiscall
Metasound::TAudioBusReaderOperator<4>::TAudioBusReaderOperator<4>
          (TAudioBusReaderOperator<4> *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FAudioBusAsset> *param_2)

{
  TDataReference<Metasound::FAudioBuffer> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TAudioBusReaderOperator<4> *pTVar6;
  longlong lVar7;
  FResetParams local_68;
  TDataReference<Metasound::FAudioBuffer> local_50;
  
  this->_padding_ = (longlong)&___7__TAudioBusReaderOperator__03_Metasound__6B_;
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AudioBusAsset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar7 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioBusAsset).field_0x10 = lVar7;
  if (lVar7 != 0) {
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  }
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  (this->AudioOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioOutputs).ArrayNum = 0;
  (this->AudioOutputs).ArrayMax = 0;
  (this->InterleavedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleavedBuffer).ArrayNum = 0;
  (this->InterleavedBuffer).ArrayMax = 0;
  (this->ResampledPatchOutput).Ptr = (FResampledPatchOutput *)0x0;
  this->InstanceID = 0;
  this->AudioBusId = 0;
  this->SampleRate = 0.0;
  (this->AudioBusPatchOutput).Object = (FPatchOutput *)0x0;
  (this->AudioBusPatchOutput).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PatchInput).OutputHandle.Object = (FPatchOutput *)0x0;
  (this->PatchInput).OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PatchInput).PushCallsCounter = 0;
  this->BlockSizeFrames = 0;
  this->bWasUnderrunReported = false;
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = -1.0;
  this->AudioDeviceId = 0xffffffff;
  this->AudioBusChannels = 0xffffffff;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_50,NewObject,param_1->OperatorSettings);
  pTVar1 = (TDataReference<Metasound::FAudioBuffer> *)(this->AudioOutputs).AllocatorInstance.Data;
  local_50._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar1 <= &local_50) && (&local_50 < pTVar1 + (this->AudioOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TAudioBusReaderOperator<4> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->AudioOutputs).ArrayNum;
  if (iVar5 == (this->AudioOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->AudioOutputs).AllocatorInstance,&(this->AudioOutputs).ArrayMax)
    ;
  }
  pFVar2 = (this->AudioOutputs).AllocatorInstance.Data;
  (this->AudioOutputs).ArrayNum = iVar5 + 1;
  lVar7 = (longlong)iVar5 * 0x20;
  *(undefined ***)(pFVar2 + lVar7) = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar2 + lVar7 + 8) = local_50.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar2 + lVar7 + 0x10) =
       local_50.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_50.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_50.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_50.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar2 + lVar7) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_50.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_50,NewObject,param_1->OperatorSettings);
  pTVar1 = (TDataReference<Metasound::FAudioBuffer> *)(this->AudioOutputs).AllocatorInstance.Data;
  local_50._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar1 <= &local_50) && (&local_50 < pTVar1 + (this->AudioOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TAudioBusReaderOperator<4> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->AudioOutputs).ArrayNum;
  if (iVar5 == (this->AudioOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->AudioOutputs).AllocatorInstance,&(this->AudioOutputs).ArrayMax)
    ;
  }
  (this->AudioOutputs).ArrayNum = iVar5 + 1;
  pFVar2 = (this->AudioOutputs).AllocatorInstance.Data;
  lVar7 = (longlong)iVar5 * 0x20;
  *(undefined ***)(pFVar2 + lVar7) = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar2 + lVar7 + 8) = local_50.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar2 + lVar7 + 0x10) =
       local_50.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_50.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_50.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_50.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar2 + lVar7) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_50.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_50,NewObject,param_1->OperatorSettings);
  pTVar1 = (TDataReference<Metasound::FAudioBuffer> *)(this->AudioOutputs).AllocatorInstance.Data;
  local_50._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if ((pTVar1 <= &local_50) && (&local_50 < pTVar1 + (this->AudioOutputs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TAudioBusReaderOperator<4> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (this->AudioOutputs).ArrayNum;
  if (iVar5 == (this->AudioOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->AudioOutputs).AllocatorInstance,&(this->AudioOutputs).ArrayMax)
    ;
  }
  (this->AudioOutputs).ArrayNum = iVar5 + 1;
  pFVar2 = (this->AudioOutputs).AllocatorInstance.Data;
  lVar7 = (longlong)iVar5 * 0x20;
  *(undefined ***)(pFVar2 + lVar7) = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar2 + lVar7 + 8) = local_50.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar2 + lVar7 + 0x10) =
       local_50.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_50.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_50.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_50.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar2 + lVar7) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_50.ObjectReference.SharedReferenceCount.ReferenceController);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_50,NewObject,param_1->OperatorSettings);
  pTVar1 = (TDataReference<Metasound::FAudioBuffer> *)(this->AudioOutputs).AllocatorInstance.Data;
  local_50._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  if (pTVar1 <= &local_50) {
    if (&local_50 < pTVar1 + (this->AudioOutputs).ArrayMax) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TAudioBusReaderOperator<4> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  iVar5 = (this->AudioOutputs).ArrayNum;
  if (iVar5 == (this->AudioOutputs).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->AudioOutputs).AllocatorInstance,&(this->AudioOutputs).ArrayMax)
    ;
  }
  (this->AudioOutputs).ArrayNum = iVar5 + 1;
  pFVar2 = (this->AudioOutputs).AllocatorInstance.Data;
  lVar7 = (longlong)iVar5 * 0x20;
  *(undefined ***)(pFVar2 + lVar7) = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)(pFVar2 + lVar7 + 8) = local_50.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)(pFVar2 + lVar7 + 0x10) =
       local_50.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_50.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_50.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_50.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)(pFVar2 + lVar7) =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_50.ObjectReference.SharedReferenceCount.ReferenceController);
  local_68.OperatorSettings = param_1->OperatorSettings;
  local_68.Environment = param_1->Environment;
  local_68.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_68);
  return this;
}

// TAudioBusReaderOperator<6> @ 14b3385e0

TAudioBusReaderOperator<6> * __thiscall
Metasound::TAudioBusReaderOperator<6>::TAudioBusReaderOperator<6>
          (TAudioBusReaderOperator<6> *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FAudioBusAsset> *param_2)

{
  TDataReference<Metasound::FAudioBuffer> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TAudioBusReaderOperator<6> *pTVar6;
  longlong lVar7;
  longlong lVar8;
  FResetParams local_58;
  TDataReference<Metasound::FAudioBuffer> local_40;
  
  this->_padding_ = (longlong)&___7__TAudioBusReaderOperator__05_Metasound__6B_;
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AudioBusAsset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar8 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioBusAsset).field_0x10 = lVar8;
  if (lVar8 != 0) {
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
  }
  lVar8 = 6;
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  this->AudioMixerOutputFrames = -1;
  (this->AudioOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioOutputs).ArrayNum = 0;
  (this->AudioOutputs).ArrayMax = 0;
  (this->InterleavedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleavedBuffer).ArrayNum = 0;
  (this->InterleavedBuffer).ArrayMax = 0;
  (this->ResampledPatchOutput).Ptr = (FResampledPatchOutput *)0x0;
  this->InstanceID = 0;
  this->AudioBusId = 0;
  this->SampleRate = 0.0;
  (this->AudioBusPatchOutput).Object = (FPatchOutput *)0x0;
  (this->AudioBusPatchOutput).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PatchInput).OutputHandle.Object = (FPatchOutput *)0x0;
  (this->PatchInput).OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PatchInput).PushCallsCounter = 0;
  this->BlockSizeFrames = 0;
  this->bWasUnderrunReported = false;
  this->AudioMixerSampleRate = -1.0;
  this->AudioDeviceId = 0xffffffff;
  this->AudioBusChannels = 0xffffffff;
  do {
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_40,NewObject,param_1->OperatorSettings);
    pTVar1 = (TDataReference<Metasound::FAudioBuffer> *)(this->AudioOutputs).AllocatorInstance.Data;
    local_40._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar1 <= &local_40) && (&local_40 < pTVar1 + (this->AudioOutputs).ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TAudioBusReaderOperator<6> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar5 = (this->AudioOutputs).ArrayNum;
    if (iVar5 == (this->AudioOutputs).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->AudioOutputs).AllocatorInstance,
                         &(this->AudioOutputs).ArrayMax);
    }
    pFVar2 = (this->AudioOutputs).AllocatorInstance.Data;
    (this->AudioOutputs).ArrayNum = iVar5 + 1;
    lVar7 = (longlong)iVar5 * 0x20;
    *(undefined ***)(pFVar2 + lVar7) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar2 + lVar7 + 8) = local_40.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar2 + lVar7 + 0x10) =
         local_40.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_40.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_40.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_40.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar2 + lVar7) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_40.ObjectReference.SharedReferenceCount.ReferenceController);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  local_58.OperatorSettings = param_1->OperatorSettings;
  local_58.Environment = param_1->Environment;
  local_58.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_58);
  return this;
}

// TAudioBusReaderOperator<8> @ 14b338800

TAudioBusReaderOperator<8> * __thiscall
Metasound::TAudioBusReaderOperator<8>::TAudioBusReaderOperator<8>
          (TAudioBusReaderOperator<8> *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FAudioBusAsset> *param_2)

{
  TDataReference<Metasound::FAudioBuffer> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TAudioBusReaderOperator<8> *pTVar6;
  longlong lVar7;
  longlong lVar8;
  FResetParams local_58;
  TDataReference<Metasound::FAudioBuffer> local_40;
  
  this->_padding_ = (longlong)&___7__TAudioBusReaderOperator__07_Metasound__6B_;
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AudioBusAsset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar8 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioBusAsset).field_0x10 = lVar8;
  if (lVar8 != 0) {
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
  }
  lVar8 = 8;
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  this->AudioMixerOutputFrames = -1;
  (this->AudioOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioOutputs).ArrayNum = 0;
  (this->AudioOutputs).ArrayMax = 0;
  (this->InterleavedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleavedBuffer).ArrayNum = 0;
  (this->InterleavedBuffer).ArrayMax = 0;
  (this->ResampledPatchOutput).Ptr = (FResampledPatchOutput *)0x0;
  this->InstanceID = 0;
  this->AudioBusId = 0;
  this->SampleRate = 0.0;
  (this->AudioBusPatchOutput).Object = (FPatchOutput *)0x0;
  (this->AudioBusPatchOutput).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PatchInput).OutputHandle.Object = (FPatchOutput *)0x0;
  (this->PatchInput).OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PatchInput).PushCallsCounter = 0;
  this->BlockSizeFrames = 0;
  this->bWasUnderrunReported = false;
  this->AudioMixerSampleRate = -1.0;
  this->AudioDeviceId = 0xffffffff;
  this->AudioBusChannels = 0xffffffff;
  do {
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              (&local_40,NewObject,param_1->OperatorSettings);
    pTVar1 = (TDataReference<Metasound::FAudioBuffer> *)(this->AudioOutputs).AllocatorInstance.Data;
    local_40._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if ((pTVar1 <= &local_40) && (&local_40 < pTVar1 + (this->AudioOutputs).ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TAudioBusReaderOperator<8> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar5 = (this->AudioOutputs).ArrayNum;
    if (iVar5 == (this->AudioOutputs).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->AudioOutputs).AllocatorInstance,
                         &(this->AudioOutputs).ArrayMax);
    }
    pFVar2 = (this->AudioOutputs).AllocatorInstance.Data;
    (this->AudioOutputs).ArrayNum = iVar5 + 1;
    lVar7 = (longlong)iVar5 * 0x20;
    *(undefined ***)(pFVar2 + lVar7) =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(FAudioBuffer **)(pFVar2 + lVar7 + 8) = local_40.ObjectReference.Object;
    *(TReferenceControllerBase<0> **)(pFVar2 + lVar7 + 0x10) =
         local_40.ObjectReference.SharedReferenceCount.ReferenceController;
    if (local_40.ObjectReference.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<0> *)0x0) {
      (local_40.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (local_40.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1;
    }
    *(undefined ***)(pFVar2 + lVar7) =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (local_40.ObjectReference.SharedReferenceCount.ReferenceController);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  local_58.OperatorSettings = param_1->OperatorSettings;
  local_58.Environment = param_1->Environment;
  local_58.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_58);
  return this;
}

// operator() @ 14b355570

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TAudioBusReaderOperator<1>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_38;
  FText local_20;
  
  ::FString::PrintfImpl((FString *)&local_38,L"Audio Bus Reader (%d)");
  pwVar7 = L"";
  if (local_38.Name.ComparisonIndex.Value != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value)
    ;
  }
  ::FName::FName(local_res18,pwVar7);
  if ((void *)CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_38.Namespace.Number,
                                   local_38.Namespace.ComparisonIndex.Value));
  }
  FText::FText(&local_20);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::EngineNodes::Namespace,local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_38.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_38.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_38.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_38.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_20.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_20.TextData.Reference;
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 8))
                (local_20.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_20.Flags;
  pFVar5 = FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if ((longlong *)CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value) !=
      (longlong *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value) +
                0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  uVar6 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<1>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<1>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<1>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TAudioBusReaderOperator<1>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<1>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TAudioBusReaderOperator<1>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<1>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<1>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar8 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar8 = pFVar8 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar3 = Metasound::NodeCategories::Io.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::Io.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::Io.Flags;
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b3557d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TAudioBusReaderOperator<2>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_38;
  FText local_20;
  
  ::FString::PrintfImpl((FString *)&local_38,L"Audio Bus Reader (%d)");
  pwVar7 = L"";
  if (local_38.Name.ComparisonIndex.Value != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value)
    ;
  }
  ::FName::FName(local_res18,pwVar7);
  if ((void *)CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_38.Namespace.Number,
                                   local_38.Namespace.ComparisonIndex.Value));
  }
  FText::FText(&local_20);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::EngineNodes::Namespace,local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_38.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_38.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_38.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_38.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_20.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_20.TextData.Reference;
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 8))
                (local_20.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_20.Flags;
  pFVar5 = FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if ((longlong *)CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value) !=
      (longlong *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value) +
                0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  uVar6 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<2>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<2>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<2>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TAudioBusReaderOperator<2>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<2>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TAudioBusReaderOperator<2>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<2>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<2>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar8 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar8 = pFVar8 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar3 = Metasound::NodeCategories::Io.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::Io.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::Io.Flags;
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b355a30

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TAudioBusReaderOperator<4>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_38;
  FText local_20;
  
  ::FString::PrintfImpl((FString *)&local_38,L"Audio Bus Reader (%d)");
  pwVar7 = L"";
  if (local_38.Name.ComparisonIndex.Value != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value)
    ;
  }
  ::FName::FName(local_res18,pwVar7);
  if ((void *)CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_38.Namespace.Number,
                                   local_38.Namespace.ComparisonIndex.Value));
  }
  FText::FText(&local_20);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::EngineNodes::Namespace,local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_38.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_38.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_38.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_38.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_20.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_20.TextData.Reference;
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 8))
                (local_20.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_20.Flags;
  pFVar5 = FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if ((longlong *)CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value) !=
      (longlong *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value) +
                0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  uVar6 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<4>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<4>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<4>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TAudioBusReaderOperator<4>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<4>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TAudioBusReaderOperator<4>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<4>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<4>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar8 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar8 = pFVar8 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar3 = Metasound::NodeCategories::Io.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::Io.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::Io.Flags;
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b355c90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TAudioBusReaderOperator<6>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_38;
  FText local_20;
  
  ::FString::PrintfImpl((FString *)&local_38,L"Audio Bus Reader (%d)");
  pwVar7 = L"";
  if (local_38.Name.ComparisonIndex.Value != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value)
    ;
  }
  ::FName::FName(local_res18,pwVar7);
  if ((void *)CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_38.Namespace.Number,
                                   local_38.Namespace.ComparisonIndex.Value));
  }
  FText::FText(&local_20);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::EngineNodes::Namespace,local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_38.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_38.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_38.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_38.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_20.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_20.TextData.Reference;
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 8))
                (local_20.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_20.Flags;
  pFVar5 = FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if ((longlong *)CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value) !=
      (longlong *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value) +
                0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  uVar6 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<6>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<6>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<6>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TAudioBusReaderOperator<6>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<6>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TAudioBusReaderOperator<6>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<6>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<6>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar8 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar8 = pFVar8 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar3 = Metasound::NodeCategories::Io.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::Io.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::Io.Flags;
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b355ef0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TAudioBusReaderOperator<8>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_38;
  FText local_20;
  
  ::FString::PrintfImpl((FString *)&local_38,L"Audio Bus Reader (%d)");
  pwVar7 = L"";
  if (local_38.Name.ComparisonIndex.Value != 0) {
    pwVar7 = (wchar_t *)CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value)
    ;
  }
  ::FName::FName(local_res18,pwVar7);
  if ((void *)CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_38.Namespace.Number,
                                   local_38.Namespace.ComparisonIndex.Value));
  }
  FText::FText(&local_20);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::EngineNodes::Namespace,local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_38.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_38.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_38.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_38.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_20.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_20.TextData.Reference;
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 8))
                (local_20.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_20.Flags;
  pFVar5 = FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if ((longlong *)CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value) !=
      (longlong *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_38.Namespace.Number,local_38.Namespace.ComparisonIndex.Value) +
                0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  uVar6 = (ulonglong)_tls_index;
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8) + 0x9d4c) <
      `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<8>::GetVertexInterface(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<8>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<8>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TAudioBusReaderOperator<8>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<8>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TAudioBusReaderOperator<8>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<8>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<8>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar8 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar8 = pFVar8 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar3 = Metasound::NodeCategories::Io.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::Io.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::Io.Flags;
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b3597d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TAudioBusReaderOperator<1>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_148 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_108;
  FInputVertexInterface local_f8;
  FName local_d8;
  FName local_d0;
  FString local_c8;
  FOutputVertexInterface local_b8;
  FString local_98;
  FStringFormatArg local_88;
  TOutputDataVertex<Metasound::FAudioBuffer> local_68;
  TInputDataVertex<Metasound::FAudioBusAsset> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_f8);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBusAsset>::
           TInputDataVertex<Metasound::FAudioBusAsset><>
                     (&local_48,&Metasound::AudioBusReaderNode::InParamAudioBusInputName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_f8,pFVar3);
  if (0xc < (byte)local_48._48_1_) {
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
              ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_b8);
  FStringFormatArg::FStringFormatArg(&local_88,0);
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_108.AllocatorInstance.Data,&local_88,1);
  FLazyName::Resolve(&Metasound::AudioBusReaderNode::OutParamAudioName);
  pFVar5 = ::FName::ToString(&local_d8,&local_98);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  ::FString::FormatImpl(&local_c8,pwVar7,&local_108);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar8.Data = local_c8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
  pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
           TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_68,&local_d0,&Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_b8,
             (FOutputDataVertex *)pTVar6);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if ((FStringFormatArg *)local_108.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
  }
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_f8,&local_b8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data,
             local_b8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_b8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_f8._padding_,(int)local_f8._padding_);
  if ((FInputDataVertex *)local_f8._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b359a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TAudioBusReaderOperator<2>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  undefined1 auStackY_148 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_108;
  FInputVertexInterface local_f8;
  FName local_d8;
  FName local_d0;
  FString local_c8;
  FOutputVertexInterface local_b8;
  FString local_98;
  FStringFormatArg local_88;
  TOutputDataVertex<Metasound::FAudioBuffer> local_68;
  TInputDataVertex<Metasound::FAudioBusAsset> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_f8);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBusAsset>::
           TInputDataVertex<Metasound::FAudioBusAsset><>
                     (&local_48,&Metasound::AudioBusReaderNode::InParamAudioBusInputName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_f8,pFVar3);
  if (0xc < (byte)local_48._48_1_) {
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
              ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_b8);
  uVar9 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_88,uVar9);
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_108.AllocatorInstance.Data,&local_88,1);
    FLazyName::Resolve(&Metasound::AudioBusReaderNode::OutParamAudioName);
    pFVar5 = ::FName::ToString(&local_d8,&local_98);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_c8,pwVar7,&local_108);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_68,&local_d0,&Metasound::FDataVertexMetadata::EmptyBasic);
    Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_b8,
               (FOutputDataVertex *)pTVar6);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
    if ((FStringFormatArg *)local_108.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 2);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_f8,&local_b8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data,
             local_b8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_b8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_f8._padding_,(int)local_f8._padding_);
  if ((FInputDataVertex *)local_f8._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b359cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TAudioBusReaderOperator<4>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  undefined1 auStackY_148 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_108;
  FInputVertexInterface local_f8;
  FName local_d8;
  FName local_d0;
  FString local_c8;
  FOutputVertexInterface local_b8;
  FString local_98;
  FStringFormatArg local_88;
  TOutputDataVertex<Metasound::FAudioBuffer> local_68;
  TInputDataVertex<Metasound::FAudioBusAsset> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_f8);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBusAsset>::
           TInputDataVertex<Metasound::FAudioBusAsset><>
                     (&local_48,&Metasound::AudioBusReaderNode::InParamAudioBusInputName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_f8,pFVar3);
  if (0xc < (byte)local_48._48_1_) {
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
              ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_b8);
  uVar9 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_88,uVar9);
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_108.AllocatorInstance.Data,&local_88,1);
    FLazyName::Resolve(&Metasound::AudioBusReaderNode::OutParamAudioName);
    pFVar5 = ::FName::ToString(&local_d8,&local_98);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_c8,pwVar7,&local_108);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_68,&local_d0,&Metasound::FDataVertexMetadata::EmptyBasic);
    Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_b8,
               (FOutputDataVertex *)pTVar6);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
    if ((FStringFormatArg *)local_108.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_f8,&local_b8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data,
             local_b8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_b8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_f8._padding_,(int)local_f8._padding_);
  if ((FInputDataVertex *)local_f8._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b359f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TAudioBusReaderOperator<6>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  undefined1 auStackY_148 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_108;
  FInputVertexInterface local_f8;
  FName local_d8;
  FName local_d0;
  FString local_c8;
  FOutputVertexInterface local_b8;
  FString local_98;
  FStringFormatArg local_88;
  TOutputDataVertex<Metasound::FAudioBuffer> local_68;
  TInputDataVertex<Metasound::FAudioBusAsset> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_f8);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBusAsset>::
           TInputDataVertex<Metasound::FAudioBusAsset><>
                     (&local_48,&Metasound::AudioBusReaderNode::InParamAudioBusInputName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_f8,pFVar3);
  if (0xc < (byte)local_48._48_1_) {
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
              ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_b8);
  uVar9 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_88,uVar9);
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_108.AllocatorInstance.Data,&local_88,1);
    FLazyName::Resolve(&Metasound::AudioBusReaderNode::OutParamAudioName);
    pFVar5 = ::FName::ToString(&local_d8,&local_98);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_c8,pwVar7,&local_108);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_68,&local_d0,&Metasound::FDataVertexMetadata::EmptyBasic);
    Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_b8,
               (FOutputDataVertex *)pTVar6);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
    if ((FStringFormatArg *)local_108.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 6);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_f8,&local_b8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data,
             local_b8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_b8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_f8._padding_,(int)local_f8._padding_);
  if ((FInputDataVertex *)local_f8._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b35a1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TAudioBusReaderOperator<8>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  undefined1 auStackY_148 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_108;
  FInputVertexInterface local_f8;
  FName local_d8;
  FName local_d0;
  FString local_c8;
  FOutputVertexInterface local_b8;
  FString local_98;
  FStringFormatArg local_88;
  TOutputDataVertex<Metasound::FAudioBuffer> local_68;
  TInputDataVertex<Metasound::FAudioBusAsset> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_148;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_f8);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBusAsset>::
           TInputDataVertex<Metasound::FAudioBusAsset><>
                     (&local_48,&Metasound::AudioBusReaderNode::InParamAudioBusInputName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_f8,pFVar3);
  if (0xc < (byte)local_48._48_1_) {
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
              ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_b8);
  uVar9 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_88,uVar9);
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_108.AllocatorInstance.Data,&local_88,1);
    FLazyName::Resolve(&Metasound::AudioBusReaderNode::OutParamAudioName);
    pFVar5 = ::FName::ToString(&local_d8,&local_98);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_c8,pwVar7,&local_108);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_d0,(wchar_t *)FVar8.Data);
    pTVar6 = Metasound::TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_68,&local_d0,&Metasound::FDataVertexMetadata::EmptyBasic);
    Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FOutputDataVertex> *)&local_b8,
               (FOutputDataVertex *)pTVar6);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
    if ((FStringFormatArg *)local_108.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 8);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_f8,&local_b8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data,
             local_b8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_b8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_b8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data,
             local_f8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_f8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_f8.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_f8._padding_,(int)local_f8._padding_);
  if ((FInputDataVertex *)local_f8._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b37f000

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TAudioBusReaderOperator<1>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar1;
  FInputVertexInterfaceData *this;
  IMetasoundEnvironmentVariable *pIVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  void *pvVar10;
  void *pvVar11;
  TAudioBusReaderOperator<1> *pTVar12;
  FName local_res10;
  FString local_68;
  FString local_58;
  undefined1 local_48 [32];
  
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar5 = pvVar10 == pvVar11;
  }
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar6 = false;
  }
  else {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar6 = pvVar10 == pvVar11;
  }
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
  bVar7 = false;
  if (pTVar8 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar7 = pvVar10 == pvVar11;
  }
  if (!(bool)(bVar6 & bVar5 & bVar7)) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_58
                       );
      ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::TAudioBusReaderOperator<1>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    param_1->Node = (INode *)0x0;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AudioBusReaderNode::InParamAudioBusInputName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset>
            (this,(TDataReadReference<Metasound::FAudioBusAsset> *)local_48,&local_res10,pFVar3);
  pTVar12 = ::operator_new(0xa8);
  if (pTVar12 != (TAudioBusReaderOperator<1> *)0x0) {
    pTVar12 = TAudioBusReaderOperator<1>
                        (pTVar12,(FBuildOperatorParams *)param_2,
                         (TDataReadReference<Metasound::FAudioBusAsset> *)local_48);
    param_1->Node = (INode *)pTVar12;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_48._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b37f2c0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TAudioBusReaderOperator<2>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar1;
  FInputVertexInterfaceData *this;
  IMetasoundEnvironmentVariable *pIVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  void *pvVar10;
  void *pvVar11;
  TAudioBusReaderOperator<2> *pTVar12;
  FName local_res10;
  FString local_68;
  FString local_58;
  undefined1 local_48 [32];
  
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar5 = pvVar10 == pvVar11;
  }
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar6 = false;
  }
  else {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar6 = pvVar10 == pvVar11;
  }
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
  bVar7 = false;
  if (pTVar8 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar7 = pvVar10 == pvVar11;
  }
  if (!(bool)(bVar6 & bVar5 & bVar7)) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_58
                       );
      ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::TAudioBusReaderOperator<2>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    param_1->Node = (INode *)0x0;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AudioBusReaderNode::InParamAudioBusInputName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset>
            (this,(TDataReadReference<Metasound::FAudioBusAsset> *)local_48,&local_res10,pFVar3);
  pTVar12 = ::operator_new(0xa8);
  if (pTVar12 != (TAudioBusReaderOperator<2> *)0x0) {
    pTVar12 = TAudioBusReaderOperator<2>
                        (pTVar12,(FBuildOperatorParams *)param_2,
                         (TDataReadReference<Metasound::FAudioBusAsset> *)local_48);
    param_1->Node = (INode *)pTVar12;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_48._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b37f580

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TAudioBusReaderOperator<4>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar1;
  FInputVertexInterfaceData *this;
  IMetasoundEnvironmentVariable *pIVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  void *pvVar10;
  void *pvVar11;
  TAudioBusReaderOperator<4> *pTVar12;
  FName local_res10;
  FString local_68;
  FString local_58;
  undefined1 local_48 [32];
  
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar5 = pvVar10 == pvVar11;
  }
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar6 = false;
  }
  else {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar6 = pvVar10 == pvVar11;
  }
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
  bVar7 = false;
  if (pTVar8 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar7 = pvVar10 == pvVar11;
  }
  if (!(bool)(bVar6 & bVar5 & bVar7)) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_58
                       );
      ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::TAudioBusReaderOperator<4>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    param_1->Node = (INode *)0x0;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AudioBusReaderNode::InParamAudioBusInputName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset>
            (this,(TDataReadReference<Metasound::FAudioBusAsset> *)local_48,&local_res10,pFVar3);
  pTVar12 = ::operator_new(0xa8);
  if (pTVar12 != (TAudioBusReaderOperator<4> *)0x0) {
    pTVar12 = TAudioBusReaderOperator<4>
                        (pTVar12,(FBuildOperatorParams *)param_2,
                         (TDataReadReference<Metasound::FAudioBusAsset> *)local_48);
    param_1->Node = (INode *)pTVar12;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_48._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b37f840

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TAudioBusReaderOperator<6>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar1;
  FInputVertexInterfaceData *this;
  IMetasoundEnvironmentVariable *pIVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  void *pvVar10;
  void *pvVar11;
  TAudioBusReaderOperator<6> *pTVar12;
  FName local_res10;
  FString local_68;
  FString local_58;
  undefined1 local_48 [32];
  
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar5 = pvVar10 == pvVar11;
  }
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar6 = false;
  }
  else {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar6 = pvVar10 == pvVar11;
  }
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
  bVar7 = false;
  if (pTVar8 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar7 = pvVar10 == pvVar11;
  }
  if (!(bool)(bVar6 & bVar5 & bVar7)) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_58
                       );
      ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::TAudioBusReaderOperator<6>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    param_1->Node = (INode *)0x0;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AudioBusReaderNode::InParamAudioBusInputName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset>
            (this,(TDataReadReference<Metasound::FAudioBusAsset> *)local_48,&local_res10,pFVar3);
  pTVar12 = ::operator_new(0xa8);
  if (pTVar12 != (TAudioBusReaderOperator<6> *)0x0) {
    pTVar12 = TAudioBusReaderOperator<6>
                        (pTVar12,(FBuildOperatorParams *)param_2,
                         (TDataReadReference<Metasound::FAudioBusAsset> *)local_48);
    param_1->Node = (INode *)pTVar12;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_48._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b37fb00

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TAudioBusReaderOperator<8>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar1;
  FInputVertexInterfaceData *this;
  IMetasoundEnvironmentVariable *pIVar2;
  FOperatorSettings *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  void *pvVar10;
  void *pvVar11;
  TAudioBusReaderOperator<8> *pTVar12;
  FName local_res10;
  FString local_68;
  FString local_58;
  undefined1 local_48 [32];
  
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar5 = pvVar10 == pvVar11;
  }
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar6 = false;
  }
  else {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar6 = pvVar10 == pvVar11;
  }
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
  bVar7 = false;
  if (pTVar8 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar4)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar7 = pvVar10 == pvVar11;
  }
  if (!(bool)(bVar6 & bVar5 & bVar7)) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_58
                       );
      ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_68);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::TAudioBusReaderOperator<8>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    param_1->Node = (INode *)0x0;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AudioBusReaderNode::InParamAudioBusInputName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset>
            (this,(TDataReadReference<Metasound::FAudioBusAsset> *)local_48,&local_res10,pFVar3);
  pTVar12 = ::operator_new(0xa8);
  if (pTVar12 != (TAudioBusReaderOperator<8> *)0x0) {
    pTVar12 = TAudioBusReaderOperator<8>
                        (pTVar12,(FBuildOperatorParams *)param_2,
                         (TDataReadReference<Metasound::FAudioBusAsset> *)local_48);
    param_1->Node = (INode *)pTVar12;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_48._16_8_);
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  param_1->Node = (INode *)0x0;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreatePatchOutput @ 14b38a710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusReaderOperator<1>::CreatePatchOutput(TAudioBusReaderOperator<1> *this)

{
  TSharedPtr<Audio::FPatchOutput,1> *this_00;
  int *piVar1;
  TSharedPtr<FAudioBusProxy,1> *this_01;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FAudioDeviceManager *this_02;
  FAudioDevice *this_03;
  UAudioBusSubsystem *this_04;
  FAudioBusProxy *pFVar7;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar8;
  TSharedRef<Audio::FPatchOutput,1> *pTVar9;
  FResampledPatchOutput *this_05;
  FAudioBusKey FVar10;
  float fVar11;
  FAudioBusKey local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  TSharedRef<Audio::FPatchOutput,1> local_a8;
  FString local_98;
  TSharedPtr<Audio::FPatchOutput,1> local_88;
  TSharedRef<Audio::FPatchOutput,1> local_78;
  FPatchInput local_68;
  FStringFormatArg local_50;
  
  this_01 = *(TSharedPtr<FAudioBusProxy,1> **)&(this->AudioBusAsset).field_0x8;
  if (this_01->Object != (FAudioBusProxy *)0x0) {
    if (this_01->Object->NumChannels < 1) {
      if (2 < (byte)LogMetaSound._0_1_) {
        TSharedPtr<FAudioBusProxy,1>::operator->(this_01);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<1>::CreatePatchOutput(void)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        return;
      }
    }
    else {
      this_02 = FAudioDeviceManager::Get();
      if ((this_02 != (FAudioDeviceManager *)0x0) &&
         (this_03 = FAudioDeviceManager::GetAudioDeviceRaw(this_02,this->AudioDeviceId),
         this_03 != (FAudioDevice *)0x0)) {
        this_04 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_03);
        if (this_04 == (UAudioBusSubsystem *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AudioBusSubsystem",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusReaderNode.cpp"
                             ,0x12f,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_01);
          uVar5 = 8;
          if (pFVar7->NumChannels < 8) {
            uVar5 = pFVar7->NumChannels;
          }
          this->AudioBusChannels = uVar5;
          pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_01);
          local_res8.ObjectId = pFVar7->AudioBusId;
          this->AudioBusId = local_res8.ObjectId;
          local_res8.InstanceId = 0xffffffff;
          FStringFormatArg::FStringFormatArg(&local_50,local_res8.ObjectId);
          local_b8.ArrayNum = 1;
          FVar10.ObjectId = 0;
          FVar10.InstanceId = 0;
          local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_b8.AllocatorInstance,1,&local_b8.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_b8.AllocatorInstance.Data,&local_50,1);
          ::FString::FormatImpl(&local_98,L"_AudioBusReaderNode_AudioBusId_{0}",&local_b8);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
          if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_b8.AllocatorInstance.Data);
          }
          if (local_50.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.StringValue.Data.AllocatorInstance.Data);
          }
          UAudioBusSubsystem::StartAudioBus
                    (this_04,local_res8,&local_98,this->AudioBusChannels,false);
          pTVar8 = UAudioBusSubsystem::AddPatchOutputForSoundAndAudioBus
                             (this_04,&local_88,this->InstanceID,local_res8,this->BlockSizeFrames,
                              this->AudioBusChannels,__real_3f800000);
          this_00 = &this->AudioBusPatchOutput;
          if (this_00 != pTVar8) {
            this_00->Object = pTVar8->Object;
            pTVar8->Object = (FPatchOutput *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->AudioBusPatchOutput).SharedReferenceCount,
                       &pTVar8->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
          Audio::FPatchInput::FPatchInput(&local_68,this_00);
          Audio::FPatchInput::operator=(&this->PatchInput,&local_68);
          Audio::FPatchInput::~FPatchInput(&local_68);
          fVar11 = __real_bf800000;
          if (AudioBusPrivate::EnableResampledAudioBus != 0) {
            if ((((this->AudioMixerSampleRate != this->SampleRate) &&
                 (0.0 < this->AudioMixerSampleRate)) && (0.0 < this->SampleRate)) &&
               (this_00->Object != (FPatchOutput *)0x0)) {
              if (2 < (byte)LogMetaSound._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<1>::CreatePatchOutput(void)___ptr64'
                            ::__l45::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
              }
              pTVar9 = TSharedPtr<Audio::FPatchOutput,1>::ToSharedRef(this_00,&local_78);
              this_05 = ::operator_new(0x98);
              if (this_05 != (FResampledPatchOutput *)0x0) {
                local_a8.Object = pTVar9->Object;
                local_a8.SharedReferenceCount.ReferenceController =
                     (pTVar9->SharedReferenceCount).ReferenceController;
                if (local_a8.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_a8.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                FVar10 = (FAudioBusKey)
                         AudioBusPrivate::FResampledPatchOutput::FResampledPatchOutput
                                   (this_05,this->AudioBusChannels,this->AudioMixerSampleRate,
                                    this->SampleRate,this->BlockSizeFrames,&local_a8);
              }
              local_res8 = FVar10;
              TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
              ::operator=(&this->ResampledPatchOutput,
                          (TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
                           *)&local_res8);
              FVar10 = local_res8;
              if (local_res8 != (FAudioBusKey)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (((FSharedReferencer<1> *)((longlong)local_res8 + 0x90))->
                           ReferenceController);
                pFVar2 = (((TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)FVar10 + 0x78))->
                         AllocatorInstance).Data;
                if (pFVar2 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar2);
                }
                if (*(ForElementType<float_*> *)((longlong)FVar10 + 0x68) !=
                    (ForElementType<float_*>)0x0) {
                  FMemory::Free((void *)*(ForElementType<float_*> *)((longlong)FVar10 + 0x68));
                }
                if (*(ForElementType<float_const_*> *)((longlong)FVar10 + 0x48) !=
                    (ForElementType<float_const_*>)0x0) {
                  FMemory::Free((void *)*(ForElementType<float_const_*> *)((longlong)FVar10 + 0x48))
                  ;
                }
                if (*(ForElementType<float> *)((longlong)FVar10 + 0x28) !=
                    (ForElementType<float>)0x0) {
                  FMemory::Free((void *)*(ForElementType<float> *)((longlong)FVar10 + 0x28));
                }
                ::operator_delete((void *)FVar10,0x98);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_78.SharedReferenceCount.ReferenceController);
              fVar11 = this->AudioMixerSampleRate / this->SampleRate;
            }
          }
          iVar6 = InitialNumBlocks(this);
          iVar6 = NumBlocksToNumSamples(this,iVar6,fVar11);
          Audio::FPatchInput::PushAudio(&this->PatchInput,(float *)0x0,iVar6);
          piVar1 = &(this->InterleavedBuffer).ArrayMax;
          (this->InterleavedBuffer).ArrayNum = 0;
          if ((this->InterleavedBuffer).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,piVar1);
          }
          UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,this->AudioBusChannels * this->BlockSizeFrames,
                     &(this->InterleavedBuffer).AllocatorInstance,
                     &(this->InterleavedBuffer).ArrayNum,piVar1);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// CreatePatchOutput @ 14b38ab80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusReaderOperator<2>::CreatePatchOutput(TAudioBusReaderOperator<2> *this)

{
  TSharedPtr<Audio::FPatchOutput,1> *this_00;
  int *piVar1;
  TSharedPtr<FAudioBusProxy,1> *this_01;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FAudioDeviceManager *this_02;
  FAudioDevice *this_03;
  UAudioBusSubsystem *this_04;
  FAudioBusProxy *pFVar7;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar8;
  TSharedRef<Audio::FPatchOutput,1> *pTVar9;
  FResampledPatchOutput *this_05;
  FAudioBusKey FVar10;
  float fVar11;
  FAudioBusKey local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  TSharedRef<Audio::FPatchOutput,1> local_a8;
  FString local_98;
  TSharedPtr<Audio::FPatchOutput,1> local_88;
  TSharedRef<Audio::FPatchOutput,1> local_78;
  FPatchInput local_68;
  FStringFormatArg local_50;
  
  this_01 = *(TSharedPtr<FAudioBusProxy,1> **)&(this->AudioBusAsset).field_0x8;
  if (this_01->Object != (FAudioBusProxy *)0x0) {
    if (this_01->Object->NumChannels < 1) {
      if (2 < (byte)LogMetaSound._0_1_) {
        TSharedPtr<FAudioBusProxy,1>::operator->(this_01);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<2>::CreatePatchOutput(void)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        return;
      }
    }
    else {
      this_02 = FAudioDeviceManager::Get();
      if ((this_02 != (FAudioDeviceManager *)0x0) &&
         (this_03 = FAudioDeviceManager::GetAudioDeviceRaw(this_02,this->AudioDeviceId),
         this_03 != (FAudioDevice *)0x0)) {
        this_04 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_03);
        if (this_04 == (UAudioBusSubsystem *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AudioBusSubsystem",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusReaderNode.cpp"
                             ,0x12f,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_01);
          uVar5 = 8;
          if (pFVar7->NumChannels < 8) {
            uVar5 = pFVar7->NumChannels;
          }
          this->AudioBusChannels = uVar5;
          pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_01);
          local_res8.ObjectId = pFVar7->AudioBusId;
          this->AudioBusId = local_res8.ObjectId;
          local_res8.InstanceId = 0xffffffff;
          FStringFormatArg::FStringFormatArg(&local_50,local_res8.ObjectId);
          local_b8.ArrayNum = 1;
          FVar10.ObjectId = 0;
          FVar10.InstanceId = 0;
          local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_b8.AllocatorInstance,1,&local_b8.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_b8.AllocatorInstance.Data,&local_50,1);
          ::FString::FormatImpl(&local_98,L"_AudioBusReaderNode_AudioBusId_{0}",&local_b8);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
          if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_b8.AllocatorInstance.Data);
          }
          if (local_50.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.StringValue.Data.AllocatorInstance.Data);
          }
          UAudioBusSubsystem::StartAudioBus
                    (this_04,local_res8,&local_98,this->AudioBusChannels,false);
          pTVar8 = UAudioBusSubsystem::AddPatchOutputForSoundAndAudioBus
                             (this_04,&local_88,this->InstanceID,local_res8,this->BlockSizeFrames,
                              this->AudioBusChannels,__real_3f800000);
          this_00 = &this->AudioBusPatchOutput;
          if (this_00 != pTVar8) {
            this_00->Object = pTVar8->Object;
            pTVar8->Object = (FPatchOutput *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->AudioBusPatchOutput).SharedReferenceCount,
                       &pTVar8->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
          Audio::FPatchInput::FPatchInput(&local_68,this_00);
          Audio::FPatchInput::operator=(&this->PatchInput,&local_68);
          Audio::FPatchInput::~FPatchInput(&local_68);
          fVar11 = __real_bf800000;
          if (AudioBusPrivate::EnableResampledAudioBus != 0) {
            if ((((this->AudioMixerSampleRate != this->SampleRate) &&
                 (0.0 < this->AudioMixerSampleRate)) && (0.0 < this->SampleRate)) &&
               (this_00->Object != (FPatchOutput *)0x0)) {
              if (2 < (byte)LogMetaSound._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<2>::CreatePatchOutput(void)___ptr64'
                            ::__l45::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
              }
              pTVar9 = TSharedPtr<Audio::FPatchOutput,1>::ToSharedRef(this_00,&local_78);
              this_05 = ::operator_new(0x98);
              if (this_05 != (FResampledPatchOutput *)0x0) {
                local_a8.Object = pTVar9->Object;
                local_a8.SharedReferenceCount.ReferenceController =
                     (pTVar9->SharedReferenceCount).ReferenceController;
                if (local_a8.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_a8.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                FVar10 = (FAudioBusKey)
                         AudioBusPrivate::FResampledPatchOutput::FResampledPatchOutput
                                   (this_05,this->AudioBusChannels,this->AudioMixerSampleRate,
                                    this->SampleRate,this->BlockSizeFrames,&local_a8);
              }
              local_res8 = FVar10;
              TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
              ::operator=(&this->ResampledPatchOutput,
                          (TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
                           *)&local_res8);
              FVar10 = local_res8;
              if (local_res8 != (FAudioBusKey)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (((FSharedReferencer<1> *)((longlong)local_res8 + 0x90))->
                           ReferenceController);
                pFVar2 = (((TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)FVar10 + 0x78))->
                         AllocatorInstance).Data;
                if (pFVar2 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar2);
                }
                if (*(ForElementType<float_*> *)((longlong)FVar10 + 0x68) !=
                    (ForElementType<float_*>)0x0) {
                  FMemory::Free((void *)*(ForElementType<float_*> *)((longlong)FVar10 + 0x68));
                }
                if (*(ForElementType<float_const_*> *)((longlong)FVar10 + 0x48) !=
                    (ForElementType<float_const_*>)0x0) {
                  FMemory::Free((void *)*(ForElementType<float_const_*> *)((longlong)FVar10 + 0x48))
                  ;
                }
                if (*(ForElementType<float> *)((longlong)FVar10 + 0x28) !=
                    (ForElementType<float>)0x0) {
                  FMemory::Free((void *)*(ForElementType<float> *)((longlong)FVar10 + 0x28));
                }
                ::operator_delete((void *)FVar10,0x98);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_78.SharedReferenceCount.ReferenceController);
              fVar11 = this->AudioMixerSampleRate / this->SampleRate;
            }
          }
          iVar6 = InitialNumBlocks(this);
          iVar6 = NumBlocksToNumSamples(this,iVar6,fVar11);
          Audio::FPatchInput::PushAudio(&this->PatchInput,(float *)0x0,iVar6);
          piVar1 = &(this->InterleavedBuffer).ArrayMax;
          (this->InterleavedBuffer).ArrayNum = 0;
          if ((this->InterleavedBuffer).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,piVar1);
          }
          UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,this->AudioBusChannels * this->BlockSizeFrames,
                     &(this->InterleavedBuffer).AllocatorInstance,
                     &(this->InterleavedBuffer).ArrayNum,piVar1);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// CreatePatchOutput @ 14b38aff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusReaderOperator<4>::CreatePatchOutput(TAudioBusReaderOperator<4> *this)

{
  TSharedPtr<Audio::FPatchOutput,1> *this_00;
  int *piVar1;
  TSharedPtr<FAudioBusProxy,1> *this_01;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FAudioDeviceManager *this_02;
  FAudioDevice *this_03;
  UAudioBusSubsystem *this_04;
  FAudioBusProxy *pFVar7;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar8;
  TSharedRef<Audio::FPatchOutput,1> *pTVar9;
  FResampledPatchOutput *this_05;
  FAudioBusKey FVar10;
  float fVar11;
  FAudioBusKey local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  TSharedRef<Audio::FPatchOutput,1> local_a8;
  FString local_98;
  TSharedPtr<Audio::FPatchOutput,1> local_88;
  TSharedRef<Audio::FPatchOutput,1> local_78;
  FPatchInput local_68;
  FStringFormatArg local_50;
  
  this_01 = *(TSharedPtr<FAudioBusProxy,1> **)&(this->AudioBusAsset).field_0x8;
  if (this_01->Object != (FAudioBusProxy *)0x0) {
    if (this_01->Object->NumChannels < 1) {
      if (2 < (byte)LogMetaSound._0_1_) {
        TSharedPtr<FAudioBusProxy,1>::operator->(this_01);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<4>::CreatePatchOutput(void)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        return;
      }
    }
    else {
      this_02 = FAudioDeviceManager::Get();
      if ((this_02 != (FAudioDeviceManager *)0x0) &&
         (this_03 = FAudioDeviceManager::GetAudioDeviceRaw(this_02,this->AudioDeviceId),
         this_03 != (FAudioDevice *)0x0)) {
        this_04 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_03);
        if (this_04 == (UAudioBusSubsystem *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AudioBusSubsystem",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusReaderNode.cpp"
                             ,0x12f,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_01);
          uVar5 = 8;
          if (pFVar7->NumChannels < 8) {
            uVar5 = pFVar7->NumChannels;
          }
          this->AudioBusChannels = uVar5;
          pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_01);
          local_res8.ObjectId = pFVar7->AudioBusId;
          this->AudioBusId = local_res8.ObjectId;
          local_res8.InstanceId = 0xffffffff;
          FStringFormatArg::FStringFormatArg(&local_50,local_res8.ObjectId);
          local_b8.ArrayNum = 1;
          FVar10.ObjectId = 0;
          FVar10.InstanceId = 0;
          local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_b8.AllocatorInstance,1,&local_b8.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_b8.AllocatorInstance.Data,&local_50,1);
          ::FString::FormatImpl(&local_98,L"_AudioBusReaderNode_AudioBusId_{0}",&local_b8);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
          if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_b8.AllocatorInstance.Data);
          }
          if (local_50.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.StringValue.Data.AllocatorInstance.Data);
          }
          UAudioBusSubsystem::StartAudioBus
                    (this_04,local_res8,&local_98,this->AudioBusChannels,false);
          pTVar8 = UAudioBusSubsystem::AddPatchOutputForSoundAndAudioBus
                             (this_04,&local_88,this->InstanceID,local_res8,this->BlockSizeFrames,
                              this->AudioBusChannels,__real_3f800000);
          this_00 = &this->AudioBusPatchOutput;
          if (this_00 != pTVar8) {
            this_00->Object = pTVar8->Object;
            pTVar8->Object = (FPatchOutput *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->AudioBusPatchOutput).SharedReferenceCount,
                       &pTVar8->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
          Audio::FPatchInput::FPatchInput(&local_68,this_00);
          Audio::FPatchInput::operator=(&this->PatchInput,&local_68);
          Audio::FPatchInput::~FPatchInput(&local_68);
          fVar11 = __real_bf800000;
          if (AudioBusPrivate::EnableResampledAudioBus != 0) {
            if ((((this->AudioMixerSampleRate != this->SampleRate) &&
                 (0.0 < this->AudioMixerSampleRate)) && (0.0 < this->SampleRate)) &&
               (this_00->Object != (FPatchOutput *)0x0)) {
              if (2 < (byte)LogMetaSound._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<4>::CreatePatchOutput(void)___ptr64'
                            ::__l45::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
              }
              pTVar9 = TSharedPtr<Audio::FPatchOutput,1>::ToSharedRef(this_00,&local_78);
              this_05 = ::operator_new(0x98);
              if (this_05 != (FResampledPatchOutput *)0x0) {
                local_a8.Object = pTVar9->Object;
                local_a8.SharedReferenceCount.ReferenceController =
                     (pTVar9->SharedReferenceCount).ReferenceController;
                if (local_a8.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_a8.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                FVar10 = (FAudioBusKey)
                         AudioBusPrivate::FResampledPatchOutput::FResampledPatchOutput
                                   (this_05,this->AudioBusChannels,this->AudioMixerSampleRate,
                                    this->SampleRate,this->BlockSizeFrames,&local_a8);
              }
              local_res8 = FVar10;
              TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
              ::operator=(&this->ResampledPatchOutput,
                          (TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
                           *)&local_res8);
              FVar10 = local_res8;
              if (local_res8 != (FAudioBusKey)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (((FSharedReferencer<1> *)((longlong)local_res8 + 0x90))->
                           ReferenceController);
                pFVar2 = (((TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)FVar10 + 0x78))->
                         AllocatorInstance).Data;
                if (pFVar2 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar2);
                }
                if (*(ForElementType<float_*> *)((longlong)FVar10 + 0x68) !=
                    (ForElementType<float_*>)0x0) {
                  FMemory::Free((void *)*(ForElementType<float_*> *)((longlong)FVar10 + 0x68));
                }
                if (*(ForElementType<float_const_*> *)((longlong)FVar10 + 0x48) !=
                    (ForElementType<float_const_*>)0x0) {
                  FMemory::Free((void *)*(ForElementType<float_const_*> *)((longlong)FVar10 + 0x48))
                  ;
                }
                if (*(ForElementType<float> *)((longlong)FVar10 + 0x28) !=
                    (ForElementType<float>)0x0) {
                  FMemory::Free((void *)*(ForElementType<float> *)((longlong)FVar10 + 0x28));
                }
                ::operator_delete((void *)FVar10,0x98);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_78.SharedReferenceCount.ReferenceController);
              fVar11 = this->AudioMixerSampleRate / this->SampleRate;
            }
          }
          iVar6 = InitialNumBlocks(this);
          iVar6 = NumBlocksToNumSamples(this,iVar6,fVar11);
          Audio::FPatchInput::PushAudio(&this->PatchInput,(float *)0x0,iVar6);
          piVar1 = &(this->InterleavedBuffer).ArrayMax;
          (this->InterleavedBuffer).ArrayNum = 0;
          if ((this->InterleavedBuffer).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,piVar1);
          }
          UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,this->AudioBusChannels * this->BlockSizeFrames,
                     &(this->InterleavedBuffer).AllocatorInstance,
                     &(this->InterleavedBuffer).ArrayNum,piVar1);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// CreatePatchOutput @ 14b38b460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusReaderOperator<6>::CreatePatchOutput(TAudioBusReaderOperator<6> *this)

{
  TSharedPtr<Audio::FPatchOutput,1> *this_00;
  int *piVar1;
  TSharedPtr<FAudioBusProxy,1> *this_01;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FAudioDeviceManager *this_02;
  FAudioDevice *this_03;
  UAudioBusSubsystem *this_04;
  FAudioBusProxy *pFVar7;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar8;
  TSharedRef<Audio::FPatchOutput,1> *pTVar9;
  FResampledPatchOutput *this_05;
  FAudioBusKey FVar10;
  float fVar11;
  FAudioBusKey local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  TSharedRef<Audio::FPatchOutput,1> local_a8;
  FString local_98;
  TSharedPtr<Audio::FPatchOutput,1> local_88;
  TSharedRef<Audio::FPatchOutput,1> local_78;
  FPatchInput local_68;
  FStringFormatArg local_50;
  
  this_01 = *(TSharedPtr<FAudioBusProxy,1> **)&(this->AudioBusAsset).field_0x8;
  if (this_01->Object != (FAudioBusProxy *)0x0) {
    if (this_01->Object->NumChannels < 1) {
      if (2 < (byte)LogMetaSound._0_1_) {
        TSharedPtr<FAudioBusProxy,1>::operator->(this_01);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<6>::CreatePatchOutput(void)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        return;
      }
    }
    else {
      this_02 = FAudioDeviceManager::Get();
      if ((this_02 != (FAudioDeviceManager *)0x0) &&
         (this_03 = FAudioDeviceManager::GetAudioDeviceRaw(this_02,this->AudioDeviceId),
         this_03 != (FAudioDevice *)0x0)) {
        this_04 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_03);
        if (this_04 == (UAudioBusSubsystem *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AudioBusSubsystem",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusReaderNode.cpp"
                             ,0x12f,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_01);
          uVar5 = 8;
          if (pFVar7->NumChannels < 8) {
            uVar5 = pFVar7->NumChannels;
          }
          this->AudioBusChannels = uVar5;
          pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_01);
          local_res8.ObjectId = pFVar7->AudioBusId;
          this->AudioBusId = local_res8.ObjectId;
          local_res8.InstanceId = 0xffffffff;
          FStringFormatArg::FStringFormatArg(&local_50,local_res8.ObjectId);
          local_b8.ArrayNum = 1;
          FVar10.ObjectId = 0;
          FVar10.InstanceId = 0;
          local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_b8.AllocatorInstance,1,&local_b8.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_b8.AllocatorInstance.Data,&local_50,1);
          ::FString::FormatImpl(&local_98,L"_AudioBusReaderNode_AudioBusId_{0}",&local_b8);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
          if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_b8.AllocatorInstance.Data);
          }
          if (local_50.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.StringValue.Data.AllocatorInstance.Data);
          }
          UAudioBusSubsystem::StartAudioBus
                    (this_04,local_res8,&local_98,this->AudioBusChannels,false);
          pTVar8 = UAudioBusSubsystem::AddPatchOutputForSoundAndAudioBus
                             (this_04,&local_88,this->InstanceID,local_res8,this->BlockSizeFrames,
                              this->AudioBusChannels,__real_3f800000);
          this_00 = &this->AudioBusPatchOutput;
          if (this_00 != pTVar8) {
            this_00->Object = pTVar8->Object;
            pTVar8->Object = (FPatchOutput *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->AudioBusPatchOutput).SharedReferenceCount,
                       &pTVar8->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
          Audio::FPatchInput::FPatchInput(&local_68,this_00);
          Audio::FPatchInput::operator=(&this->PatchInput,&local_68);
          Audio::FPatchInput::~FPatchInput(&local_68);
          fVar11 = __real_bf800000;
          if (AudioBusPrivate::EnableResampledAudioBus != 0) {
            if ((((this->AudioMixerSampleRate != this->SampleRate) &&
                 (0.0 < this->AudioMixerSampleRate)) && (0.0 < this->SampleRate)) &&
               (this_00->Object != (FPatchOutput *)0x0)) {
              if (2 < (byte)LogMetaSound._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<6>::CreatePatchOutput(void)___ptr64'
                            ::__l45::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
              }
              pTVar9 = TSharedPtr<Audio::FPatchOutput,1>::ToSharedRef(this_00,&local_78);
              this_05 = ::operator_new(0x98);
              if (this_05 != (FResampledPatchOutput *)0x0) {
                local_a8.Object = pTVar9->Object;
                local_a8.SharedReferenceCount.ReferenceController =
                     (pTVar9->SharedReferenceCount).ReferenceController;
                if (local_a8.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_a8.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                FVar10 = (FAudioBusKey)
                         AudioBusPrivate::FResampledPatchOutput::FResampledPatchOutput
                                   (this_05,this->AudioBusChannels,this->AudioMixerSampleRate,
                                    this->SampleRate,this->BlockSizeFrames,&local_a8);
              }
              local_res8 = FVar10;
              TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
              ::operator=(&this->ResampledPatchOutput,
                          (TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
                           *)&local_res8);
              FVar10 = local_res8;
              if (local_res8 != (FAudioBusKey)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (((FSharedReferencer<1> *)((longlong)local_res8 + 0x90))->
                           ReferenceController);
                pFVar2 = (((TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)FVar10 + 0x78))->
                         AllocatorInstance).Data;
                if (pFVar2 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar2);
                }
                if (*(ForElementType<float_*> *)((longlong)FVar10 + 0x68) !=
                    (ForElementType<float_*>)0x0) {
                  FMemory::Free((void *)*(ForElementType<float_*> *)((longlong)FVar10 + 0x68));
                }
                if (*(ForElementType<float_const_*> *)((longlong)FVar10 + 0x48) !=
                    (ForElementType<float_const_*>)0x0) {
                  FMemory::Free((void *)*(ForElementType<float_const_*> *)((longlong)FVar10 + 0x48))
                  ;
                }
                if (*(ForElementType<float> *)((longlong)FVar10 + 0x28) !=
                    (ForElementType<float>)0x0) {
                  FMemory::Free((void *)*(ForElementType<float> *)((longlong)FVar10 + 0x28));
                }
                ::operator_delete((void *)FVar10,0x98);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_78.SharedReferenceCount.ReferenceController);
              fVar11 = this->AudioMixerSampleRate / this->SampleRate;
            }
          }
          iVar6 = InitialNumBlocks(this);
          iVar6 = NumBlocksToNumSamples(this,iVar6,fVar11);
          Audio::FPatchInput::PushAudio(&this->PatchInput,(float *)0x0,iVar6);
          piVar1 = &(this->InterleavedBuffer).ArrayMax;
          (this->InterleavedBuffer).ArrayNum = 0;
          if ((this->InterleavedBuffer).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,piVar1);
          }
          UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,this->AudioBusChannels * this->BlockSizeFrames,
                     &(this->InterleavedBuffer).AllocatorInstance,
                     &(this->InterleavedBuffer).ArrayNum,piVar1);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// CreatePatchOutput @ 14b38b8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusReaderOperator<8>::CreatePatchOutput(TAudioBusReaderOperator<8> *this)

{
  TSharedPtr<Audio::FPatchOutput,1> *this_00;
  int *piVar1;
  TSharedPtr<FAudioBusProxy,1> *this_01;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FAudioDeviceManager *this_02;
  FAudioDevice *this_03;
  UAudioBusSubsystem *this_04;
  FAudioBusProxy *pFVar7;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar8;
  TSharedRef<Audio::FPatchOutput,1> *pTVar9;
  FResampledPatchOutput *this_05;
  FAudioBusKey FVar10;
  float fVar11;
  FAudioBusKey local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  TSharedRef<Audio::FPatchOutput,1> local_a8;
  FString local_98;
  TSharedPtr<Audio::FPatchOutput,1> local_88;
  TSharedRef<Audio::FPatchOutput,1> local_78;
  FPatchInput local_68;
  FStringFormatArg local_50;
  
  this_01 = *(TSharedPtr<FAudioBusProxy,1> **)&(this->AudioBusAsset).field_0x8;
  if (this_01->Object != (FAudioBusProxy *)0x0) {
    if (this_01->Object->NumChannels < 1) {
      if (2 < (byte)LogMetaSound._0_1_) {
        TSharedPtr<FAudioBusProxy,1>::operator->(this_01);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<8>::CreatePatchOutput(void)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        return;
      }
    }
    else {
      this_02 = FAudioDeviceManager::Get();
      if ((this_02 != (FAudioDeviceManager *)0x0) &&
         (this_03 = FAudioDeviceManager::GetAudioDeviceRaw(this_02,this->AudioDeviceId),
         this_03 != (FAudioDevice *)0x0)) {
        this_04 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_03);
        if (this_04 == (UAudioBusSubsystem *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AudioBusSubsystem",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusReaderNode.cpp"
                             ,0x12f,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_01);
          uVar5 = 8;
          if (pFVar7->NumChannels < 8) {
            uVar5 = pFVar7->NumChannels;
          }
          this->AudioBusChannels = uVar5;
          pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_01);
          local_res8.ObjectId = pFVar7->AudioBusId;
          this->AudioBusId = local_res8.ObjectId;
          local_res8.InstanceId = 0xffffffff;
          FStringFormatArg::FStringFormatArg(&local_50,local_res8.ObjectId);
          local_b8.ArrayNum = 1;
          FVar10.ObjectId = 0;
          FVar10.InstanceId = 0;
          local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_b8.AllocatorInstance,1,&local_b8.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_b8.AllocatorInstance.Data,&local_50,1);
          ::FString::FormatImpl(&local_98,L"_AudioBusReaderNode_AudioBusId_{0}",&local_b8);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
          if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_b8.AllocatorInstance.Data);
          }
          if (local_50.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.StringValue.Data.AllocatorInstance.Data);
          }
          UAudioBusSubsystem::StartAudioBus
                    (this_04,local_res8,&local_98,this->AudioBusChannels,false);
          pTVar8 = UAudioBusSubsystem::AddPatchOutputForSoundAndAudioBus
                             (this_04,&local_88,this->InstanceID,local_res8,this->BlockSizeFrames,
                              this->AudioBusChannels,__real_3f800000);
          this_00 = &this->AudioBusPatchOutput;
          if (this_00 != pTVar8) {
            this_00->Object = pTVar8->Object;
            pTVar8->Object = (FPatchOutput *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->AudioBusPatchOutput).SharedReferenceCount,
                       &pTVar8->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
          Audio::FPatchInput::FPatchInput(&local_68,this_00);
          Audio::FPatchInput::operator=(&this->PatchInput,&local_68);
          Audio::FPatchInput::~FPatchInput(&local_68);
          fVar11 = __real_bf800000;
          if (AudioBusPrivate::EnableResampledAudioBus != 0) {
            if ((((this->AudioMixerSampleRate != this->SampleRate) &&
                 (0.0 < this->AudioMixerSampleRate)) && (0.0 < this->SampleRate)) &&
               (this_00->Object != (FPatchOutput *)0x0)) {
              if (2 < (byte)LogMetaSound._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<8>::CreatePatchOutput(void)___ptr64'
                            ::__l45::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
              }
              pTVar9 = TSharedPtr<Audio::FPatchOutput,1>::ToSharedRef(this_00,&local_78);
              this_05 = ::operator_new(0x98);
              if (this_05 != (FResampledPatchOutput *)0x0) {
                local_a8.Object = pTVar9->Object;
                local_a8.SharedReferenceCount.ReferenceController =
                     (pTVar9->SharedReferenceCount).ReferenceController;
                if (local_a8.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_a8.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                FVar10 = (FAudioBusKey)
                         AudioBusPrivate::FResampledPatchOutput::FResampledPatchOutput
                                   (this_05,this->AudioBusChannels,this->AudioMixerSampleRate,
                                    this->SampleRate,this->BlockSizeFrames,&local_a8);
              }
              local_res8 = FVar10;
              TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
              ::operator=(&this->ResampledPatchOutput,
                          (TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
                           *)&local_res8);
              FVar10 = local_res8;
              if (local_res8 != (FAudioBusKey)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (((FSharedReferencer<1> *)((longlong)local_res8 + 0x90))->
                           ReferenceController);
                pFVar2 = (((TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)FVar10 + 0x78))->
                         AllocatorInstance).Data;
                if (pFVar2 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar2);
                }
                if (*(ForElementType<float_*> *)((longlong)FVar10 + 0x68) !=
                    (ForElementType<float_*>)0x0) {
                  FMemory::Free((void *)*(ForElementType<float_*> *)((longlong)FVar10 + 0x68));
                }
                if (*(ForElementType<float_const_*> *)((longlong)FVar10 + 0x48) !=
                    (ForElementType<float_const_*>)0x0) {
                  FMemory::Free((void *)*(ForElementType<float_const_*> *)((longlong)FVar10 + 0x48))
                  ;
                }
                if (*(ForElementType<float> *)((longlong)FVar10 + 0x28) !=
                    (ForElementType<float>)0x0) {
                  FMemory::Free((void *)*(ForElementType<float> *)((longlong)FVar10 + 0x28));
                }
                ::operator_delete((void *)FVar10,0x98);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_78.SharedReferenceCount.ReferenceController);
              fVar11 = this->AudioMixerSampleRate / this->SampleRate;
            }
          }
          iVar6 = InitialNumBlocks(this);
          iVar6 = NumBlocksToNumSamples(this,iVar6,fVar11);
          Audio::FPatchInput::PushAudio(&this->PatchInput,(float *)0x0,iVar6);
          piVar1 = &(this->InterleavedBuffer).ArrayMax;
          (this->InterleavedBuffer).ArrayNum = 0;
          if ((this->InterleavedBuffer).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,piVar1);
          }
          UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,this->AudioBusChannels * this->BlockSizeFrames,
                     &(this->InterleavedBuffer).AllocatorInstance,
                     &(this->InterleavedBuffer).ArrayNum,piVar1);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// Execute @ 14b399bc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TAudioBusReaderOperator<1>::Execute(TAudioBusReaderOperator<1> *this)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FResampledPatchOutput *this_00;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FPatchOutput *this_01;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78 [3];
  
  plVar2 = *(longlong **)&(this->AudioBusAsset).field_0x8;
  lVar3 = *plVar2;
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x14))) {
    if (*(uint *)(lVar3 + 0x10) != this->AudioBusId) {
      (this->InterleavedBuffer).ArrayNum = 0;
      if ((this->InterleavedBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
                   &(this->InterleavedBuffer).ArrayMax);
      }
    }
    if ((((this->InterleavedBuffer).ArrayNum == 0) && (0.0 < this->SampleRate)) && (*plVar2 != 0)) {
      CreatePatchOutput(this);
    }
    iVar17 = (this->InterleavedBuffer).ArrayNum;
    if (iVar17 == 0) {
      if (((this->AudioOutputs).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 8);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
    }
    else {
      iVar1 = this->BlockSizeFrames;
      iVar14 = iVar1 * this->AudioBusChannels;
      if (iVar17 < iVar14) {
        TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized
                  (&this->InterleavedBuffer,iVar14,Default);
      }
      this_00 = (this->ResampledPatchOutput).Ptr;
      if (this_00 == (FResampledPatchOutput *)0x0) {
        this_01 = TSharedPtr<Audio::FPatchOutput,1>::operator->(&this->AudioBusPatchOutput);
        uVar9 = Audio::FPatchOutput::PopAudio
                          (this_01,(float *)(this->InterleavedBuffer).AllocatorInstance.Data,iVar14,
                           false);
      }
      else {
        uVar9 = AudioBusPrivate::FResampledPatchOutput::PopAudio
                          (this_00,(float *)(this->InterleavedBuffer).AllocatorInstance.Data,iVar14,
                           false);
      }
      uVar10 = this->AudioBusChannels;
      uVar13 = uVar10;
      if (1 < uVar10) {
        uVar13 = 1;
      }
      uVar16 = 0;
      if (0 < (int)uVar9) {
        uVar16 = (ulonglong)uVar9;
      }
      uVar11 = (longlong)iVar1;
      if ((longlong)(uVar16 / uVar10) < (longlong)iVar1) {
        uVar11 = uVar16 / uVar10;
      }
      iVar17 = 0;
      if (0 < (longlong)uVar11) {
        iVar17 = (int)uVar11;
      }
      if (0 < iVar17) {
        uVar9 = 0;
        if (uVar13 != 0) {
          do {
            uVar10 = 0;
            if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar2 = *(longlong **)
                      ((this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 8
                      );
            if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                          ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            }
            lVar3 = *plVar2;
            iVar18 = 0;
            lVar15 = 0;
            if (0 < (longlong)iVar17) {
              do {
                uVar12 = iVar18 * this->AudioBusChannels + uVar9;
                uVar10 = 0;
                if ((int)uVar12 < (this->InterleavedBuffer).ArrayNum) {
                  uVar10 = ~uVar12 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar18 = iVar18 + 1;
                *(undefined4 *)(lVar3 + lVar15 * 4) =
                     *(undefined4 *)
                      ((this->InterleavedBuffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 4)
                ;
                lVar15 = lVar15 + 1;
              } while (lVar15 < iVar17);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar13);
        }
      }
      if ((int)uVar16 < iVar14) {
        if (this->bWasUnderrunReported == false) {
          if (2 < (byte)LogMetaSound._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<1>::Execute(void)___ptr64'
                        ::__l41::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          this->bWasUnderrunReported = true;
        }
        fVar7 = __real_3f800000;
        uVar9 = 0;
        if (iVar17 < 1) {
          if (uVar13 != 0) {
            do {
              uVar10 = 0;
              if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
                uVar10 = ~uVar9 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              puVar4 = *(undefined8 **)
                        ((this->AudioOutputs).AllocatorInstance.Data +
                        (longlong)(int)uVar9 * 0x20 + 8);
              iVar17 = *(int *)(puVar4 + 1);
              if (0 < iVar17) {
                memset((void *)*puVar4,0,(longlong)iVar17 << 2);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar13);
          }
        }
        else if (uVar13 != 0) {
          do {
            uVar10 = 0;
            if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar2 = *(longlong **)
                      ((this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 8
                      );
            if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                          ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            }
            pfVar5 = (float *)*plVar2;
            local_78[0]._12_4_ = uStack_7c;
            local_78[0].ArrayNum = iVar17;
            local_78[0].DataPtr = pfVar5;
            Audio::ArrayFade(local_78,fVar7,0.0);
            if (0 < iVar1 - iVar17) {
              memset(pfVar5 + iVar17,0,(longlong)(iVar1 - iVar17) << 2);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar13);
        }
      }
      else {
        this->bWasUnderrunReported = false;
      }
      while (uVar13 == 0) {
        if (((this->AudioOutputs).ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 8);
        iVar17 = *(int *)(puVar4 + 1);
        if (0 < iVar17) {
          memset((void *)*puVar4,0,(longlong)iVar17 << 2);
        }
        uVar13 = 1;
      }
    }
  }
  return;
}

// Execute @ 14b39a170

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TAudioBusReaderOperator<2>::Execute(TAudioBusReaderOperator<2> *this)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FResampledPatchOutput *this_00;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FPatchOutput *this_01;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78 [3];
  
  plVar2 = *(longlong **)&(this->AudioBusAsset).field_0x8;
  lVar3 = *plVar2;
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x14))) {
    if (*(uint *)(lVar3 + 0x10) != this->AudioBusId) {
      (this->InterleavedBuffer).ArrayNum = 0;
      if ((this->InterleavedBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
                   &(this->InterleavedBuffer).ArrayMax);
      }
    }
    if ((((this->InterleavedBuffer).ArrayNum == 0) && (0.0 < this->SampleRate)) && (*plVar2 != 0)) {
      CreatePatchOutput(this);
    }
    iVar17 = (this->InterleavedBuffer).ArrayNum;
    if (iVar17 == 0) {
      if (((this->AudioOutputs).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 8);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0x28);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
    }
    else {
      iVar1 = this->BlockSizeFrames;
      iVar14 = iVar1 * this->AudioBusChannels;
      if (iVar17 < iVar14) {
        TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized
                  (&this->InterleavedBuffer,iVar14,Default);
      }
      this_00 = (this->ResampledPatchOutput).Ptr;
      if (this_00 == (FResampledPatchOutput *)0x0) {
        this_01 = TSharedPtr<Audio::FPatchOutput,1>::operator->(&this->AudioBusPatchOutput);
        uVar9 = Audio::FPatchOutput::PopAudio
                          (this_01,(float *)(this->InterleavedBuffer).AllocatorInstance.Data,iVar14,
                           false);
      }
      else {
        uVar9 = AudioBusPrivate::FResampledPatchOutput::PopAudio
                          (this_00,(float *)(this->InterleavedBuffer).AllocatorInstance.Data,iVar14,
                           false);
      }
      uVar10 = this->AudioBusChannels;
      uVar13 = uVar10;
      if (2 < uVar10) {
        uVar13 = 2;
      }
      uVar16 = 0;
      if (0 < (int)uVar9) {
        uVar16 = (ulonglong)uVar9;
      }
      uVar11 = (longlong)iVar1;
      if ((longlong)(uVar16 / uVar10) < (longlong)iVar1) {
        uVar11 = uVar16 / uVar10;
      }
      iVar17 = 0;
      if (0 < (longlong)uVar11) {
        iVar17 = (int)uVar11;
      }
      if (0 < iVar17) {
        uVar9 = 0;
        if (uVar13 != 0) {
          do {
            uVar10 = 0;
            if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar2 = *(longlong **)
                      ((this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 8
                      );
            if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                          ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            }
            lVar3 = *plVar2;
            iVar18 = 0;
            lVar15 = 0;
            if (0 < (longlong)iVar17) {
              do {
                uVar12 = iVar18 * this->AudioBusChannels + uVar9;
                uVar10 = 0;
                if ((int)uVar12 < (this->InterleavedBuffer).ArrayNum) {
                  uVar10 = ~uVar12 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar18 = iVar18 + 1;
                *(undefined4 *)(lVar3 + lVar15 * 4) =
                     *(undefined4 *)
                      ((this->InterleavedBuffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 4)
                ;
                lVar15 = lVar15 + 1;
              } while (lVar15 < iVar17);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar13);
        }
      }
      if ((int)uVar16 < iVar14) {
        if (this->bWasUnderrunReported == false) {
          if (2 < (byte)LogMetaSound._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<2>::Execute(void)___ptr64'
                        ::__l41::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          this->bWasUnderrunReported = true;
        }
        fVar7 = __real_3f800000;
        uVar9 = 0;
        if (iVar17 < 1) {
          if (uVar13 != 0) {
            do {
              uVar10 = 0;
              if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
                uVar10 = ~uVar9 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              puVar4 = *(undefined8 **)
                        ((this->AudioOutputs).AllocatorInstance.Data +
                        (longlong)(int)uVar9 * 0x20 + 8);
              iVar17 = *(int *)(puVar4 + 1);
              if (0 < iVar17) {
                memset((void *)*puVar4,0,(longlong)iVar17 << 2);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar13);
          }
        }
        else if (uVar13 != 0) {
          do {
            uVar10 = 0;
            if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar2 = *(longlong **)
                      ((this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 8
                      );
            if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                          ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            }
            pfVar5 = (float *)*plVar2;
            local_78[0]._12_4_ = uStack_7c;
            local_78[0].ArrayNum = iVar17;
            local_78[0].DataPtr = pfVar5;
            Audio::ArrayFade(local_78,fVar7,0.0);
            if (0 < iVar1 - iVar17) {
              memset(pfVar5 + iVar17,0,(longlong)(iVar1 - iVar17) << 2);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar13);
        }
      }
      else {
        this->bWasUnderrunReported = false;
      }
      for (; uVar13 < 2; uVar13 = uVar13 + 1) {
        uVar9 = 0;
        if ((int)uVar13 < (this->AudioOutputs).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar4 = *(undefined8 **)
                  ((this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x20 + 8);
        iVar17 = *(int *)(puVar4 + 1);
        if (0 < iVar17) {
          memset((void *)*puVar4,0,(longlong)iVar17 << 2);
        }
      }
    }
  }
  return;
}

// Execute @ 14b39a790

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TAudioBusReaderOperator<4>::Execute(TAudioBusReaderOperator<4> *this)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FResampledPatchOutput *this_00;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FPatchOutput *this_01;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78 [3];
  
  plVar2 = *(longlong **)&(this->AudioBusAsset).field_0x8;
  lVar3 = *plVar2;
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x14))) {
    if (*(uint *)(lVar3 + 0x10) != this->AudioBusId) {
      (this->InterleavedBuffer).ArrayNum = 0;
      if ((this->InterleavedBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
                   &(this->InterleavedBuffer).ArrayMax);
      }
    }
    if ((((this->InterleavedBuffer).ArrayNum == 0) && (0.0 < this->SampleRate)) && (*plVar2 != 0)) {
      CreatePatchOutput(this);
    }
    iVar17 = (this->InterleavedBuffer).ArrayNum;
    if (iVar17 == 0) {
      if (((this->AudioOutputs).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 8);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0x28);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0x48);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 4) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0x68);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
    }
    else {
      iVar1 = this->BlockSizeFrames;
      iVar14 = iVar1 * this->AudioBusChannels;
      if (iVar17 < iVar14) {
        TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized
                  (&this->InterleavedBuffer,iVar14,Default);
      }
      this_00 = (this->ResampledPatchOutput).Ptr;
      if (this_00 == (FResampledPatchOutput *)0x0) {
        this_01 = TSharedPtr<Audio::FPatchOutput,1>::operator->(&this->AudioBusPatchOutput);
        uVar9 = Audio::FPatchOutput::PopAudio
                          (this_01,(float *)(this->InterleavedBuffer).AllocatorInstance.Data,iVar14,
                           false);
      }
      else {
        uVar9 = AudioBusPrivate::FResampledPatchOutput::PopAudio
                          (this_00,(float *)(this->InterleavedBuffer).AllocatorInstance.Data,iVar14,
                           false);
      }
      uVar10 = this->AudioBusChannels;
      uVar13 = uVar10;
      if (4 < uVar10) {
        uVar13 = 4;
      }
      uVar16 = 0;
      if (0 < (int)uVar9) {
        uVar16 = (ulonglong)uVar9;
      }
      uVar11 = (longlong)iVar1;
      if ((longlong)(uVar16 / uVar10) < (longlong)iVar1) {
        uVar11 = uVar16 / uVar10;
      }
      iVar17 = 0;
      if (0 < (longlong)uVar11) {
        iVar17 = (int)uVar11;
      }
      if (0 < iVar17) {
        uVar9 = 0;
        if (uVar13 != 0) {
          do {
            uVar10 = 0;
            if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar2 = *(longlong **)
                      ((this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 8
                      );
            if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                          ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            }
            lVar3 = *plVar2;
            iVar18 = 0;
            lVar15 = 0;
            if (0 < (longlong)iVar17) {
              do {
                uVar12 = iVar18 * this->AudioBusChannels + uVar9;
                uVar10 = 0;
                if ((int)uVar12 < (this->InterleavedBuffer).ArrayNum) {
                  uVar10 = ~uVar12 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar18 = iVar18 + 1;
                *(undefined4 *)(lVar3 + lVar15 * 4) =
                     *(undefined4 *)
                      ((this->InterleavedBuffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 4)
                ;
                lVar15 = lVar15 + 1;
              } while (lVar15 < iVar17);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar13);
        }
      }
      if ((int)uVar16 < iVar14) {
        if (this->bWasUnderrunReported == false) {
          if (2 < (byte)LogMetaSound._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<4>::Execute(void)___ptr64'
                        ::__l41::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          this->bWasUnderrunReported = true;
        }
        fVar7 = __real_3f800000;
        uVar9 = 0;
        if (iVar17 < 1) {
          if (uVar13 != 0) {
            do {
              uVar10 = 0;
              if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
                uVar10 = ~uVar9 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              puVar4 = *(undefined8 **)
                        ((this->AudioOutputs).AllocatorInstance.Data +
                        (longlong)(int)uVar9 * 0x20 + 8);
              iVar17 = *(int *)(puVar4 + 1);
              if (0 < iVar17) {
                memset((void *)*puVar4,0,(longlong)iVar17 << 2);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar13);
          }
        }
        else if (uVar13 != 0) {
          do {
            uVar10 = 0;
            if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar2 = *(longlong **)
                      ((this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 8
                      );
            if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                          ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            }
            pfVar5 = (float *)*plVar2;
            local_78[0]._12_4_ = uStack_7c;
            local_78[0].ArrayNum = iVar17;
            local_78[0].DataPtr = pfVar5;
            Audio::ArrayFade(local_78,fVar7,0.0);
            if (0 < iVar1 - iVar17) {
              memset(pfVar5 + iVar17,0,(longlong)(iVar1 - iVar17) << 2);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar13);
        }
      }
      else {
        this->bWasUnderrunReported = false;
      }
      for (; uVar13 < 4; uVar13 = uVar13 + 1) {
        uVar9 = 0;
        if ((int)uVar13 < (this->AudioOutputs).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar4 = *(undefined8 **)
                  ((this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x20 + 8);
        iVar17 = *(int *)(puVar4 + 1);
        if (0 < iVar17) {
          memset((void *)*puVar4,0,(longlong)iVar17 << 2);
        }
      }
    }
  }
  return;
}

// Execute @ 14b39ae70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TAudioBusReaderOperator<6>::Execute(TAudioBusReaderOperator<6> *this)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FResampledPatchOutput *this_00;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FPatchOutput *this_01;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78 [3];
  
  plVar2 = *(longlong **)&(this->AudioBusAsset).field_0x8;
  lVar3 = *plVar2;
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x14))) {
    if (*(uint *)(lVar3 + 0x10) != this->AudioBusId) {
      (this->InterleavedBuffer).ArrayNum = 0;
      if ((this->InterleavedBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
                   &(this->InterleavedBuffer).ArrayMax);
      }
    }
    if ((((this->InterleavedBuffer).ArrayNum == 0) && (0.0 < this->SampleRate)) && (*plVar2 != 0)) {
      CreatePatchOutput(this);
    }
    iVar17 = (this->InterleavedBuffer).ArrayNum;
    if (iVar17 == 0) {
      if (((this->AudioOutputs).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 8);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0x28);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0x48);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 4) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0x68);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 5) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0x88);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 6) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0xa8);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
    }
    else {
      iVar1 = this->BlockSizeFrames;
      iVar14 = iVar1 * this->AudioBusChannels;
      if (iVar17 < iVar14) {
        TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized
                  (&this->InterleavedBuffer,iVar14,Default);
      }
      this_00 = (this->ResampledPatchOutput).Ptr;
      if (this_00 == (FResampledPatchOutput *)0x0) {
        this_01 = TSharedPtr<Audio::FPatchOutput,1>::operator->(&this->AudioBusPatchOutput);
        uVar9 = Audio::FPatchOutput::PopAudio
                          (this_01,(float *)(this->InterleavedBuffer).AllocatorInstance.Data,iVar14,
                           false);
      }
      else {
        uVar9 = AudioBusPrivate::FResampledPatchOutput::PopAudio
                          (this_00,(float *)(this->InterleavedBuffer).AllocatorInstance.Data,iVar14,
                           false);
      }
      uVar10 = this->AudioBusChannels;
      uVar13 = uVar10;
      if (6 < uVar10) {
        uVar13 = 6;
      }
      uVar16 = 0;
      if (0 < (int)uVar9) {
        uVar16 = (ulonglong)uVar9;
      }
      uVar11 = (longlong)iVar1;
      if ((longlong)(uVar16 / uVar10) < (longlong)iVar1) {
        uVar11 = uVar16 / uVar10;
      }
      iVar17 = 0;
      if (0 < (longlong)uVar11) {
        iVar17 = (int)uVar11;
      }
      if (0 < iVar17) {
        uVar9 = 0;
        if (uVar13 != 0) {
          do {
            uVar10 = 0;
            if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar2 = *(longlong **)
                      ((this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 8
                      );
            if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                          ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            }
            lVar3 = *plVar2;
            iVar18 = 0;
            lVar15 = 0;
            if (0 < (longlong)iVar17) {
              do {
                uVar12 = iVar18 * this->AudioBusChannels + uVar9;
                uVar10 = 0;
                if ((int)uVar12 < (this->InterleavedBuffer).ArrayNum) {
                  uVar10 = ~uVar12 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar18 = iVar18 + 1;
                *(undefined4 *)(lVar3 + lVar15 * 4) =
                     *(undefined4 *)
                      ((this->InterleavedBuffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 4)
                ;
                lVar15 = lVar15 + 1;
              } while (lVar15 < iVar17);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar13);
        }
      }
      if ((int)uVar16 < iVar14) {
        if (this->bWasUnderrunReported == false) {
          if (2 < (byte)LogMetaSound._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<6>::Execute(void)___ptr64'
                        ::__l41::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          this->bWasUnderrunReported = true;
        }
        fVar7 = __real_3f800000;
        uVar9 = 0;
        if (iVar17 < 1) {
          if (uVar13 != 0) {
            do {
              uVar10 = 0;
              if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
                uVar10 = ~uVar9 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              puVar4 = *(undefined8 **)
                        ((this->AudioOutputs).AllocatorInstance.Data +
                        (longlong)(int)uVar9 * 0x20 + 8);
              iVar17 = *(int *)(puVar4 + 1);
              if (0 < iVar17) {
                memset((void *)*puVar4,0,(longlong)iVar17 << 2);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar13);
          }
        }
        else if (uVar13 != 0) {
          do {
            uVar10 = 0;
            if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar2 = *(longlong **)
                      ((this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 8
                      );
            if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                          ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            }
            pfVar5 = (float *)*plVar2;
            local_78[0]._12_4_ = uStack_7c;
            local_78[0].ArrayNum = iVar17;
            local_78[0].DataPtr = pfVar5;
            Audio::ArrayFade(local_78,fVar7,0.0);
            if (0 < iVar1 - iVar17) {
              memset(pfVar5 + iVar17,0,(longlong)(iVar1 - iVar17) << 2);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar13);
        }
      }
      else {
        this->bWasUnderrunReported = false;
      }
      for (; uVar13 < 6; uVar13 = uVar13 + 1) {
        uVar9 = 0;
        if ((int)uVar13 < (this->AudioOutputs).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar4 = *(undefined8 **)
                  ((this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x20 + 8);
        iVar17 = *(int *)(puVar4 + 1);
        if (0 < iVar17) {
          memset((void *)*puVar4,0,(longlong)iVar17 << 2);
        }
      }
    }
  }
  return;
}

// Execute @ 14b39b600

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TAudioBusReaderOperator<8>::Execute(TAudioBusReaderOperator<8> *this)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FResampledPatchOutput *this_00;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FPatchOutput *this_01;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78 [3];
  
  plVar2 = *(longlong **)&(this->AudioBusAsset).field_0x8;
  lVar3 = *plVar2;
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x14))) {
    if (*(uint *)(lVar3 + 0x10) != this->AudioBusId) {
      (this->InterleavedBuffer).ArrayNum = 0;
      if ((this->InterleavedBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
                   &(this->InterleavedBuffer).ArrayMax);
      }
    }
    if ((((this->InterleavedBuffer).ArrayNum == 0) && (0.0 < this->SampleRate)) && (*plVar2 != 0)) {
      CreatePatchOutput(this);
    }
    iVar17 = (this->InterleavedBuffer).ArrayNum;
    if (iVar17 == 0) {
      if (((this->AudioOutputs).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 8);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0x28);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0x48);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 4) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0x68);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 5) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0x88);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 6) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0xa8);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 7) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 200);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
      if (((this->AudioOutputs).ArrayNum < 8) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar4 = *(undefined8 **)((this->AudioOutputs).AllocatorInstance.Data + 0xe8);
      iVar17 = *(int *)(puVar4 + 1);
      if (0 < iVar17) {
        memset((void *)*puVar4,0,(longlong)iVar17 << 2);
      }
    }
    else {
      iVar1 = this->BlockSizeFrames;
      iVar14 = iVar1 * this->AudioBusChannels;
      if (iVar17 < iVar14) {
        TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized
                  (&this->InterleavedBuffer,iVar14,Default);
      }
      this_00 = (this->ResampledPatchOutput).Ptr;
      if (this_00 == (FResampledPatchOutput *)0x0) {
        this_01 = TSharedPtr<Audio::FPatchOutput,1>::operator->(&this->AudioBusPatchOutput);
        uVar9 = Audio::FPatchOutput::PopAudio
                          (this_01,(float *)(this->InterleavedBuffer).AllocatorInstance.Data,iVar14,
                           false);
      }
      else {
        uVar9 = AudioBusPrivate::FResampledPatchOutput::PopAudio
                          (this_00,(float *)(this->InterleavedBuffer).AllocatorInstance.Data,iVar14,
                           false);
      }
      uVar10 = this->AudioBusChannels;
      uVar13 = uVar10;
      if (8 < uVar10) {
        uVar13 = 8;
      }
      uVar16 = 0;
      if (0 < (int)uVar9) {
        uVar16 = (ulonglong)uVar9;
      }
      uVar11 = (longlong)iVar1;
      if ((longlong)(uVar16 / uVar10) < (longlong)iVar1) {
        uVar11 = uVar16 / uVar10;
      }
      iVar17 = 0;
      if (0 < (longlong)uVar11) {
        iVar17 = (int)uVar11;
      }
      if (0 < iVar17) {
        uVar9 = 0;
        if (uVar13 != 0) {
          do {
            uVar10 = 0;
            if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar2 = *(longlong **)
                      ((this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 8
                      );
            if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                          ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            }
            lVar3 = *plVar2;
            iVar18 = 0;
            lVar15 = 0;
            if (0 < (longlong)iVar17) {
              do {
                uVar12 = iVar18 * this->AudioBusChannels + uVar9;
                uVar10 = 0;
                if ((int)uVar12 < (this->InterleavedBuffer).ArrayNum) {
                  uVar10 = ~uVar12 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar18 = iVar18 + 1;
                *(undefined4 *)(lVar3 + lVar15 * 4) =
                     *(undefined4 *)
                      ((this->InterleavedBuffer).AllocatorInstance.Data + (longlong)(int)uVar12 * 4)
                ;
                lVar15 = lVar15 + 1;
              } while (lVar15 < iVar17);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar13);
        }
      }
      if ((int)uVar16 < iVar14) {
        if (this->bWasUnderrunReported == false) {
          if (2 < (byte)LogMetaSound._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<8>::Execute(void)___ptr64'
                        ::__l41::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          this->bWasUnderrunReported = true;
        }
        fVar7 = __real_3f800000;
        uVar9 = 0;
        if (iVar17 < 1) {
          if (uVar13 != 0) {
            do {
              uVar10 = 0;
              if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
                uVar10 = ~uVar9 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              puVar4 = *(undefined8 **)
                        ((this->AudioOutputs).AllocatorInstance.Data +
                        (longlong)(int)uVar9 * 0x20 + 8);
              iVar17 = *(int *)(puVar4 + 1);
              if (0 < iVar17) {
                memset((void *)*puVar4,0,(longlong)iVar17 << 2);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar13);
          }
        }
        else if (uVar13 != 0) {
          do {
            uVar10 = 0;
            if ((int)uVar9 < (this->AudioOutputs).ArrayNum) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar2 = *(longlong **)
                      ((this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20 + 8
                      );
            if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                          ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            }
            pfVar5 = (float *)*plVar2;
            local_78[0]._12_4_ = uStack_7c;
            local_78[0].ArrayNum = iVar17;
            local_78[0].DataPtr = pfVar5;
            Audio::ArrayFade(local_78,fVar7,0.0);
            if (0 < iVar1 - iVar17) {
              memset(pfVar5 + iVar17,0,(longlong)(iVar1 - iVar17) << 2);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar13);
        }
      }
      else {
        this->bWasUnderrunReported = false;
      }
      for (; uVar13 < 8; uVar13 = uVar13 + 1) {
        uVar9 = 0;
        if ((int)uVar13 < (this->AudioOutputs).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar4 = *(undefined8 **)
                  ((this->AudioOutputs).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x20 + 8);
        iVar17 = *(int *)(puVar4 + 1);
        if (0 < iVar17) {
          memset((void *)*puVar4,0,(longlong)iVar17 << 2);
        }
      }
    }
  }
  return;
}

// GetNodeInfo @ 14b3b91e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TAudioBusReaderOperator<1>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<1>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<1>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<1>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TAudioBusReaderOperator<1>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<1>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TAudioBusReaderOperator<1>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<1>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<1>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<1>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3b9270

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TAudioBusReaderOperator<2>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TAudioBusReaderOperator<2>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<2>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TAudioBusReaderOperator<2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<2>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<2>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3b9300

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TAudioBusReaderOperator<4>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<4>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<4>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<4>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TAudioBusReaderOperator<4>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<4>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TAudioBusReaderOperator<4>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<4>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<4>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<4>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3b9390

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TAudioBusReaderOperator<6>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<6>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<6>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<6>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TAudioBusReaderOperator<6>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<6>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TAudioBusReaderOperator<6>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<6>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<6>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<6>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3b9420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TAudioBusReaderOperator<8>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<8>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<8>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<8>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TAudioBusReaderOperator<8>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<8>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TAudioBusReaderOperator<8>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<8>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<8>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusReaderOperator<8>::GetNodeInfo(void)'
          ::__l2::Info;
}

// InitialNumBlocks @ 14b3c72c0

int __thiscall
Metasound::TAudioBusReaderOperator<1>::InitialNumBlocks(TAudioBusReaderOperator<1> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = this->BlockSizeFrames;
  iVar2 = this->AudioMixerOutputFrames / iVar1;
  iVar4 = this->AudioMixerOutputFrames % iVar1;
  if (0 < iVar4) {
    iVar3 = iVar1 + -1 + iVar4;
    return (iVar1 + -1 + (iVar3 - iVar3 % iVar4)) / iVar1 + 1 + iVar2;
  }
  return iVar2 + 1;
}

// InitialNumBlocks @ 14b3c7310

int __thiscall
Metasound::TAudioBusReaderOperator<2>::InitialNumBlocks(TAudioBusReaderOperator<2> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = this->BlockSizeFrames;
  iVar2 = this->AudioMixerOutputFrames / iVar1;
  iVar4 = this->AudioMixerOutputFrames % iVar1;
  if (0 < iVar4) {
    iVar3 = iVar1 + -1 + iVar4;
    return (iVar1 + -1 + (iVar3 - iVar3 % iVar4)) / iVar1 + 1 + iVar2;
  }
  return iVar2 + 1;
}

// InitialNumBlocks @ 14b3c7360

int __thiscall
Metasound::TAudioBusReaderOperator<4>::InitialNumBlocks(TAudioBusReaderOperator<4> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = this->BlockSizeFrames;
  iVar2 = this->AudioMixerOutputFrames / iVar1;
  iVar4 = this->AudioMixerOutputFrames % iVar1;
  if (0 < iVar4) {
    iVar3 = iVar1 + -1 + iVar4;
    return (iVar1 + -1 + (iVar3 - iVar3 % iVar4)) / iVar1 + 1 + iVar2;
  }
  return iVar2 + 1;
}

// InitialNumBlocks @ 14b3c73b0

int __thiscall
Metasound::TAudioBusReaderOperator<6>::InitialNumBlocks(TAudioBusReaderOperator<6> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = this->BlockSizeFrames;
  iVar2 = this->AudioMixerOutputFrames / iVar1;
  iVar4 = this->AudioMixerOutputFrames % iVar1;
  if (0 < iVar4) {
    iVar3 = iVar1 + -1 + iVar4;
    return (iVar1 + -1 + (iVar3 - iVar3 % iVar4)) / iVar1 + 1 + iVar2;
  }
  return iVar2 + 1;
}

// InitialNumBlocks @ 14b3c7400

int __thiscall
Metasound::TAudioBusReaderOperator<8>::InitialNumBlocks(TAudioBusReaderOperator<8> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = this->BlockSizeFrames;
  iVar2 = this->AudioMixerOutputFrames / iVar1;
  iVar4 = this->AudioMixerOutputFrames % iVar1;
  if (0 < iVar4) {
    iVar3 = iVar1 + -1 + iVar4;
    return (iVar1 + -1 + (iVar3 - iVar3 % iVar4)) / iVar1 + 1 + iVar2;
  }
  return iVar2 + 1;
}

// NumBlocksToNumSamples @ 14b3c98a0

int __thiscall
Metasound::TAudioBusReaderOperator<1>::NumBlocksToNumSamples
          (TAudioBusReaderOperator<1> *this,int param_1,float param_2)

{
  if (0.0 < param_2) {
    return -(((int)ROUND(__real_bf000000 -
                         (float)(param_1 * this->BlockSizeFrames) * (param_2 + param_2)) >> 1) *
            this->AudioBusChannels);
  }
  return param_1 * this->AudioBusChannels * this->BlockSizeFrames;
}

// NumBlocksToNumSamples @ 14b3c9900

int __thiscall
Metasound::TAudioBusReaderOperator<2>::NumBlocksToNumSamples
          (TAudioBusReaderOperator<2> *this,int param_1,float param_2)

{
  if (0.0 < param_2) {
    return -(((int)ROUND(__real_bf000000 -
                         (float)(param_1 * this->BlockSizeFrames) * (param_2 + param_2)) >> 1) *
            this->AudioBusChannels);
  }
  return param_1 * this->AudioBusChannels * this->BlockSizeFrames;
}

// NumBlocksToNumSamples @ 14b3c9960

int __thiscall
Metasound::TAudioBusReaderOperator<4>::NumBlocksToNumSamples
          (TAudioBusReaderOperator<4> *this,int param_1,float param_2)

{
  if (0.0 < param_2) {
    return -(((int)ROUND(__real_bf000000 -
                         (float)(param_1 * this->BlockSizeFrames) * (param_2 + param_2)) >> 1) *
            this->AudioBusChannels);
  }
  return param_1 * this->AudioBusChannels * this->BlockSizeFrames;
}

// NumBlocksToNumSamples @ 14b3c99c0

int __thiscall
Metasound::TAudioBusReaderOperator<6>::NumBlocksToNumSamples
          (TAudioBusReaderOperator<6> *this,int param_1,float param_2)

{
  if (0.0 < param_2) {
    return -(((int)ROUND(__real_bf000000 -
                         (float)(param_1 * this->BlockSizeFrames) * (param_2 + param_2)) >> 1) *
            this->AudioBusChannels);
  }
  return param_1 * this->AudioBusChannels * this->BlockSizeFrames;
}

// NumBlocksToNumSamples @ 14b3c9a20

int __thiscall
Metasound::TAudioBusReaderOperator<8>::NumBlocksToNumSamples
          (TAudioBusReaderOperator<8> *this,int param_1,float param_2)

{
  if (0.0 < param_2) {
    return -(((int)ROUND(__real_bf000000 -
                         (float)(param_1 * this->BlockSizeFrames) * (param_2 + param_2)) >> 1) *
            this->AudioBusChannels);
  }
  return param_1 * this->AudioBusChannels * this->BlockSizeFrames;
}

// Reset @ 14b3d75a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusReaderOperator<1>::Reset(TAudioBusReaderOperator<1> *this,FResetParams *param_1)

{
  int iVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar2;
  IMetasoundEnvironmentVariable *pIVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar10;
  void *pvVar11;
  void *pvVar12;
  ulong64 uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  undefined1 local_res8 [8];
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (this->InterleavedBuffer).ArrayNum = 0;
  if ((this->InterleavedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
               &(this->InterleavedBuffer).ArrayMax);
  }
  TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
  ::Reset(&this->ResampledPatchOutput,(FResampledPatchOutput *)0x0);
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = 1.0;
  this->AudioDeviceId = 0xffffffff;
  this->InstanceID = 0;
  this->AudioBusId = 0;
  this->SampleRate = 0.0;
  local_78 = 0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->AudioBusPatchOutput != (TSharedPtr<Audio::FPatchOutput,1> *)&local_78) {
    (this->AudioBusPatchOutput).Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AudioBusPatchOutput).SharedReferenceCount,&FStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  Audio::FPatchInput::Reset(&this->PatchInput);
  this->AudioBusChannels = 0xffffffff;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  this->BlockSizeFrames = param_1->OperatorSettings->NumFramesPerBlock;
  this->bWasUnderrunReported = false;
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar10 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar5 = pvVar11 == pvVar12;
  }
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar10 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar6 = false;
  }
  else {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar6 = pvVar11 == pvVar12;
  }
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
  bVar7 = false;
  if (pTVar10 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar7 = pvVar11 == pvVar12;
  }
  if ((bool)(bVar6 & bVar5 & bVar7)) {
    uVar8 = FMetasoundEnvironment::GetValue<unsigned_int>
                      (param_1->Environment,&Frontend::SourceInterface::Environment::DeviceID);
    this->AudioDeviceId = uVar8;
    iVar9 = FMetasoundEnvironment::GetValue<int>
                      (param_1->Environment,
                       &Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    this->AudioMixerOutputFrames = iVar9;
    uVar13 = FMetasoundEnvironment::GetValue<unsigned___int64>
                       (param_1->Environment,&Frontend::SourceInterface::Environment::TransmitterID)
    ;
    this->InstanceID = uVar13;
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::TransmitterID,&local_48);
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_58);
    ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_68);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<1>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
  if (pTVar10 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<float>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    if (pvVar11 == pvVar12) {
      fVar16 = FMetasoundEnvironment::GetValue<float>
                         (param_1->Environment,
                          &Frontend::SourceInterface::Environment::AudioMixerSampleRate);
      goto LAB_14b3d7994;
    }
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerSampleRate,&local_38);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<1>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l30::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  fVar16 = this->SampleRate;
LAB_14b3d7994:
  this->AudioMixerSampleRate = fVar16;
  iVar9 = (this->AudioOutputs).ArrayNum;
  pFVar14 = (this->AudioOutputs).AllocatorInstance.Data;
  pFVar15 = pFVar14 + (longlong)iVar9 * 0x20;
  while( true ) {
    if ((this->AudioOutputs).ArrayNum != iVar9) {
      `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar15) break;
    iVar1 = *(int *)(*(undefined8 **)(pFVar14 + 8) + 1);
    if (0 < iVar1) {
      memset((void *)**(undefined8 **)(pFVar14 + 8),0,(longlong)iVar1 << 2);
    }
    pFVar14 = pFVar14 + 0x20;
  }
  return;
}

// Reset @ 14b3d7a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusReaderOperator<2>::Reset(TAudioBusReaderOperator<2> *this,FResetParams *param_1)

{
  int iVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar2;
  IMetasoundEnvironmentVariable *pIVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar10;
  void *pvVar11;
  void *pvVar12;
  ulong64 uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  undefined1 local_res8 [8];
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (this->InterleavedBuffer).ArrayNum = 0;
  if ((this->InterleavedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
               &(this->InterleavedBuffer).ArrayMax);
  }
  TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
  ::Reset(&this->ResampledPatchOutput,(FResampledPatchOutput *)0x0);
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = 1.0;
  this->AudioDeviceId = 0xffffffff;
  this->InstanceID = 0;
  this->AudioBusId = 0;
  this->SampleRate = 0.0;
  local_78 = 0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->AudioBusPatchOutput != (TSharedPtr<Audio::FPatchOutput,1> *)&local_78) {
    (this->AudioBusPatchOutput).Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AudioBusPatchOutput).SharedReferenceCount,&FStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  Audio::FPatchInput::Reset(&this->PatchInput);
  this->AudioBusChannels = 0xffffffff;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  this->BlockSizeFrames = param_1->OperatorSettings->NumFramesPerBlock;
  this->bWasUnderrunReported = false;
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar10 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar5 = pvVar11 == pvVar12;
  }
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar10 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar6 = false;
  }
  else {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar6 = pvVar11 == pvVar12;
  }
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
  bVar7 = false;
  if (pTVar10 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar7 = pvVar11 == pvVar12;
  }
  if ((bool)(bVar6 & bVar5 & bVar7)) {
    uVar8 = FMetasoundEnvironment::GetValue<unsigned_int>
                      (param_1->Environment,&Frontend::SourceInterface::Environment::DeviceID);
    this->AudioDeviceId = uVar8;
    iVar9 = FMetasoundEnvironment::GetValue<int>
                      (param_1->Environment,
                       &Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    this->AudioMixerOutputFrames = iVar9;
    uVar13 = FMetasoundEnvironment::GetValue<unsigned___int64>
                       (param_1->Environment,&Frontend::SourceInterface::Environment::TransmitterID)
    ;
    this->InstanceID = uVar13;
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::TransmitterID,&local_48);
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_58);
    ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_68);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<2>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
  if (pTVar10 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<float>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    if (pvVar11 == pvVar12) {
      fVar16 = FMetasoundEnvironment::GetValue<float>
                         (param_1->Environment,
                          &Frontend::SourceInterface::Environment::AudioMixerSampleRate);
      goto LAB_14b3d7e04;
    }
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerSampleRate,&local_38);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<2>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l30::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  fVar16 = this->SampleRate;
LAB_14b3d7e04:
  this->AudioMixerSampleRate = fVar16;
  iVar9 = (this->AudioOutputs).ArrayNum;
  pFVar14 = (this->AudioOutputs).AllocatorInstance.Data;
  pFVar15 = pFVar14 + (longlong)iVar9 * 0x20;
  while( true ) {
    if ((this->AudioOutputs).ArrayNum != iVar9) {
      `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar15) break;
    iVar1 = *(int *)(*(undefined8 **)(pFVar14 + 8) + 1);
    if (0 < iVar1) {
      memset((void *)**(undefined8 **)(pFVar14 + 8),0,(longlong)iVar1 << 2);
    }
    pFVar14 = pFVar14 + 0x20;
  }
  return;
}

// Reset @ 14b3d7e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusReaderOperator<4>::Reset(TAudioBusReaderOperator<4> *this,FResetParams *param_1)

{
  int iVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar2;
  IMetasoundEnvironmentVariable *pIVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar10;
  void *pvVar11;
  void *pvVar12;
  ulong64 uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  undefined1 local_res8 [8];
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (this->InterleavedBuffer).ArrayNum = 0;
  if ((this->InterleavedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
               &(this->InterleavedBuffer).ArrayMax);
  }
  TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
  ::Reset(&this->ResampledPatchOutput,(FResampledPatchOutput *)0x0);
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = 1.0;
  this->AudioDeviceId = 0xffffffff;
  this->InstanceID = 0;
  this->AudioBusId = 0;
  this->SampleRate = 0.0;
  local_78 = 0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->AudioBusPatchOutput != (TSharedPtr<Audio::FPatchOutput,1> *)&local_78) {
    (this->AudioBusPatchOutput).Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AudioBusPatchOutput).SharedReferenceCount,&FStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  Audio::FPatchInput::Reset(&this->PatchInput);
  this->AudioBusChannels = 0xffffffff;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  this->BlockSizeFrames = param_1->OperatorSettings->NumFramesPerBlock;
  this->bWasUnderrunReported = false;
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar10 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar5 = pvVar11 == pvVar12;
  }
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar10 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar6 = false;
  }
  else {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar6 = pvVar11 == pvVar12;
  }
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
  bVar7 = false;
  if (pTVar10 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar7 = pvVar11 == pvVar12;
  }
  if ((bool)(bVar6 & bVar5 & bVar7)) {
    uVar8 = FMetasoundEnvironment::GetValue<unsigned_int>
                      (param_1->Environment,&Frontend::SourceInterface::Environment::DeviceID);
    this->AudioDeviceId = uVar8;
    iVar9 = FMetasoundEnvironment::GetValue<int>
                      (param_1->Environment,
                       &Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    this->AudioMixerOutputFrames = iVar9;
    uVar13 = FMetasoundEnvironment::GetValue<unsigned___int64>
                       (param_1->Environment,&Frontend::SourceInterface::Environment::TransmitterID)
    ;
    this->InstanceID = uVar13;
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::TransmitterID,&local_48);
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_58);
    ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_68);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<4>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
  if (pTVar10 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<float>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    if (pvVar11 == pvVar12) {
      fVar16 = FMetasoundEnvironment::GetValue<float>
                         (param_1->Environment,
                          &Frontend::SourceInterface::Environment::AudioMixerSampleRate);
      goto LAB_14b3d8274;
    }
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerSampleRate,&local_38);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<4>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l30::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  fVar16 = this->SampleRate;
LAB_14b3d8274:
  this->AudioMixerSampleRate = fVar16;
  iVar9 = (this->AudioOutputs).ArrayNum;
  pFVar14 = (this->AudioOutputs).AllocatorInstance.Data;
  pFVar15 = pFVar14 + (longlong)iVar9 * 0x20;
  while( true ) {
    if ((this->AudioOutputs).ArrayNum != iVar9) {
      `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar15) break;
    iVar1 = *(int *)(*(undefined8 **)(pFVar14 + 8) + 1);
    if (0 < iVar1) {
      memset((void *)**(undefined8 **)(pFVar14 + 8),0,(longlong)iVar1 << 2);
    }
    pFVar14 = pFVar14 + 0x20;
  }
  return;
}

// Reset @ 14b3d82f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusReaderOperator<6>::Reset(TAudioBusReaderOperator<6> *this,FResetParams *param_1)

{
  int iVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar2;
  IMetasoundEnvironmentVariable *pIVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar10;
  void *pvVar11;
  void *pvVar12;
  ulong64 uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  undefined1 local_res8 [8];
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (this->InterleavedBuffer).ArrayNum = 0;
  if ((this->InterleavedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
               &(this->InterleavedBuffer).ArrayMax);
  }
  TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
  ::Reset(&this->ResampledPatchOutput,(FResampledPatchOutput *)0x0);
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = 1.0;
  this->AudioDeviceId = 0xffffffff;
  this->InstanceID = 0;
  this->AudioBusId = 0;
  this->SampleRate = 0.0;
  local_78 = 0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->AudioBusPatchOutput != (TSharedPtr<Audio::FPatchOutput,1> *)&local_78) {
    (this->AudioBusPatchOutput).Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AudioBusPatchOutput).SharedReferenceCount,&FStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  Audio::FPatchInput::Reset(&this->PatchInput);
  this->AudioBusChannels = 0xffffffff;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  this->BlockSizeFrames = param_1->OperatorSettings->NumFramesPerBlock;
  this->bWasUnderrunReported = false;
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar10 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar5 = pvVar11 == pvVar12;
  }
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar10 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar6 = false;
  }
  else {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar6 = pvVar11 == pvVar12;
  }
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
  bVar7 = false;
  if (pTVar10 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar7 = pvVar11 == pvVar12;
  }
  if ((bool)(bVar6 & bVar5 & bVar7)) {
    uVar8 = FMetasoundEnvironment::GetValue<unsigned_int>
                      (param_1->Environment,&Frontend::SourceInterface::Environment::DeviceID);
    this->AudioDeviceId = uVar8;
    iVar9 = FMetasoundEnvironment::GetValue<int>
                      (param_1->Environment,
                       &Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    this->AudioMixerOutputFrames = iVar9;
    uVar13 = FMetasoundEnvironment::GetValue<unsigned___int64>
                       (param_1->Environment,&Frontend::SourceInterface::Environment::TransmitterID)
    ;
    this->InstanceID = uVar13;
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::TransmitterID,&local_48);
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_58);
    ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_68);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<6>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
  if (pTVar10 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<float>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    if (pvVar11 == pvVar12) {
      fVar16 = FMetasoundEnvironment::GetValue<float>
                         (param_1->Environment,
                          &Frontend::SourceInterface::Environment::AudioMixerSampleRate);
      goto LAB_14b3d86e4;
    }
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerSampleRate,&local_38);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<6>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l30::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  fVar16 = this->SampleRate;
LAB_14b3d86e4:
  this->AudioMixerSampleRate = fVar16;
  iVar9 = (this->AudioOutputs).ArrayNum;
  pFVar14 = (this->AudioOutputs).AllocatorInstance.Data;
  pFVar15 = pFVar14 + (longlong)iVar9 * 0x20;
  while( true ) {
    if ((this->AudioOutputs).ArrayNum != iVar9) {
      `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar15) break;
    iVar1 = *(int *)(*(undefined8 **)(pFVar14 + 8) + 1);
    if (0 < iVar1) {
      memset((void *)**(undefined8 **)(pFVar14 + 8),0,(longlong)iVar1 << 2);
    }
    pFVar14 = pFVar14 + 0x20;
  }
  return;
}

// Reset @ 14b3d8760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusReaderOperator<8>::Reset(TAudioBusReaderOperator<8> *this,FResetParams *param_1)

{
  int iVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar2;
  IMetasoundEnvironmentVariable *pIVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar10;
  void *pvVar11;
  void *pvVar12;
  ulong64 uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  undefined1 local_res8 [8];
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (this->InterleavedBuffer).ArrayNum = 0;
  if ((this->InterleavedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
               &(this->InterleavedBuffer).ArrayMax);
  }
  TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
  ::Reset(&this->ResampledPatchOutput,(FResampledPatchOutput *)0x0);
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = 1.0;
  this->AudioDeviceId = 0xffffffff;
  this->InstanceID = 0;
  this->AudioBusId = 0;
  this->SampleRate = 0.0;
  local_78 = 0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->AudioBusPatchOutput != (TSharedPtr<Audio::FPatchOutput,1> *)&local_78) {
    (this->AudioBusPatchOutput).Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AudioBusPatchOutput).SharedReferenceCount,&FStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  Audio::FPatchInput::Reset(&this->PatchInput);
  this->AudioBusChannels = 0xffffffff;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  this->BlockSizeFrames = param_1->OperatorSettings->NumFramesPerBlock;
  this->bWasUnderrunReported = false;
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar10 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar5 = pvVar11 == pvVar12;
  }
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar10 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar6 = false;
  }
  else {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar6 = pvVar11 == pvVar12;
  }
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
  bVar7 = false;
  if (pTVar10 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar7 = pvVar11 == pvVar12;
  }
  if ((bool)(bVar6 & bVar5 & bVar7)) {
    uVar8 = FMetasoundEnvironment::GetValue<unsigned_int>
                      (param_1->Environment,&Frontend::SourceInterface::Environment::DeviceID);
    this->AudioDeviceId = uVar8;
    iVar9 = FMetasoundEnvironment::GetValue<int>
                      (param_1->Environment,
                       &Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    this->AudioMixerOutputFrames = iVar9;
    uVar13 = FMetasoundEnvironment::GetValue<unsigned___int64>
                       (param_1->Environment,&Frontend::SourceInterface::Environment::TransmitterID)
    ;
    this->InstanceID = uVar13;
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::TransmitterID,&local_48);
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_58);
    ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_68);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<8>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pTVar2 = &param_1->Environment->Variables;
  pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
  if (pTVar10 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar10 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
    if ((pTVar10 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = pTVar10->Ptr;
    pvVar11 = TEnvironmentVariableTypeInfo<float>::GetTypeId();
    pvVar12 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    if (pvVar11 == pvVar12) {
      fVar16 = FMetasoundEnvironment::GetValue<float>
                         (param_1->Environment,
                          &Frontend::SourceInterface::Environment::AudioMixerSampleRate);
      goto LAB_14b3d8b54;
    }
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerSampleRate,&local_38);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusReaderOperator<8>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l30::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  fVar16 = this->SampleRate;
LAB_14b3d8b54:
  this->AudioMixerSampleRate = fVar16;
  iVar9 = (this->AudioOutputs).ArrayNum;
  pFVar14 = (this->AudioOutputs).AllocatorInstance.Data;
  pFVar15 = pFVar14 + (longlong)iVar9 * 0x20;
  while( true ) {
    if ((this->AudioOutputs).ArrayNum != iVar9) {
      `TCheckedPointerIterator<Metasound::TDataWriteReference<Metasound::FAudioBuffer>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar15) break;
    iVar1 = *(int *)(*(undefined8 **)(pFVar14 + 8) + 1);
    if (0 < iVar1) {
      memset((void *)**(undefined8 **)(pFVar14 + 8),0,(longlong)iVar1 << 2);
    }
    pFVar14 = pFVar14 + 0x20;
  }
  return;
}

