// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 55

// BindInputs @ 14b2cddf0

void __thiscall
Metasound::TAudioBusWriterOperator<8>::BindInputs
          (TAudioBusWriterOperator<8> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FName local_res8;
  FName local_res18;
  TDataReadReference<Metasound::FAudioBusAsset> *local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_f8;
  FName local_e8;
  FScriptContainerElement *local_e0;
  FString local_d8;
  FName *local_c8;
  TDataReadReference<Metasound::FAudioBusAsset> *local_c0;
  code *local_b8;
  TDataReadReference<Metasound::FAudioBusAsset> **local_b0;
  code *local_a8;
  FName **local_a0;
  FName *local_98;
  FScriptContainerElement *local_90;
  code *local_88;
  FScriptContainerElement **local_80;
  code *local_78;
  FName **local_70;
  FString local_68;
  FStringFormatArg local_58;
  
  FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioBusName);
  local_res20 = &this->AudioBusAsset;
  local_b0 = &local_res20;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a0 = &local_c8;
  local_c8 = &local_res8;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_c0 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_b8)
  ;
  uVar7 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar7 < (this->AudioInputs).ArrayNum) {
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
    pFVar8 = (this->AudioInputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_58,uVar7);
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_f8.AllocatorInstance,1,&local_f8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_f8.AllocatorInstance.Data,&local_58,1);
    FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioName);
    pFVar4 = ::FName::ToString(&local_e8,&local_68);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_d8,pwVar5,&local_f8);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar6.Data = local_d8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar6.Data);
    local_80 = &local_e0;
    local_98 = &local_res18;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_70 = &local_98;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_e0 = pFVar8;
    local_90 = pFVar8;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_78,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_88);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((FStringFormatArg *)local_f8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 8);
  return;
}

// BindOutputs @ 14b2ce050

void __thiscall
Metasound::TAudioBusWriterOperator<8>::BindOutputs
          (TAudioBusWriterOperator<8> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2ce5d0

void __thiscall
Metasound::TAudioBusWriterOperator<6>::BindInputs
          (TAudioBusWriterOperator<6> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FName local_res8;
  FName local_res18;
  TDataReadReference<Metasound::FAudioBusAsset> *local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_f8;
  FName local_e8;
  FScriptContainerElement *local_e0;
  FString local_d8;
  FName *local_c8;
  TDataReadReference<Metasound::FAudioBusAsset> *local_c0;
  code *local_b8;
  TDataReadReference<Metasound::FAudioBusAsset> **local_b0;
  code *local_a8;
  FName **local_a0;
  FName *local_98;
  FScriptContainerElement *local_90;
  code *local_88;
  FScriptContainerElement **local_80;
  code *local_78;
  FName **local_70;
  FString local_68;
  FStringFormatArg local_58;
  
  FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioBusName);
  local_res20 = &this->AudioBusAsset;
  local_b0 = &local_res20;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a0 = &local_c8;
  local_c8 = &local_res8;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_c0 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_b8)
  ;
  uVar7 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar7 < (this->AudioInputs).ArrayNum) {
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
    pFVar8 = (this->AudioInputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_58,uVar7);
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_f8.AllocatorInstance,1,&local_f8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_f8.AllocatorInstance.Data,&local_58,1);
    FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioName);
    pFVar4 = ::FName::ToString(&local_e8,&local_68);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_d8,pwVar5,&local_f8);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar6.Data = local_d8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar6.Data);
    local_80 = &local_e0;
    local_98 = &local_res18;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_70 = &local_98;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_e0 = pFVar8;
    local_90 = pFVar8;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_78,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_88);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((FStringFormatArg *)local_f8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 6);
  return;
}

// BindOutputs @ 14b2ce830

void __thiscall
Metasound::TAudioBusWriterOperator<6>::BindOutputs
          (TAudioBusWriterOperator<6> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2cf5e0

void __thiscall
Metasound::TAudioBusWriterOperator<4>::BindInputs
          (TAudioBusWriterOperator<4> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FName local_res8;
  FName local_res18;
  TDataReadReference<Metasound::FAudioBusAsset> *local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_f8;
  FName local_e8;
  FScriptContainerElement *local_e0;
  FString local_d8;
  FName *local_c8;
  TDataReadReference<Metasound::FAudioBusAsset> *local_c0;
  code *local_b8;
  TDataReadReference<Metasound::FAudioBusAsset> **local_b0;
  code *local_a8;
  FName **local_a0;
  FName *local_98;
  FScriptContainerElement *local_90;
  code *local_88;
  FScriptContainerElement **local_80;
  code *local_78;
  FName **local_70;
  FString local_68;
  FStringFormatArg local_58;
  
  FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioBusName);
  local_res20 = &this->AudioBusAsset;
  local_b0 = &local_res20;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a0 = &local_c8;
  local_c8 = &local_res8;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_c0 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_b8)
  ;
  uVar7 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar7 < (this->AudioInputs).ArrayNum) {
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
    pFVar8 = (this->AudioInputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_58,uVar7);
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_f8.AllocatorInstance,1,&local_f8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_f8.AllocatorInstance.Data,&local_58,1);
    FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioName);
    pFVar4 = ::FName::ToString(&local_e8,&local_68);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_d8,pwVar5,&local_f8);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar6.Data = local_d8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar6.Data);
    local_80 = &local_e0;
    local_98 = &local_res18;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_70 = &local_98;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_e0 = pFVar8;
    local_90 = pFVar8;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_78,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_88);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((FStringFormatArg *)local_f8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  return;
}

// BindOutputs @ 14b2cf930

void __thiscall
Metasound::TAudioBusWriterOperator<4>::BindOutputs
          (TAudioBusWriterOperator<4> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2d0620

void __thiscall
Metasound::TAudioBusWriterOperator<2>::BindInputs
          (TAudioBusWriterOperator<2> *this,FInputVertexInterfaceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FName local_res8;
  FName local_res18;
  TDataReadReference<Metasound::FAudioBusAsset> *local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_f8;
  FName local_e8;
  FScriptContainerElement *local_e0;
  FString local_d8;
  FName *local_c8;
  TDataReadReference<Metasound::FAudioBusAsset> *local_c0;
  code *local_b8;
  TDataReadReference<Metasound::FAudioBusAsset> **local_b0;
  code *local_a8;
  FName **local_a0;
  FName *local_98;
  FScriptContainerElement *local_90;
  code *local_88;
  FScriptContainerElement **local_80;
  code *local_78;
  FName **local_70;
  FString local_68;
  FStringFormatArg local_58;
  
  FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioBusName);
  local_res20 = &this->AudioBusAsset;
  local_b0 = &local_res20;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_a0 = &local_c8;
  local_c8 = &local_res8;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_c0 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_a8,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_b8)
  ;
  uVar7 = 0;
  do {
    uVar3 = 0;
    if ((int)uVar7 < (this->AudioInputs).ArrayNum) {
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
    pFVar8 = (this->AudioInputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
    FStringFormatArg::FStringFormatArg(&local_58,uVar7);
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_f8.AllocatorInstance,1,&local_f8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_f8.AllocatorInstance.Data,&local_58,1);
    FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioName);
    pFVar4 = ::FName::ToString(&local_e8,&local_68);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_d8,pwVar5,&local_f8);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar6.Data = local_d8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar6.Data);
    local_80 = &local_e0;
    local_98 = &local_res18;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_70 = &local_98;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
    local_e0 = pFVar8;
    local_90 = pFVar8;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res18,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_78,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_88);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((FStringFormatArg *)local_f8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  return;
}

// BindOutputs @ 14b2d08c0

void __thiscall
Metasound::TAudioBusWriterOperator<2>::BindOutputs
          (TAudioBusWriterOperator<2> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b2d0be0

void __thiscall
Metasound::TAudioBusWriterOperator<1>::BindInputs
          (TAudioBusWriterOperator<1> *this,FInputVertexInterfaceData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FName local_res18;
  TDataReadReference<Metasound::FAudioBusAsset> *local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_d8;
  FName local_c8;
  FScriptContainerElement *local_c0;
  FString local_b8;
  FName *local_a8;
  TDataReadReference<Metasound::FAudioBusAsset> *local_a0;
  code *local_98;
  TDataReadReference<Metasound::FAudioBusAsset> **local_90;
  code *local_88;
  FName **local_80;
  FName *local_78;
  FScriptContainerElement *local_70;
  code *local_68;
  FScriptContainerElement **local_60;
  code *local_58;
  FName **local_50;
  FString local_48;
  FStringFormatArg local_38;
  
  FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioBusName);
  local_res20 = &this->AudioBusAsset;
  local_90 = &local_res20;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBusAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_80 = &local_a8;
  local_a8 = &local_res8;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBusAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_a0 = local_res20;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_88,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_98)
  ;
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
  FStringFormatArg::FStringFormatArg(&local_38,0);
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_d8.AllocatorInstance,1,&local_d8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_d8.AllocatorInstance.Data,&local_38,1)
  ;
  FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioName);
  pFVar4 = ::FName::ToString(&local_c8,&local_48);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FormatImpl(&local_b8,pwVar5,&local_d8);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar6.Data = local_b8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res18,(wchar_t *)FVar6.Data);
  local_60 = &local_c0;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_78 = &local_res18;
  local_50 = &local_78;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_c0 = pFVar1;
  local_70 = pFVar1;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res18,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_68)
  ;
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if ((FStringFormatArg *)local_d8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
  }
  return;
}

// BindOutputs @ 14b2d0e00

void __thiscall
Metasound::TAudioBusWriterOperator<1>::BindOutputs
          (TAudioBusWriterOperator<1> *this,FOutputVertexInterfaceData *param_1)

{
  return;
}

// TAudioBusWriterOperator<1> @ 14b338a20

TAudioBusWriterOperator<1> * __thiscall
Metasound::TAudioBusWriterOperator<1>::TAudioBusWriterOperator<1>
          (TAudioBusWriterOperator<1> *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FAudioBusAsset> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3,FString *param_4)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FResetParams local_28;
  
  this->_padding_ = (longlong)&___7__TAudioBusWriterOperator__00_Metasound__6B_;
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AudioBusAsset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioBusAsset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  (this->AudioInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).ArrayNum = param_3->ArrayNum;
  (this->AudioInputs).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  (this->InterleavedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleavedBuffer).ArrayNum = 0;
  (this->InterleavedBuffer).ArrayMax = 0;
  (this->ResampledPatchInput).Ptr = (FResampledPatchInput *)0x0;
  this->SampleRate = 0.0;
  (this->AudioBusPatchInput).OutputHandle.Object = (FPatchOutput *)0x0;
  (this->AudioBusPatchInput).OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AudioBusPatchInput).PushCallsCounter = 0;
  this->InstanceID = 0;
  this->AudioBusId = 0;
  this->BlockSizeFrames = 0;
  this->bWasUnderrunReported = false;
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = -1.0;
  this->AudioDeviceId = 0xffffffff;
  this->AudioBusChannels = 0xffffffff;
  local_28.OperatorSettings = param_1->OperatorSettings;
  local_28.Environment = param_1->Environment;
  local_28.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)(param_3->AllocatorInstance).Data,
             param_3->ArrayNum);
  pFVar2 = (param_3->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// TAudioBusWriterOperator<2> @ 14b338b50

TAudioBusWriterOperator<2> * __thiscall
Metasound::TAudioBusWriterOperator<2>::TAudioBusWriterOperator<2>
          (TAudioBusWriterOperator<2> *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FAudioBusAsset> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3,FString *param_4)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FResetParams local_28;
  
  this->_padding_ = (longlong)&___7__TAudioBusWriterOperator__01_Metasound__6B_;
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AudioBusAsset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioBusAsset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  (this->AudioInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).ArrayNum = param_3->ArrayNum;
  (this->AudioInputs).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  (this->InterleavedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleavedBuffer).ArrayNum = 0;
  (this->InterleavedBuffer).ArrayMax = 0;
  (this->ResampledPatchInput).Ptr = (FResampledPatchInput *)0x0;
  this->SampleRate = 0.0;
  (this->AudioBusPatchInput).OutputHandle.Object = (FPatchOutput *)0x0;
  (this->AudioBusPatchInput).OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AudioBusPatchInput).PushCallsCounter = 0;
  this->InstanceID = 0;
  this->AudioBusId = 0;
  this->BlockSizeFrames = 0;
  this->bWasUnderrunReported = false;
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = -1.0;
  this->AudioDeviceId = 0xffffffff;
  this->AudioBusChannels = 0xffffffff;
  local_28.OperatorSettings = param_1->OperatorSettings;
  local_28.Environment = param_1->Environment;
  local_28.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)(param_3->AllocatorInstance).Data,
             param_3->ArrayNum);
  pFVar2 = (param_3->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// TAudioBusWriterOperator<4> @ 14b338c80

TAudioBusWriterOperator<4> * __thiscall
Metasound::TAudioBusWriterOperator<4>::TAudioBusWriterOperator<4>
          (TAudioBusWriterOperator<4> *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FAudioBusAsset> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3,FString *param_4)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FResetParams local_28;
  
  this->_padding_ = (longlong)&___7__TAudioBusWriterOperator__03_Metasound__6B_;
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AudioBusAsset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioBusAsset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  (this->AudioInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).ArrayNum = param_3->ArrayNum;
  (this->AudioInputs).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  (this->InterleavedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleavedBuffer).ArrayNum = 0;
  (this->InterleavedBuffer).ArrayMax = 0;
  (this->ResampledPatchInput).Ptr = (FResampledPatchInput *)0x0;
  this->SampleRate = 0.0;
  (this->AudioBusPatchInput).OutputHandle.Object = (FPatchOutput *)0x0;
  (this->AudioBusPatchInput).OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AudioBusPatchInput).PushCallsCounter = 0;
  this->InstanceID = 0;
  this->AudioBusId = 0;
  this->BlockSizeFrames = 0;
  this->bWasUnderrunReported = false;
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = -1.0;
  this->AudioDeviceId = 0xffffffff;
  this->AudioBusChannels = 0xffffffff;
  local_28.OperatorSettings = param_1->OperatorSettings;
  local_28.Environment = param_1->Environment;
  local_28.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)(param_3->AllocatorInstance).Data,
             param_3->ArrayNum);
  pFVar2 = (param_3->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// TAudioBusWriterOperator<6> @ 14b338db0

TAudioBusWriterOperator<6> * __thiscall
Metasound::TAudioBusWriterOperator<6>::TAudioBusWriterOperator<6>
          (TAudioBusWriterOperator<6> *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FAudioBusAsset> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3,FString *param_4)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FResetParams local_28;
  
  this->_padding_ = (longlong)&___7__TAudioBusWriterOperator__05_Metasound__6B_;
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AudioBusAsset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioBusAsset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  (this->AudioInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).ArrayNum = param_3->ArrayNum;
  (this->AudioInputs).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  (this->InterleavedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleavedBuffer).ArrayNum = 0;
  (this->InterleavedBuffer).ArrayMax = 0;
  (this->ResampledPatchInput).Ptr = (FResampledPatchInput *)0x0;
  this->SampleRate = 0.0;
  (this->AudioBusPatchInput).OutputHandle.Object = (FPatchOutput *)0x0;
  (this->AudioBusPatchInput).OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AudioBusPatchInput).PushCallsCounter = 0;
  this->InstanceID = 0;
  this->AudioBusId = 0;
  this->BlockSizeFrames = 0;
  this->bWasUnderrunReported = false;
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = -1.0;
  this->AudioDeviceId = 0xffffffff;
  this->AudioBusChannels = 0xffffffff;
  local_28.OperatorSettings = param_1->OperatorSettings;
  local_28.Environment = param_1->Environment;
  local_28.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)(param_3->AllocatorInstance).Data,
             param_3->ArrayNum);
  pFVar2 = (param_3->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// TAudioBusWriterOperator<8> @ 14b338ee0

TAudioBusWriterOperator<8> * __thiscall
Metasound::TAudioBusWriterOperator<8>::TAudioBusWriterOperator<8>
          (TAudioBusWriterOperator<8> *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FAudioBusAsset> *param_2,
          TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
          *param_3,FString *param_4)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FResetParams local_28;
  
  this->_padding_ = (longlong)&___7__TAudioBusWriterOperator__07_Metasound__6B_;
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AudioBusAsset).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioBusAsset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AudioBusAsset =
       &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
  (this->AudioInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioInputs).ArrayNum = param_3->ArrayNum;
  (this->AudioInputs).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  (this->InterleavedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterleavedBuffer).ArrayNum = 0;
  (this->InterleavedBuffer).ArrayMax = 0;
  (this->ResampledPatchInput).Ptr = (FResampledPatchInput *)0x0;
  this->SampleRate = 0.0;
  (this->AudioBusPatchInput).OutputHandle.Object = (FPatchOutput *)0x0;
  (this->AudioBusPatchInput).OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AudioBusPatchInput).PushCallsCounter = 0;
  this->InstanceID = 0;
  this->AudioBusId = 0;
  this->BlockSizeFrames = 0;
  this->bWasUnderrunReported = false;
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = -1.0;
  this->AudioDeviceId = 0xffffffff;
  this->AudioBusChannels = 0xffffffff;
  local_28.OperatorSettings = param_1->OperatorSettings;
  local_28.Environment = param_1->Environment;
  local_28.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)(param_3->AllocatorInstance).Data,
             param_3->ArrayNum);
  pFVar2 = (param_3->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// operator() @ 14b356150

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TAudioBusWriterOperator<1>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  uint uVar2;
  FNameEntryId FVar3;
  uint uVar4;
  int iVar5;
  FText *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  FName local_res10;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_18);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl((FString *)&local_28,L"Audio Bus Writer (%d)");
      TVar7.Reference = (ITextData *)L"";
      if (local_28.Flags != 0) {
        TVar7.Reference = local_28.TextData.Reference;
      }
      ::FName::FName(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
                      ::__l2::OperatorName,(wchar_t *)TVar7.Reference);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_28.TextData.Reference);
      }
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      ::FName::FName(&local_res10,L"");
      Metasound::FNodeClassName::FNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
                  ::__l2::ClassName,&Metasound::EngineNodes::Namespace,
                 &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
                  ::__l2::OperatorName,&local_res10);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  uVar4 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
          ::__l2::ClassName.Name.Number;
  FVar3.Value = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
                ::__l2::ClassName.Name.ComparisonIndex.Value;
  uVar2 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
          ::__l2::ClassName.Namespace.Number;
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
       ::__l2::ClassName.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = uVar2;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value = FVar3.Value;
  (__return_storage_ptr__->ClassName).Name.Number = uVar4;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<1>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  pIVar1 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar1 != local_18.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_18.TextData.Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_18.Flags;
  pFVar6 = FText::FText(&local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar6);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar7 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar7.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<1>::GetVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<1>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<1>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TAudioBusWriterOperator<1>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<1>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TAudioBusWriterOperator<1>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<1>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<1>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar5 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar8 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar5 == *piVar8) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar8);
  }
  pFVar9 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar5 + 1;
  pFVar9 = pFVar9 + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  TVar7 = Metasound::NodeCategories::Io.TextData;
  *(ITextData **)pFVar9 = Metasound::NodeCategories::Io.TextData.Reference;
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
  }
  *(uint *)(pFVar9 + 8) = Metasound::NodeCategories::Io.Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b356430

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TAudioBusWriterOperator<2>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  uint uVar2;
  FNameEntryId FVar3;
  uint uVar4;
  int iVar5;
  FText *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  FName local_res10;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_18);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl((FString *)&local_28,L"Audio Bus Writer (%d)");
      TVar7.Reference = (ITextData *)L"";
      if (local_28.Flags != 0) {
        TVar7.Reference = local_28.TextData.Reference;
      }
      ::FName::FName(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
                      ::__l2::OperatorName,(wchar_t *)TVar7.Reference);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_28.TextData.Reference);
      }
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      ::FName::FName(&local_res10,L"");
      Metasound::FNodeClassName::FNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
                  ::__l2::ClassName,&Metasound::EngineNodes::Namespace,
                 &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
                  ::__l2::OperatorName,&local_res10);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  uVar4 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
          ::__l2::ClassName.Name.Number;
  FVar3.Value = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
                ::__l2::ClassName.Name.ComparisonIndex.Value;
  uVar2 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
          ::__l2::ClassName.Namespace.Number;
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
       ::__l2::ClassName.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = uVar2;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value = FVar3.Value;
  (__return_storage_ptr__->ClassName).Name.Number = uVar4;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<2>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  pIVar1 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar1 != local_18.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_18.TextData.Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_18.Flags;
  pFVar6 = FText::FText(&local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar6);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar7 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar7.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<2>::GetVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<2>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<2>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TAudioBusWriterOperator<2>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<2>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TAudioBusWriterOperator<2>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<2>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<2>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar5 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar8 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar5 == *piVar8) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar8);
  }
  pFVar9 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar5 + 1;
  pFVar9 = pFVar9 + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  TVar7 = Metasound::NodeCategories::Io.TextData;
  *(ITextData **)pFVar9 = Metasound::NodeCategories::Io.TextData.Reference;
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
  }
  *(uint *)(pFVar9 + 8) = Metasound::NodeCategories::Io.Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b356710

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TAudioBusWriterOperator<4>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  uint uVar2;
  FNameEntryId FVar3;
  uint uVar4;
  int iVar5;
  FText *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  FName local_res10;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_18);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl((FString *)&local_28,L"Audio Bus Writer (%d)");
      TVar7.Reference = (ITextData *)L"";
      if (local_28.Flags != 0) {
        TVar7.Reference = local_28.TextData.Reference;
      }
      ::FName::FName(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
                      ::__l2::OperatorName,(wchar_t *)TVar7.Reference);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_28.TextData.Reference);
      }
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      ::FName::FName(&local_res10,L"");
      Metasound::FNodeClassName::FNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
                  ::__l2::ClassName,&Metasound::EngineNodes::Namespace,
                 &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
                  ::__l2::OperatorName,&local_res10);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  uVar4 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
          ::__l2::ClassName.Name.Number;
  FVar3.Value = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
                ::__l2::ClassName.Name.ComparisonIndex.Value;
  uVar2 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
          ::__l2::ClassName.Namespace.Number;
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
       ::__l2::ClassName.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = uVar2;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value = FVar3.Value;
  (__return_storage_ptr__->ClassName).Name.Number = uVar4;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<4>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  pIVar1 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar1 != local_18.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_18.TextData.Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_18.Flags;
  pFVar6 = FText::FText(&local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar6);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar7 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar7.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<4>::GetVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<4>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<4>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TAudioBusWriterOperator<4>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<4>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TAudioBusWriterOperator<4>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<4>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<4>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar5 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar8 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar5 == *piVar8) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar8);
  }
  pFVar9 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar5 + 1;
  pFVar9 = pFVar9 + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  TVar7 = Metasound::NodeCategories::Io.TextData;
  *(ITextData **)pFVar9 = Metasound::NodeCategories::Io.TextData.Reference;
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
  }
  *(uint *)(pFVar9 + 8) = Metasound::NodeCategories::Io.Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b3569f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TAudioBusWriterOperator<6>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  uint uVar2;
  FNameEntryId FVar3;
  uint uVar4;
  int iVar5;
  FText *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  FName local_res10;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_18);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl((FString *)&local_28,L"Audio Bus Writer (%d)");
      TVar7.Reference = (ITextData *)L"";
      if (local_28.Flags != 0) {
        TVar7.Reference = local_28.TextData.Reference;
      }
      ::FName::FName(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
                      ::__l2::OperatorName,(wchar_t *)TVar7.Reference);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_28.TextData.Reference);
      }
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      ::FName::FName(&local_res10,L"");
      Metasound::FNodeClassName::FNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
                  ::__l2::ClassName,&Metasound::EngineNodes::Namespace,
                 &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
                  ::__l2::OperatorName,&local_res10);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  uVar4 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
          ::__l2::ClassName.Name.Number;
  FVar3.Value = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
                ::__l2::ClassName.Name.ComparisonIndex.Value;
  uVar2 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
          ::__l2::ClassName.Namespace.Number;
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
       ::__l2::ClassName.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = uVar2;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value = FVar3.Value;
  (__return_storage_ptr__->ClassName).Name.Number = uVar4;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<6>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  pIVar1 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar1 != local_18.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_18.TextData.Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_18.Flags;
  pFVar6 = FText::FText(&local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar6);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar7 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar7.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<6>::GetVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<6>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<6>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TAudioBusWriterOperator<6>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<6>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TAudioBusWriterOperator<6>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<6>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<6>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar5 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar8 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar5 == *piVar8) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar8);
  }
  pFVar9 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar5 + 1;
  pFVar9 = pFVar9 + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  TVar7 = Metasound::NodeCategories::Io.TextData;
  *(ITextData **)pFVar9 = Metasound::NodeCategories::Io.TextData.Reference;
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
  }
  *(uint *)(pFVar9 + 8) = Metasound::NodeCategories::Io.Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b356cd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TAudioBusWriterOperator<8>::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  uint uVar2;
  FNameEntryId FVar3;
  uint uVar4;
  int iVar5;
  FText *pFVar6;
  TRefCountPtr<ITextData> TVar7;
  int *piVar8;
  FScriptContainerElement *pFVar9;
  FName local_res10;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_18);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::PrintfImpl((FString *)&local_28,L"Audio Bus Writer (%d)");
      TVar7.Reference = (ITextData *)L"";
      if (local_28.Flags != 0) {
        TVar7.Reference = local_28.TextData.Reference;
      }
      ::FName::FName(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
                      ::__l2::OperatorName,(wchar_t *)TVar7.Reference);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_28.TextData.Reference);
      }
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      ::FName::FName(&local_res10,L"");
      Metasound::FNodeClassName::FNodeClassName
                (&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
                  ::__l2::ClassName,&Metasound::EngineNodes::Namespace,
                 &`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
                  ::__l2::OperatorName,&local_res10);
      _Init_thread_footer(&`class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  uVar4 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
          ::__l2::ClassName.Name.Number;
  FVar3.Value = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
                ::__l2::ClassName.Name.ComparisonIndex.Value;
  uVar2 = `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
          ::__l2::ClassName.Namespace.Number;
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
       ::__l2::ClassName.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = uVar2;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value = FVar3.Value;
  (__return_storage_ptr__->ClassName).Name.Number = uVar4;
  (__return_storage_ptr__->ClassName).Variant =
       `class_Metasound::FNodeClassName_const&___ptr64___cdecl_Metasound::AudioBusWriterNode::GetClassName<8>(void)'
       ::__l2::ClassName.Variant;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  pIVar1 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar1 != local_18.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_18.TextData.Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_18.Flags;
  pFVar6 = FText::FText(&local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar6);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar7 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar1 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar1 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar7.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  if (*piVar8 < `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<8>::GetVertexInterface(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<8>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<8>::GetVertexInterface(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      TAudioBusWriterOperator<8>::GetVertexInterface'::__l2::<lambda_1>::operator()
                (&local_res10,
                 &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<8>::GetVertexInterface(void)'
                  ::__l2::Interface);
      atexit(TAudioBusWriterOperator<8>::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<8>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Metasound::FVertexInterface::operator=
            (&__return_storage_ptr__->DefaultInterface,
             &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<8>::GetVertexInterface(void)'
              ::__l2::Interface);
  iVar5 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar8 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar5 == *piVar8) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar8);
  }
  pFVar9 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar5 + 1;
  pFVar9 = pFVar9 + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  TVar7 = Metasound::NodeCategories::Io.TextData;
  *(ITextData **)pFVar9 = Metasound::NodeCategories::Io.TextData.Reference;
  if (TVar7.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar7.Reference + 8))(TVar7.Reference,&local_res10);
  }
  *(uint *)(pFVar9 + 8) = Metasound::NodeCategories::Io.Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b35a440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TAudioBusWriterOperator<1>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  undefined1 auStackY_168 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_128;
  FInputVertexInterface local_118;
  FName local_f8;
  FName local_f0;
  FString local_e8;
  FOutputVertexInterface local_d8;
  FString local_b8;
  FStringFormatArg local_a8;
  TInputDataVertex<Metasound::FAudioBusAsset> local_88;
  TInputDataVertex<Metasound::FAudioBuffer> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_118);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBusAsset>::
           TInputDataVertex<Metasound::FAudioBusAsset><>
                     (&local_88,&Metasound::AudioBusWriterNode::Inputs::AudioBusName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_118,pFVar3);
  if (0xc < (byte)local_88._48_1_) {
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
              ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
  FStringFormatArg::FStringFormatArg(&local_a8,0);
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_128.AllocatorInstance,1,&local_128.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_128.AllocatorInstance.Data,&local_a8,1);
  FLazyName::Resolve(&Metasound::AudioBusWriterNode::Inputs::AudioName);
  pFVar5 = ::FName::ToString(&local_f8,&local_b8);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  ::FString::FormatImpl(&local_e8,pwVar6,&local_128);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar7.Data = local_e8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_f0,(wchar_t *)FVar7.Data);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
           TInputDataVertex<Metasound::FAudioBuffer><>
                     (&local_50,&local_f0,&Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_118,pFVar3);
  if (0xc < (byte)local_50._48_1_) {
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
              ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if ((FStringFormatArg *)local_128.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
  }
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_d8);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_118,&local_d8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data,
             local_d8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_d8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_d8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data,
             local_118.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_118.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_118.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_118._padding_,(int)local_118._padding_);
  if ((FInputDataVertex *)local_118._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_118._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b35a6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TAudioBusWriterOperator<2>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStackY_178 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  FInputVertexInterface local_128;
  FName local_108;
  FName local_100;
  FString local_f8;
  FOutputVertexInterface local_e8;
  FString local_c8;
  FStringFormatArg local_b8;
  TInputDataVertex<Metasound::FAudioBusAsset> local_98;
  TInputDataVertex<Metasound::FAudioBuffer> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBusAsset>::
           TInputDataVertex<Metasound::FAudioBusAsset><>
                     (&local_98,&Metasound::AudioBusWriterNode::Inputs::AudioBusName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar8 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_b8,uVar8);
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_138.AllocatorInstance.Data,&local_b8,1);
    FLazyName::Resolve(&Metasound::AudioBusWriterNode::Inputs::AudioName);
    pFVar5 = ::FName::ToString(&local_108,&local_c8);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_f8,pwVar6,&local_138);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar7.Data = local_f8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_100,(wchar_t *)FVar7.Data);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_60,&local_100,&Metasound::FDataVertexMetadata::EmptyBasic);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar9 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar9])(&local_60.field_0x20);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
    if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_e8);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_e8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_e8.SubInterfaces.AllocatorInstance.Data,
             local_e8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_e8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_e8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b35a9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TAudioBusWriterOperator<4>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStackY_178 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  FInputVertexInterface local_128;
  FName local_108;
  FName local_100;
  FString local_f8;
  FOutputVertexInterface local_e8;
  FString local_c8;
  FStringFormatArg local_b8;
  TInputDataVertex<Metasound::FAudioBusAsset> local_98;
  TInputDataVertex<Metasound::FAudioBuffer> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBusAsset>::
           TInputDataVertex<Metasound::FAudioBusAsset><>
                     (&local_98,&Metasound::AudioBusWriterNode::Inputs::AudioBusName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar8 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_b8,uVar8);
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_138.AllocatorInstance.Data,&local_b8,1);
    FLazyName::Resolve(&Metasound::AudioBusWriterNode::Inputs::AudioName);
    pFVar5 = ::FName::ToString(&local_108,&local_c8);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_f8,pwVar6,&local_138);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar7.Data = local_f8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_100,(wchar_t *)FVar7.Data);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_60,&local_100,&Metasound::FDataVertexMetadata::EmptyBasic);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar9 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar9])(&local_60.field_0x20);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
    if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_e8);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_e8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_e8.SubInterfaces.AllocatorInstance.Data,
             local_e8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_e8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_e8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b35ac70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TAudioBusWriterOperator<6>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStackY_178 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  FInputVertexInterface local_128;
  FName local_108;
  FName local_100;
  FString local_f8;
  FOutputVertexInterface local_e8;
  FString local_c8;
  FStringFormatArg local_b8;
  TInputDataVertex<Metasound::FAudioBusAsset> local_98;
  TInputDataVertex<Metasound::FAudioBuffer> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBusAsset>::
           TInputDataVertex<Metasound::FAudioBusAsset><>
                     (&local_98,&Metasound::AudioBusWriterNode::Inputs::AudioBusName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar8 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_b8,uVar8);
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_138.AllocatorInstance.Data,&local_b8,1);
    FLazyName::Resolve(&Metasound::AudioBusWriterNode::Inputs::AudioName);
    pFVar5 = ::FName::ToString(&local_108,&local_c8);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_f8,pwVar6,&local_138);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar7.Data = local_f8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_100,(wchar_t *)FVar7.Data);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_60,&local_100,&Metasound::FDataVertexMetadata::EmptyBasic);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar9 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar9])(&local_60.field_0x20);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
    if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 6);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_e8);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_e8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_e8.SubInterfaces.AllocatorInstance.Data,
             local_e8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_e8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_e8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// operator() @ 14b35af30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __thiscall
`Metasound::TAudioBusWriterOperator<8>::GetVertexInterface'::__l2::<lambda_1>::operator()
          (void *this,FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FVertexInterface *pFVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStackY_178 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  FInputVertexInterface local_128;
  FName local_108;
  FName local_100;
  FString local_f8;
  FOutputVertexInterface local_e8;
  FString local_c8;
  FStringFormatArg local_b8;
  TInputDataVertex<Metasound::FAudioBusAsset> local_98;
  TInputDataVertex<Metasound::FAudioBuffer> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  Metasound::FInputVertexInterface::FInputVertexInterface(&local_128);
  pFVar3 = (FInputDataVertex *)
           Metasound::TInputDataVertex<Metasound::FAudioBusAsset>::
           TInputDataVertex<Metasound::FAudioBusAsset><>
                     (&local_98,&Metasound::AudioBusWriterNode::Inputs::AudioBusName,
                      &Metasound::FDataVertexMetadata::EmptyBasic);
  Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
            ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
  if (0xc < (byte)local_98._48_1_) {
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
              ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
  uVar8 = 0;
  do {
    FStringFormatArg::FStringFormatArg(&local_b8,uVar8);
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_138.AllocatorInstance.Data,&local_b8,1);
    FLazyName::Resolve(&Metasound::AudioBusWriterNode::Inputs::AudioName);
    pFVar5 = ::FName::ToString(&local_108,&local_c8);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_f8,pwVar6,&local_138);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar7.Data = local_f8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_100,(wchar_t *)FVar7.Data);
    pFVar3 = (FInputDataVertex *)
             Metasound::TInputDataVertex<Metasound::FAudioBuffer>::
             TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_60,&local_100,&Metasound::FDataVertexMetadata::EmptyBasic);
    Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::AddOrUpdateVertex
              ((TVertexInterfaceImpl<Metasound::FInputDataVertex> *)&local_128,pFVar3);
    uVar9 = (ulonglong)(byte)local_60._48_1_;
    if (0xc < (byte)local_60._48_1_) {
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
                ::__l2::Destructors)[uVar9])(&local_60.field_0x20);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
    if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 8);
  Metasound::FOutputVertexInterface::FOutputVertexInterface(&local_e8);
  Metasound::FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_128,&local_e8);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_e8.SubInterfaces.AllocatorInstance.Data,
             local_e8.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_e8.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_e8.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._padding_);
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data,
             local_128.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_128.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_128.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_128._padding_,(int)local_128._padding_);
  if ((FInputDataVertex *)local_128._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_128._padding_);
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b37fdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TAudioBusWriterOperator<1>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar1;
  IMetasoundEnvironmentVariable *pIVar2;
  FOperatorSettings *pFVar3;
  FInputVertexInterfaceData *this;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar8;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar9;
  void *pvVar10;
  void *pvVar11;
  FString *pFVar12;
  FInputBinding *pFVar13;
  FLiteral *pFVar14;
  code *pcVar15;
  TAudioBusWriterOperator<1> *this_00;
  TAudioBusWriterOperator<1> *pTVar16;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar17;
  wchar_t *pwVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_228 [32];
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  FString local_1c8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1b8;
  FName local_1a8;
  undefined1 local_1a0 [32];
  FName local_180;
  FInputVertexInterfaceData *local_178;
  FName local_170;
  FString local_168;
  FString local_158;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  undefined **local_d8 [2];
  TReferenceControllerBase<0> *local_c8;
  FStringFormatArg local_b8;
  undefined1 local_98 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_78;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  local_178 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar4 = false;
  }
  else {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar15 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar15)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar4 = pvVar10 == pvVar11;
  }
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar15 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar15)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar5 = pvVar10 == pvVar11;
  }
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
  bVar6 = false;
  if (pTVar8 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar15 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar15)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar6 = pvVar10 == pvVar11;
  }
  if (!(bool)(bVar5 & bVar4 & bVar6)) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&Frontend::SourceInterface::Environment::TransmitterID,&local_e8);
      ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_f8
                       );
      ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_108);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::TAudioBusWriterOperator<1>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    param_1->Node = (INode *)0x0;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioBusName);
  this = local_178;
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset>
            (local_178,(TDataReadReference<Metasound::FAudioBusAsset> *)local_98,&local_180,pFVar3);
  pFVar3 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  pTVar16 = (TAudioBusWriterOperator<1> *)0x0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0 = 0;
  FStringFormatArg::FStringFormatArg(&local_b8,0);
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_1b8.AllocatorInstance.Data,&local_b8,1);
  FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioName);
  pFVar12 = ::FName::ToString(&local_170,&local_128);
  if ((pFVar12->Data).ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
  ::FString::FormatImpl(&local_168,pwVar18,&local_1b8);
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar19.Data = local_168.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_1a8,(wchar_t *)FVar19.Data);
  pFVar13 = FInputVertexInterfaceData::Find(this,&local_1a8);
  if (pFVar13 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&local_1a8,&local_138);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
    pFVar14 = FLiteral::CreateInvalid((FLiteral *)&local_60);
    TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
    ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_1a0,pFVar3,pFVar14);
    if ((0xc < local_60.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar15 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar15)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pcVar15 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_60.TypeIndex];
    pTVar17 = &local_60;
LAB_14b3801b6:
    (*pcVar15)(pTVar17);
  }
  else {
    if ((pFVar13->Data).bIsSet == false) {
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
      ::
      TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                (&local_78,&(pFVar13->Vertex).Literal.Value);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs
                ((TDataReadReference<Metasound::FAudioBuffer> *)local_1a0,pFVar3,
                 (FLiteral *)&local_78);
      if ((0xc < local_78.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar15 = (code *)swi(3);
        TVar9.Ptr = (IOperator *)(*pcVar15)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
      }
      pcVar15 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[local_78.TypeIndex];
      pTVar17 = &local_78;
      goto LAB_14b3801b6;
    }
    if (((pFVar13->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar15 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar15)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (&(pFVar13->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_1a0)
    ;
  }
  if (((local_1d8.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_1a0) &&
      ((FScriptContainerElement *)local_1a0 < local_1d8.Data + (longlong)local_1d0._4_4_ * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar15 = (code *)swi(3);
    TVar9.Ptr = (IOperator *)(*pcVar15)();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
  }
  iVar7 = (int)local_1d0;
  if ((int)local_1d0 == local_1d0._4_4_) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_1d8,(int *)((longlong)&local_1d0 + 4));
  }
  local_1d0 = CONCAT44(local_1d0._4_4_,iVar7 + 1);
  pFVar20 = local_1d8.Data + (longlong)iVar7 * 0x20;
  *(undefined ***)pFVar20 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar20 + 8) = local_1a0._8_8_;
  *(undefined8 *)(pFVar20 + 0x10) = local_1a0._16_8_;
  if ((TReferenceControllerBase<0> *)local_1a0._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_1a0._16_8_ + 8) = *(int *)(local_1a0._16_8_ + 8) + 1;
  }
  *(undefined ***)pFVar20 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_1a0._16_8_);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
  if ((FStringFormatArg *)local_1b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
  }
  pTVar1 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::GraphName);
  if (pTVar8 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar8 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::GraphName);
    if ((pTVar8 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar15 = (code *)swi(3);
      TVar9.Ptr = (IOperator *)(*pcVar15)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar9.Ptr;
    }
    pIVar2 = pTVar8->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    if (pvVar10 == pvVar11) {
      pFVar12 = FMetasoundEnvironment::GetValue<FString>
                          (*(FMetasoundEnvironment **)&(param_2->InternalDataReferences).field_0x8,
                           &local_118,&Frontend::SourceInterface::Environment::GraphName);
      if (&local_1c8 != pFVar12) {
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        local_1c8.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
        (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8.Data.ArrayNum = (pFVar12->Data).ArrayNum;
        local_1c8.Data.ArrayMax = (pFVar12->Data).ArrayMax;
        (pFVar12->Data).ArrayNum = 0;
        (pFVar12->Data).ArrayMax = 0;
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      goto LAB_14b3803ca;
    }
  }
  ::FString::operator=(&local_1c8,L"<Unknown>");
LAB_14b3803ca:
  this_00 = ::operator_new(0x90);
  if (this_00 != (TAudioBusWriterOperator<1> *)0x0) {
    local_158.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
    local_158.Data.ArrayNum = local_1c8.Data.ArrayNum;
    local_158.Data.ArrayMax = local_1c8.Data.ArrayMax;
    local_148.AllocatorInstance.Data = local_1d8.Data;
    local_148.ArrayNum = (int)local_1d0;
    local_148.ArrayMax = local_1d0._4_4_;
    local_d8[1] = (undefined **)local_98._8_8_;
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Data.ArrayNum = 0;
    local_1c8.Data.ArrayMax = 0;
    local_1d8.Data = (FScriptContainerElement *)0x0;
    local_1d0 = 0;
    local_c8 = (TReferenceControllerBase<0> *)local_98._16_8_;
    if ((TReferenceControllerBase<0> *)local_98._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_98._16_8_ + 8) = *(int *)(local_98._16_8_ + 8) + 1;
    }
    local_d8[0] = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
    pTVar16 = TAudioBusWriterOperator<1>
                        (this_00,(FBuildOperatorParams *)param_2,
                         (TDataReadReference<Metasound::FAudioBusAsset> *)local_d8,&local_148,
                         &local_158);
  }
  param_1->Node = (INode *)pTVar16;
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)local_1d8.Data,(int)local_1d0);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)local_1d8.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_1d8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b380580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TAudioBusWriterOperator<2>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar2;
  IMetasoundEnvironmentVariable *pIVar3;
  FOperatorSettings *pFVar4;
  code *pcVar5;
  FInputVertexInterfaceData *this;
  FBuildOperatorParams *pFVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar11;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar12;
  void *pvVar13;
  void *pvVar14;
  FString *pFVar15;
  FInputBinding *pFVar16;
  FLiteral *pFVar17;
  TAudioBusWriterOperator<2> *pTVar18;
  TAudioBusWriterOperator<2> *pTVar19;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar20;
  wchar_t *pwVar21;
  ForAnyElementType FVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  undefined1 auStackY_228 [32];
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  FString local_1c8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1b8;
  FName local_1a8;
  undefined1 local_1a0 [32];
  FName local_180;
  FInputVertexInterfaceData *local_178;
  FName local_170;
  FBuildOperatorParams *local_168;
  FString local_160;
  FString local_150;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  undefined **local_d0 [2];
  TReferenceControllerBase<0> *local_c0;
  FStringFormatArg local_b0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  local_178 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_168 = param_1;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar11 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar7 = false;
  }
  else {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar7 = pvVar13 == pvVar14;
  }
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar11 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar8 = false;
  }
  else {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar8 = pvVar13 == pvVar14;
  }
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
  bVar9 = false;
  if (pTVar11 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar9 = pvVar13 == pvVar14;
  }
  if (!(bool)(bVar8 & bVar7 & bVar9)) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&Frontend::SourceInterface::Environment::TransmitterID,&local_e0);
      ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_f0
                       );
      ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_100);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::TAudioBusWriterOperator<2>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
    param_1->Node = (INode *)0x0;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioBusName);
  this = local_178;
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset>
            (local_178,(TDataReadReference<Metasound::FAudioBusAsset> *)local_90,&local_180,pFVar4);
  pTVar19 = (TAudioBusWriterOperator<2> *)0x0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0 = 0;
  pTVar18 = pTVar19;
  do {
    pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FStringFormatArg::FStringFormatArg(&local_b0,(int)pTVar18);
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1b8.AllocatorInstance.Data,&local_b0,1);
    FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioName);
    pFVar15 = ::FName::ToString(&local_170,&local_120);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_160,pwVar21,&local_1b8);
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_160.Data.ArrayNum != 0) {
      FVar22.Data = local_160.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_1a8,(wchar_t *)FVar22.Data);
    pFVar16 = FInputVertexInterfaceData::Find(this,&local_1a8);
    if (pFVar16 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_1a8,&local_130);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      pFVar17 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_1a0,pFVar4,pFVar17);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        TVar12.Ptr = (IOperator *)(*pcVar5)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
      }
      pTVar20 = &local_58;
LAB_14b38096d:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar20);
    }
    else {
      if ((pFVar16->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar16->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_1a0,pFVar4,
                   (FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          TVar12.Ptr = (IOperator *)(*pcVar5)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
        }
        pTVar20 = &local_70;
        goto LAB_14b38096d;
      }
      if (((pFVar16->Data).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        TVar12.Ptr = (IOperator *)(*pcVar5)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar16->Data).TypedValue,
                 (TDataReadReference<Metasound::FAudioBuffer> *)local_1a0);
    }
    if (((local_1d8.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_1a0) &&
        ((FScriptContainerElement *)local_1a0 < local_1d8.Data + (longlong)local_1d0._4_4_ * 0x20))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    iVar10 = (int)local_1d0;
    if ((int)local_1d0 == local_1d0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_1d8,(int *)((longlong)&local_1d0 + 4));
    }
    local_1d0 = CONCAT44(local_1d0._4_4_,iVar10 + 1);
    pFVar23 = local_1d8.Data + (longlong)iVar10 * 0x20;
    *(undefined ***)pFVar23 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar23 + 8) = local_1a0._8_8_;
    *(undefined8 *)(pFVar23 + 0x10) = local_1a0._16_8_;
    if ((TReferenceControllerBase<0> *)local_1a0._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_1a0._16_8_ + 8) = *(int *)(local_1a0._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar23 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_1a0._16_8_);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
    if ((FStringFormatArg *)local_1b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    if (local_b0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.StringValue.Data.AllocatorInstance.Data);
    }
    uVar24 = (int)pTVar18 + 1;
    pTVar18 = (TAudioBusWriterOperator<2> *)(ulonglong)uVar24;
  } while (uVar24 < 2);
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::GraphName);
  pFVar6 = local_168;
  if (pTVar11 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::GraphName);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    if (pvVar13 == pvVar14) {
      pFVar15 = FMetasoundEnvironment::GetValue<FString>
                          (*(FMetasoundEnvironment **)&(param_2->InternalDataReferences).field_0x8,
                           &local_110,&Frontend::SourceInterface::Environment::GraphName);
      if (&local_1c8 != pFVar15) {
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        local_1c8.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
        (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8.Data.ArrayNum = (pFVar15->Data).ArrayNum;
        local_1c8.Data.ArrayMax = (pFVar15->Data).ArrayMax;
        (pFVar15->Data).ArrayNum = 0;
        (pFVar15->Data).ArrayMax = 0;
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      goto LAB_14b380b96;
    }
  }
  ::FString::operator=(&local_1c8,L"<Unknown>");
LAB_14b380b96:
  pTVar18 = ::operator_new(0x90);
  if (pTVar18 != (TAudioBusWriterOperator<2> *)0x0) {
    local_150.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
    local_150.Data.ArrayNum = local_1c8.Data.ArrayNum;
    local_150.Data.ArrayMax = local_1c8.Data.ArrayMax;
    local_140.AllocatorInstance.Data = local_1d8.Data;
    local_140.ArrayNum = (int)local_1d0;
    local_140.ArrayMax = local_1d0._4_4_;
    local_d0[1] = (undefined **)local_90._8_8_;
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Data.ArrayNum = 0;
    local_1c8.Data.ArrayMax = 0;
    local_1d8.Data = (FScriptContainerElement *)0x0;
    local_1d0 = 0;
    local_c0 = (TReferenceControllerBase<0> *)local_90._16_8_;
    if ((TReferenceControllerBase<0> *)local_90._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_90._16_8_ + 8) = *(int *)(local_90._16_8_ + 8) + 1;
    }
    local_d0[0] = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
    pTVar19 = TAudioBusWriterOperator<2>
                        (pTVar18,(FBuildOperatorParams *)param_2,
                         (TDataReadReference<Metasound::FAudioBusAsset> *)local_d0,&local_140,
                         &local_150);
  }
  pFVar6->Node = (INode *)pTVar19;
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)local_1d8.Data,(int)local_1d0);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)local_1d8.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_1d8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_90._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)(IOperator *)pFVar6
  ;
}

// CreateOperator @ 14b380d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TAudioBusWriterOperator<4>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar2;
  IMetasoundEnvironmentVariable *pIVar3;
  FOperatorSettings *pFVar4;
  code *pcVar5;
  FInputVertexInterfaceData *this;
  FBuildOperatorParams *pFVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar11;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar12;
  void *pvVar13;
  void *pvVar14;
  FString *pFVar15;
  FInputBinding *pFVar16;
  FLiteral *pFVar17;
  TAudioBusWriterOperator<4> *pTVar18;
  TAudioBusWriterOperator<4> *pTVar19;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar20;
  wchar_t *pwVar21;
  ForAnyElementType FVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  undefined1 auStackY_228 [32];
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  FString local_1c8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1b8;
  FName local_1a8;
  undefined1 local_1a0 [32];
  FName local_180;
  FInputVertexInterfaceData *local_178;
  FName local_170;
  FBuildOperatorParams *local_168;
  FString local_160;
  FString local_150;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  undefined **local_d0 [2];
  TReferenceControllerBase<0> *local_c0;
  FStringFormatArg local_b0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  local_178 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_168 = param_1;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar11 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar7 = false;
  }
  else {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar7 = pvVar13 == pvVar14;
  }
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar11 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar8 = false;
  }
  else {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar8 = pvVar13 == pvVar14;
  }
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
  bVar9 = false;
  if (pTVar11 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar9 = pvVar13 == pvVar14;
  }
  if (!(bool)(bVar8 & bVar7 & bVar9)) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&Frontend::SourceInterface::Environment::TransmitterID,&local_e0);
      ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_f0
                       );
      ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_100);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::TAudioBusWriterOperator<4>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
    param_1->Node = (INode *)0x0;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioBusName);
  this = local_178;
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset>
            (local_178,(TDataReadReference<Metasound::FAudioBusAsset> *)local_90,&local_180,pFVar4);
  pTVar19 = (TAudioBusWriterOperator<4> *)0x0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0 = 0;
  pTVar18 = pTVar19;
  do {
    pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FStringFormatArg::FStringFormatArg(&local_b0,(int)pTVar18);
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1b8.AllocatorInstance.Data,&local_b0,1);
    FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioName);
    pFVar15 = ::FName::ToString(&local_170,&local_120);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_160,pwVar21,&local_1b8);
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_160.Data.ArrayNum != 0) {
      FVar22.Data = local_160.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_1a8,(wchar_t *)FVar22.Data);
    pFVar16 = FInputVertexInterfaceData::Find(this,&local_1a8);
    if (pFVar16 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_1a8,&local_130);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      pFVar17 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_1a0,pFVar4,pFVar17);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        TVar12.Ptr = (IOperator *)(*pcVar5)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
      }
      pTVar20 = &local_58;
LAB_14b38114d:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar20);
    }
    else {
      if ((pFVar16->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar16->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_1a0,pFVar4,
                   (FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          TVar12.Ptr = (IOperator *)(*pcVar5)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
        }
        pTVar20 = &local_70;
        goto LAB_14b38114d;
      }
      if (((pFVar16->Data).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        TVar12.Ptr = (IOperator *)(*pcVar5)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar16->Data).TypedValue,
                 (TDataReadReference<Metasound::FAudioBuffer> *)local_1a0);
    }
    if (((local_1d8.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_1a0) &&
        ((FScriptContainerElement *)local_1a0 < local_1d8.Data + (longlong)local_1d0._4_4_ * 0x20))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    iVar10 = (int)local_1d0;
    if ((int)local_1d0 == local_1d0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_1d8,(int *)((longlong)&local_1d0 + 4));
    }
    local_1d0 = CONCAT44(local_1d0._4_4_,iVar10 + 1);
    pFVar23 = local_1d8.Data + (longlong)iVar10 * 0x20;
    *(undefined ***)pFVar23 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar23 + 8) = local_1a0._8_8_;
    *(undefined8 *)(pFVar23 + 0x10) = local_1a0._16_8_;
    if ((TReferenceControllerBase<0> *)local_1a0._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_1a0._16_8_ + 8) = *(int *)(local_1a0._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar23 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_1a0._16_8_);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
    if ((FStringFormatArg *)local_1b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    if (local_b0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.StringValue.Data.AllocatorInstance.Data);
    }
    uVar24 = (int)pTVar18 + 1;
    pTVar18 = (TAudioBusWriterOperator<4> *)(ulonglong)uVar24;
  } while (uVar24 < 4);
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::GraphName);
  pFVar6 = local_168;
  if (pTVar11 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::GraphName);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    if (pvVar13 == pvVar14) {
      pFVar15 = FMetasoundEnvironment::GetValue<FString>
                          (*(FMetasoundEnvironment **)&(param_2->InternalDataReferences).field_0x8,
                           &local_110,&Frontend::SourceInterface::Environment::GraphName);
      if (&local_1c8 != pFVar15) {
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        local_1c8.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
        (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8.Data.ArrayNum = (pFVar15->Data).ArrayNum;
        local_1c8.Data.ArrayMax = (pFVar15->Data).ArrayMax;
        (pFVar15->Data).ArrayNum = 0;
        (pFVar15->Data).ArrayMax = 0;
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      goto LAB_14b381376;
    }
  }
  ::FString::operator=(&local_1c8,L"<Unknown>");
LAB_14b381376:
  pTVar18 = ::operator_new(0x90);
  if (pTVar18 != (TAudioBusWriterOperator<4> *)0x0) {
    local_150.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
    local_150.Data.ArrayNum = local_1c8.Data.ArrayNum;
    local_150.Data.ArrayMax = local_1c8.Data.ArrayMax;
    local_140.AllocatorInstance.Data = local_1d8.Data;
    local_140.ArrayNum = (int)local_1d0;
    local_140.ArrayMax = local_1d0._4_4_;
    local_d0[1] = (undefined **)local_90._8_8_;
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Data.ArrayNum = 0;
    local_1c8.Data.ArrayMax = 0;
    local_1d8.Data = (FScriptContainerElement *)0x0;
    local_1d0 = 0;
    local_c0 = (TReferenceControllerBase<0> *)local_90._16_8_;
    if ((TReferenceControllerBase<0> *)local_90._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_90._16_8_ + 8) = *(int *)(local_90._16_8_ + 8) + 1;
    }
    local_d0[0] = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
    pTVar19 = TAudioBusWriterOperator<4>
                        (pTVar18,(FBuildOperatorParams *)param_2,
                         (TDataReadReference<Metasound::FAudioBusAsset> *)local_d0,&local_140,
                         &local_150);
  }
  pFVar6->Node = (INode *)pTVar19;
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)local_1d8.Data,(int)local_1d0);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)local_1d8.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_1d8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_90._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)(IOperator *)pFVar6
  ;
}

// CreateOperator @ 14b381540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TAudioBusWriterOperator<6>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar2;
  IMetasoundEnvironmentVariable *pIVar3;
  FOperatorSettings *pFVar4;
  code *pcVar5;
  FInputVertexInterfaceData *this;
  FBuildOperatorParams *pFVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar11;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar12;
  void *pvVar13;
  void *pvVar14;
  FString *pFVar15;
  FInputBinding *pFVar16;
  FLiteral *pFVar17;
  TAudioBusWriterOperator<6> *pTVar18;
  TAudioBusWriterOperator<6> *pTVar19;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar20;
  wchar_t *pwVar21;
  ForAnyElementType FVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  undefined1 auStackY_228 [32];
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  FString local_1c8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1b8;
  FName local_1a8;
  undefined1 local_1a0 [32];
  FName local_180;
  FInputVertexInterfaceData *local_178;
  FName local_170;
  FBuildOperatorParams *local_168;
  FString local_160;
  FString local_150;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  undefined **local_d0 [2];
  TReferenceControllerBase<0> *local_c0;
  FStringFormatArg local_b0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  local_178 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_168 = param_1;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar11 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar7 = false;
  }
  else {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar7 = pvVar13 == pvVar14;
  }
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar11 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar8 = false;
  }
  else {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar8 = pvVar13 == pvVar14;
  }
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
  bVar9 = false;
  if (pTVar11 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar9 = pvVar13 == pvVar14;
  }
  if (!(bool)(bVar8 & bVar7 & bVar9)) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&Frontend::SourceInterface::Environment::TransmitterID,&local_e0);
      ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_f0
                       );
      ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_100);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::TAudioBusWriterOperator<6>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
    param_1->Node = (INode *)0x0;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioBusName);
  this = local_178;
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset>
            (local_178,(TDataReadReference<Metasound::FAudioBusAsset> *)local_90,&local_180,pFVar4);
  pTVar19 = (TAudioBusWriterOperator<6> *)0x0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0 = 0;
  pTVar18 = pTVar19;
  do {
    pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FStringFormatArg::FStringFormatArg(&local_b0,(int)pTVar18);
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1b8.AllocatorInstance.Data,&local_b0,1);
    FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioName);
    pFVar15 = ::FName::ToString(&local_170,&local_120);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_160,pwVar21,&local_1b8);
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_160.Data.ArrayNum != 0) {
      FVar22.Data = local_160.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_1a8,(wchar_t *)FVar22.Data);
    pFVar16 = FInputVertexInterfaceData::Find(this,&local_1a8);
    if (pFVar16 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_1a8,&local_130);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      pFVar17 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_1a0,pFVar4,pFVar17);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        TVar12.Ptr = (IOperator *)(*pcVar5)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
      }
      pTVar20 = &local_58;
LAB_14b38192d:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar20);
    }
    else {
      if ((pFVar16->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar16->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_1a0,pFVar4,
                   (FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          TVar12.Ptr = (IOperator *)(*pcVar5)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
        }
        pTVar20 = &local_70;
        goto LAB_14b38192d;
      }
      if (((pFVar16->Data).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        TVar12.Ptr = (IOperator *)(*pcVar5)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar16->Data).TypedValue,
                 (TDataReadReference<Metasound::FAudioBuffer> *)local_1a0);
    }
    if (((local_1d8.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_1a0) &&
        ((FScriptContainerElement *)local_1a0 < local_1d8.Data + (longlong)local_1d0._4_4_ * 0x20))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    iVar10 = (int)local_1d0;
    if ((int)local_1d0 == local_1d0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_1d8,(int *)((longlong)&local_1d0 + 4));
    }
    local_1d0 = CONCAT44(local_1d0._4_4_,iVar10 + 1);
    pFVar23 = local_1d8.Data + (longlong)iVar10 * 0x20;
    *(undefined ***)pFVar23 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar23 + 8) = local_1a0._8_8_;
    *(undefined8 *)(pFVar23 + 0x10) = local_1a0._16_8_;
    if ((TReferenceControllerBase<0> *)local_1a0._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_1a0._16_8_ + 8) = *(int *)(local_1a0._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar23 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_1a0._16_8_);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
    if ((FStringFormatArg *)local_1b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    if (local_b0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.StringValue.Data.AllocatorInstance.Data);
    }
    uVar24 = (int)pTVar18 + 1;
    pTVar18 = (TAudioBusWriterOperator<6> *)(ulonglong)uVar24;
  } while (uVar24 < 6);
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::GraphName);
  pFVar6 = local_168;
  if (pTVar11 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::GraphName);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    if (pvVar13 == pvVar14) {
      pFVar15 = FMetasoundEnvironment::GetValue<FString>
                          (*(FMetasoundEnvironment **)&(param_2->InternalDataReferences).field_0x8,
                           &local_110,&Frontend::SourceInterface::Environment::GraphName);
      if (&local_1c8 != pFVar15) {
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        local_1c8.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
        (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8.Data.ArrayNum = (pFVar15->Data).ArrayNum;
        local_1c8.Data.ArrayMax = (pFVar15->Data).ArrayMax;
        (pFVar15->Data).ArrayNum = 0;
        (pFVar15->Data).ArrayMax = 0;
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      goto LAB_14b381b56;
    }
  }
  ::FString::operator=(&local_1c8,L"<Unknown>");
LAB_14b381b56:
  pTVar18 = ::operator_new(0x90);
  if (pTVar18 != (TAudioBusWriterOperator<6> *)0x0) {
    local_150.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
    local_150.Data.ArrayNum = local_1c8.Data.ArrayNum;
    local_150.Data.ArrayMax = local_1c8.Data.ArrayMax;
    local_140.AllocatorInstance.Data = local_1d8.Data;
    local_140.ArrayNum = (int)local_1d0;
    local_140.ArrayMax = local_1d0._4_4_;
    local_d0[1] = (undefined **)local_90._8_8_;
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Data.ArrayNum = 0;
    local_1c8.Data.ArrayMax = 0;
    local_1d8.Data = (FScriptContainerElement *)0x0;
    local_1d0 = 0;
    local_c0 = (TReferenceControllerBase<0> *)local_90._16_8_;
    if ((TReferenceControllerBase<0> *)local_90._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_90._16_8_ + 8) = *(int *)(local_90._16_8_ + 8) + 1;
    }
    local_d0[0] = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
    pTVar19 = TAudioBusWriterOperator<6>
                        (pTVar18,(FBuildOperatorParams *)param_2,
                         (TDataReadReference<Metasound::FAudioBusAsset> *)local_d0,&local_140,
                         &local_150);
  }
  pFVar6->Node = (INode *)pTVar19;
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)local_1d8.Data,(int)local_1d0);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)local_1d8.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_1d8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_90._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)(IOperator *)pFVar6
  ;
}

// CreateOperator @ 14b381d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TAudioBusWriterOperator<8>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  byte bVar1;
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar2;
  IMetasoundEnvironmentVariable *pIVar3;
  FOperatorSettings *pFVar4;
  code *pcVar5;
  FInputVertexInterfaceData *this;
  FBuildOperatorParams *pFVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar11;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar12;
  void *pvVar13;
  void *pvVar14;
  FString *pFVar15;
  FInputBinding *pFVar16;
  FLiteral *pFVar17;
  TAudioBusWriterOperator<8> *pTVar18;
  TAudioBusWriterOperator<8> *pTVar19;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar20;
  wchar_t *pwVar21;
  ForAnyElementType FVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  undefined1 auStackY_228 [32];
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  FString local_1c8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1b8;
  FName local_1a8;
  undefined1 local_1a0 [32];
  FName local_180;
  FInputVertexInterfaceData *local_178;
  FName local_170;
  FBuildOperatorParams *local_168;
  FString local_160;
  FString local_150;
  TArray<Metasound::TDataReadReference<Metasound::FAudioBuffer>,TSizedDefaultAllocator<32>_>
  local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  undefined **local_d0 [2];
  TReferenceControllerBase<0> *local_c0;
  FStringFormatArg local_b0;
  undefined1 local_90 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_70;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  local_178 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_168 = param_1;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar11 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar7 = false;
  }
  else {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar7 = pvVar13 == pvVar14;
  }
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar11 ==
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    bVar8 = false;
  }
  else {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar8 = pvVar13 == pvVar14;
  }
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
  bVar9 = false;
  if (pTVar11 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    bVar9 = pvVar13 == pvVar14;
  }
  if (!(bool)(bVar8 & bVar7 & bVar9)) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&Frontend::SourceInterface::Environment::TransmitterID,&local_e0);
      ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_f0
                       );
      ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_100);
      UE::Logging::Private::BasicLog<3>
                (&`public:_static_class_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>___cdecl_Metasound::TAudioBusWriterOperator<8>::CreateOperator(Metasound::FBuildOperatorParams_const&___ptr64,Metasound::FBuildResults&___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
    param_1->Node = (INode *)0x0;
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioBusName);
  this = local_178;
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBusAsset>
            (local_178,(TDataReadReference<Metasound::FAudioBusAsset> *)local_90,&local_180,pFVar4);
  pTVar19 = (TAudioBusWriterOperator<8> *)0x0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0 = 0;
  pTVar18 = pTVar19;
  do {
    pFVar4 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
    FStringFormatArg::FStringFormatArg(&local_b0,(int)pTVar18);
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_1b8.AllocatorInstance.Data,&local_b0,1);
    FLazyName::Resolve(&AudioBusWriterNode::Inputs::AudioName);
    pFVar15 = ::FName::ToString(&local_170,&local_120);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    ::FString::FormatImpl(&local_160,pwVar21,&local_1b8);
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_160.Data.ArrayNum != 0) {
      FVar22.Data = local_160.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_1a8,(wchar_t *)FVar22.Data);
    pFVar16 = FInputVertexInterfaceData::Find(this,&local_1a8);
    if (pFVar16 == (FInputBinding *)0x0) {
      if (2 < (byte)LogMetaSound._0_1_) {
        ::FName::ToString(&local_1a8,&local_130);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_class_Metasound::TDataReadReference<Metasound::FAudioBuffer>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
      }
      pFVar17 = FLiteral::CreateInvalid((FLiteral *)&local_58);
      TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
      ::CreateExplicitArgs((TDataReadReference<Metasound::FAudioBuffer> *)local_1a0,pFVar4,pFVar17);
      bVar1 = local_58.TypeIndex;
      if ((0xc < local_58.TypeIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        TVar12.Ptr = (IOperator *)(*pcVar5)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
      }
      pTVar20 = &local_58;
LAB_14b38210d:
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar20);
    }
    else {
      if ((pFVar16->Data).bIsSet == false) {
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
        ::
        TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                  (&local_70,&(pFVar16->Vertex).Literal.Value);
        TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
        ::CreateExplicitArgs
                  ((TDataReadReference<Metasound::FAudioBuffer> *)local_1a0,pFVar4,
                   (FLiteral *)&local_70);
        bVar1 = local_70.TypeIndex;
        if ((0xc < local_70.TypeIndex) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          TVar12.Ptr = (IOperator *)(*pcVar5)();
          return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
        }
        pTVar20 = &local_70;
        goto LAB_14b38210d;
      }
      if (((pFVar16->Data).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        TVar12.Ptr = (IOperator *)(*pcVar5)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
      }
      FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                (&(pFVar16->Data).TypedValue,
                 (TDataReadReference<Metasound::FAudioBuffer> *)local_1a0);
    }
    if (((local_1d8.Data <= (TDataReadReference<Metasound::FAudioBuffer> *)local_1a0) &&
        ((FScriptContainerElement *)local_1a0 < local_1d8.Data + (longlong)local_1d0._4_4_ * 0x20))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    iVar10 = (int)local_1d0;
    if ((int)local_1d0 == local_1d0._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_1d8,(int *)((longlong)&local_1d0 + 4));
    }
    local_1d0 = CONCAT44(local_1d0._4_4_,iVar10 + 1);
    pFVar23 = local_1d8.Data + (longlong)iVar10 * 0x20;
    *(undefined ***)pFVar23 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)(pFVar23 + 8) = local_1a0._8_8_;
    *(undefined8 *)(pFVar23 + 0x10) = local_1a0._16_8_;
    if ((TReferenceControllerBase<0> *)local_1a0._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_1a0._16_8_ + 8) = *(int *)(local_1a0._16_8_ + 8) + 1;
    }
    *(undefined ***)pFVar23 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_1a0._16_8_);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
    if ((FStringFormatArg *)local_1b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    if (local_b0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.StringValue.Data.AllocatorInstance.Data);
    }
    uVar24 = (int)pTVar18 + 1;
    pTVar18 = (TAudioBusWriterOperator<8> *)(ulonglong)uVar24;
  } while (uVar24 < 8);
  pTVar2 = *(TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             **)&(param_2->InternalDataReferences).field_0x8;
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(pTVar2,Frontend::SourceInterface::Environment::GraphName);
  pFVar6 = local_168;
  if (pTVar11 !=
      (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
       *)0x0) {
    pTVar11 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(pTVar2,Frontend::SourceInterface::Environment::GraphName);
    if ((pTVar11 ==
         (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar12.Ptr = (IOperator *)(*pcVar5)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar12.Ptr;
    }
    pIVar3 = pTVar11->Ptr;
    pvVar13 = TEnvironmentVariableTypeInfo<FString>::GetTypeId();
    pvVar14 = (void *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    if (pvVar13 == pvVar14) {
      pFVar15 = FMetasoundEnvironment::GetValue<FString>
                          (*(FMetasoundEnvironment **)&(param_2->InternalDataReferences).field_0x8,
                           &local_110,&Frontend::SourceInterface::Environment::GraphName);
      if (&local_1c8 != pFVar15) {
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        local_1c8.Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
        (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8.Data.ArrayNum = (pFVar15->Data).ArrayNum;
        local_1c8.Data.ArrayMax = (pFVar15->Data).ArrayMax;
        (pFVar15->Data).ArrayNum = 0;
        (pFVar15->Data).ArrayMax = 0;
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      goto LAB_14b382336;
    }
  }
  ::FString::operator=(&local_1c8,L"<Unknown>");
LAB_14b382336:
  pTVar18 = ::operator_new(0x90);
  if (pTVar18 != (TAudioBusWriterOperator<8> *)0x0) {
    local_150.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
    local_150.Data.ArrayNum = local_1c8.Data.ArrayNum;
    local_150.Data.ArrayMax = local_1c8.Data.ArrayMax;
    local_140.AllocatorInstance.Data = local_1d8.Data;
    local_140.ArrayNum = (int)local_1d0;
    local_140.ArrayMax = local_1d0._4_4_;
    local_d0[1] = (undefined **)local_90._8_8_;
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Data.ArrayNum = 0;
    local_1c8.Data.ArrayMax = 0;
    local_1d8.Data = (FScriptContainerElement *)0x0;
    local_1d0 = 0;
    local_c0 = (TReferenceControllerBase<0> *)local_90._16_8_;
    if ((TReferenceControllerBase<0> *)local_90._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_90._16_8_ + 8) = *(int *)(local_90._16_8_ + 8) + 1;
    }
    local_d0[0] = &___7__TDataReadReference_VFAudioBusAsset_Metasound___Metasound__6B_;
    pTVar19 = TAudioBusWriterOperator<8>
                        (pTVar18,(FBuildOperatorParams *)param_2,
                         (TDataReadReference<Metasound::FAudioBusAsset> *)local_d0,&local_140,
                         &local_150);
  }
  pFVar6->Node = (INode *)pTVar19;
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  DestructItems<Metasound::TDataReadReference<Metasound::FAudioBuffer>,int>
            ((TDataReadReference<Metasound::FAudioBuffer> *)local_1d8.Data,(int)local_1d0);
  if ((TDataReadReference<Metasound::FAudioBuffer> *)local_1d8.Data !=
      (TDataReadReference<Metasound::FAudioBuffer> *)0x0) {
    FMemory::Free(local_1d8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_90._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)(IOperator *)pFVar6
  ;
}

// CreatePatchInput @ 14b3891d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusWriterOperator<1>::CreatePatchInput(TAudioBusWriterOperator<1> *this)

{
  int iVar1;
  TSharedPtr<FAudioBusProxy,1> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  FAudioDeviceManager *this_01;
  FAudioDevice *this_02;
  UAudioBusSubsystem *this_03;
  FAudioBusProxy *pFVar7;
  FPatchInput *pFVar8;
  FResampledPatchInput *this_04;
  FAudioBusKey FVar9;
  int iVar10;
  FAudioBusKey local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FPatchInput local_58;
  FPatchInput local_40;
  FStringFormatArg local_28;
  
  this_00 = *(TSharedPtr<FAudioBusProxy,1> **)&(this->AudioBusAsset).field_0x8;
  if (this_00->Object == (FAudioBusProxy *)0x0) {
    return;
  }
  if (this_00->Object->NumChannels < 1) {
    if ((byte)LogMetaSound._0_1_ < 3) {
      return;
    }
    TSharedPtr<FAudioBusProxy,1>::operator->(this_00);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<1>::CreatePatchInput(void)___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    return;
  }
  this_01 = FAudioDeviceManager::Get();
  if (this_01 == (FAudioDeviceManager *)0x0) {
    return;
  }
  this_02 = FAudioDeviceManager::GetAudioDeviceRaw(this_01,this->AudioDeviceId);
  if (this_02 == (FAudioDevice *)0x0) {
    return;
  }
  this_03 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_02);
  if (this_03 == (UAudioBusSubsystem *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBusSubsystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusWriterNode.cpp"
                       ,0xa1,L"");
    if (!bVar5) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_00);
  uVar6 = 8;
  if ((uint)pFVar7->NumChannels < 8) {
    uVar6 = pFVar7->NumChannels;
  }
  this->AudioBusChannels = uVar6;
  pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_00);
  local_res8.ObjectId = pFVar7->AudioBusId;
  this->AudioBusId = local_res8.ObjectId;
  local_res8.InstanceId = 0xffffffff;
  FStringFormatArg::FStringFormatArg(&local_28,local_res8.ObjectId);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_78.AllocatorInstance,1,&local_78.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_78.AllocatorInstance.Data,&local_28,1)
  ;
  ::FString::FormatImpl(&local_68,L"_AudioBusWriterNode_AudioBusId_{0}",&local_78);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FStringFormatArg *)local_78.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  UAudioBusSubsystem::StartAudioBus(this_03,local_res8,&local_68,this->AudioBusChannels,false);
  pFVar8 = UAudioBusSubsystem::AddPatchInputForSoundAndAudioBus
                     (this_03,&local_58,this->InstanceID,local_res8,this->BlockSizeFrames,
                      this->AudioBusChannels,__real_3f800000);
  Audio::FPatchInput::operator=(&this->AudioBusPatchInput,pFVar8);
  Audio::FPatchInput::~FPatchInput(&local_58);
  iVar10 = this->AudioMixerOutputFrames;
  iVar1 = this->BlockSizeFrames;
  iVar4 = iVar1;
  if (iVar1 < iVar10) {
    iVar4 = iVar10;
  }
  if (iVar10 < iVar1) {
    iVar1 = iVar10;
  }
  iVar10 = (iVar4 + -1 + iVar1) / iVar1 + -1;
  if (AudioBusPrivate::EnableResampledAudioBus != 0) {
    if (((this->AudioMixerSampleRate != this->SampleRate) && (0.0 < this->AudioMixerSampleRate)) &&
       (0.0 < this->SampleRate)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<1>::CreatePatchInput(void)___ptr64'
                    ::__l45::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      if (iVar10 != 0) {
        iVar10 = NumBlocksToNumSamples(this,iVar10,this->SampleRate / this->AudioMixerSampleRate);
        Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,(float *)0x0,iVar10);
      }
      this_04 = ::operator_new(0xa0);
      FVar9.ObjectId = 0;
      FVar9.InstanceId = 0;
      if (this_04 != (FResampledPatchInput *)0x0) {
        pFVar8 = Audio::FPatchInput::FPatchInput(&local_40,&this->AudioBusPatchInput);
        FVar9 = (FAudioBusKey)
                AudioBusPrivate::FResampledPatchInput::FResampledPatchInput
                          (this_04,this->AudioBusChannels,this->AudioMixerSampleRate,
                           this->SampleRate,this->BlockSizeFrames,pFVar8);
      }
      local_res8 = FVar9;
      TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
      ::operator=(&this->ResampledPatchInput,
                  (TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
                   *)&local_res8);
      FVar9 = local_res8;
      if (local_res8 != (FAudioBusKey)0x0) {
        Audio::FPatchInput::~FPatchInput((FPatchInput *)((longlong)local_res8 + 0x88));
        pFVar2 = (((TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)FVar9 + 0x78))->
                 AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        if (*(ForElementType<float_*> *)((longlong)FVar9 + 0x68) != (ForElementType<float_*>)0x0) {
          FMemory::Free((void *)*(ForElementType<float_*> *)((longlong)FVar9 + 0x68));
        }
        if (*(ForElementType<float_const_*> *)((longlong)FVar9 + 0x48) !=
            (ForElementType<float_const_*>)0x0) {
          FMemory::Free((void *)*(ForElementType<float_const_*> *)((longlong)FVar9 + 0x48));
        }
        if (*(ForElementType<float> *)((longlong)FVar9 + 0x28) != (ForElementType<float>)0x0) {
          FMemory::Free((void *)*(ForElementType<float> *)((longlong)FVar9 + 0x28));
        }
        ::operator_delete((void *)FVar9,0xa0);
      }
      goto LAB_14b389590;
    }
  }
  if (0 < iVar10) {
    iVar10 = NumBlocksToNumSamples(this,iVar10,__real_bf800000);
    Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,(float *)0x0,iVar10);
  }
LAB_14b389590:
  (this->InterleavedBuffer).ArrayNum = 0;
  if ((this->InterleavedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
               &(this->InterleavedBuffer).ArrayMax);
  }
  TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
            (&this->InterleavedBuffer,this->AudioBusChannels * this->BlockSizeFrames);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// CreatePatchInput @ 14b389610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusWriterOperator<2>::CreatePatchInput(TAudioBusWriterOperator<2> *this)

{
  int iVar1;
  TSharedPtr<FAudioBusProxy,1> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  FAudioDeviceManager *this_01;
  FAudioDevice *this_02;
  UAudioBusSubsystem *this_03;
  FAudioBusProxy *pFVar7;
  FPatchInput *pFVar8;
  FResampledPatchInput *this_04;
  FAudioBusKey FVar9;
  int iVar10;
  FAudioBusKey local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FPatchInput local_58;
  FPatchInput local_40;
  FStringFormatArg local_28;
  
  this_00 = *(TSharedPtr<FAudioBusProxy,1> **)&(this->AudioBusAsset).field_0x8;
  if (this_00->Object == (FAudioBusProxy *)0x0) {
    return;
  }
  if (this_00->Object->NumChannels < 1) {
    if ((byte)LogMetaSound._0_1_ < 3) {
      return;
    }
    TSharedPtr<FAudioBusProxy,1>::operator->(this_00);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<2>::CreatePatchInput(void)___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    return;
  }
  this_01 = FAudioDeviceManager::Get();
  if (this_01 == (FAudioDeviceManager *)0x0) {
    return;
  }
  this_02 = FAudioDeviceManager::GetAudioDeviceRaw(this_01,this->AudioDeviceId);
  if (this_02 == (FAudioDevice *)0x0) {
    return;
  }
  this_03 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_02);
  if (this_03 == (UAudioBusSubsystem *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBusSubsystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusWriterNode.cpp"
                       ,0xa1,L"");
    if (!bVar5) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_00);
  uVar6 = 8;
  if ((uint)pFVar7->NumChannels < 8) {
    uVar6 = pFVar7->NumChannels;
  }
  this->AudioBusChannels = uVar6;
  pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_00);
  local_res8.ObjectId = pFVar7->AudioBusId;
  this->AudioBusId = local_res8.ObjectId;
  local_res8.InstanceId = 0xffffffff;
  FStringFormatArg::FStringFormatArg(&local_28,local_res8.ObjectId);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_78.AllocatorInstance,1,&local_78.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_78.AllocatorInstance.Data,&local_28,1)
  ;
  ::FString::FormatImpl(&local_68,L"_AudioBusWriterNode_AudioBusId_{0}",&local_78);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FStringFormatArg *)local_78.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  UAudioBusSubsystem::StartAudioBus(this_03,local_res8,&local_68,this->AudioBusChannels,false);
  pFVar8 = UAudioBusSubsystem::AddPatchInputForSoundAndAudioBus
                     (this_03,&local_58,this->InstanceID,local_res8,this->BlockSizeFrames,
                      this->AudioBusChannels,__real_3f800000);
  Audio::FPatchInput::operator=(&this->AudioBusPatchInput,pFVar8);
  Audio::FPatchInput::~FPatchInput(&local_58);
  iVar10 = this->AudioMixerOutputFrames;
  iVar1 = this->BlockSizeFrames;
  iVar4 = iVar1;
  if (iVar1 < iVar10) {
    iVar4 = iVar10;
  }
  if (iVar10 < iVar1) {
    iVar1 = iVar10;
  }
  iVar10 = (iVar4 + -1 + iVar1) / iVar1 + -1;
  if (AudioBusPrivate::EnableResampledAudioBus != 0) {
    if (((this->AudioMixerSampleRate != this->SampleRate) && (0.0 < this->AudioMixerSampleRate)) &&
       (0.0 < this->SampleRate)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<2>::CreatePatchInput(void)___ptr64'
                    ::__l45::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      if (iVar10 != 0) {
        iVar10 = NumBlocksToNumSamples(this,iVar10,this->SampleRate / this->AudioMixerSampleRate);
        Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,(float *)0x0,iVar10);
      }
      this_04 = ::operator_new(0xa0);
      FVar9.ObjectId = 0;
      FVar9.InstanceId = 0;
      if (this_04 != (FResampledPatchInput *)0x0) {
        pFVar8 = Audio::FPatchInput::FPatchInput(&local_40,&this->AudioBusPatchInput);
        FVar9 = (FAudioBusKey)
                AudioBusPrivate::FResampledPatchInput::FResampledPatchInput
                          (this_04,this->AudioBusChannels,this->AudioMixerSampleRate,
                           this->SampleRate,this->BlockSizeFrames,pFVar8);
      }
      local_res8 = FVar9;
      TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
      ::operator=(&this->ResampledPatchInput,
                  (TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
                   *)&local_res8);
      FVar9 = local_res8;
      if (local_res8 != (FAudioBusKey)0x0) {
        Audio::FPatchInput::~FPatchInput((FPatchInput *)((longlong)local_res8 + 0x88));
        pFVar2 = (((TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)FVar9 + 0x78))->
                 AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        if (*(ForElementType<float_*> *)((longlong)FVar9 + 0x68) != (ForElementType<float_*>)0x0) {
          FMemory::Free((void *)*(ForElementType<float_*> *)((longlong)FVar9 + 0x68));
        }
        if (*(ForElementType<float_const_*> *)((longlong)FVar9 + 0x48) !=
            (ForElementType<float_const_*>)0x0) {
          FMemory::Free((void *)*(ForElementType<float_const_*> *)((longlong)FVar9 + 0x48));
        }
        if (*(ForElementType<float> *)((longlong)FVar9 + 0x28) != (ForElementType<float>)0x0) {
          FMemory::Free((void *)*(ForElementType<float> *)((longlong)FVar9 + 0x28));
        }
        ::operator_delete((void *)FVar9,0xa0);
      }
      goto LAB_14b3899d0;
    }
  }
  if (0 < iVar10) {
    iVar10 = NumBlocksToNumSamples(this,iVar10,__real_bf800000);
    Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,(float *)0x0,iVar10);
  }
LAB_14b3899d0:
  (this->InterleavedBuffer).ArrayNum = 0;
  if ((this->InterleavedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
               &(this->InterleavedBuffer).ArrayMax);
  }
  TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
            (&this->InterleavedBuffer,this->AudioBusChannels * this->BlockSizeFrames);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// CreatePatchInput @ 14b389a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusWriterOperator<4>::CreatePatchInput(TAudioBusWriterOperator<4> *this)

{
  int iVar1;
  TSharedPtr<FAudioBusProxy,1> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  FAudioDeviceManager *this_01;
  FAudioDevice *this_02;
  UAudioBusSubsystem *this_03;
  FAudioBusProxy *pFVar7;
  FPatchInput *pFVar8;
  FResampledPatchInput *this_04;
  FAudioBusKey FVar9;
  int iVar10;
  FAudioBusKey local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FPatchInput local_58;
  FPatchInput local_40;
  FStringFormatArg local_28;
  
  this_00 = *(TSharedPtr<FAudioBusProxy,1> **)&(this->AudioBusAsset).field_0x8;
  if (this_00->Object == (FAudioBusProxy *)0x0) {
    return;
  }
  if (this_00->Object->NumChannels < 1) {
    if ((byte)LogMetaSound._0_1_ < 3) {
      return;
    }
    TSharedPtr<FAudioBusProxy,1>::operator->(this_00);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<4>::CreatePatchInput(void)___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    return;
  }
  this_01 = FAudioDeviceManager::Get();
  if (this_01 == (FAudioDeviceManager *)0x0) {
    return;
  }
  this_02 = FAudioDeviceManager::GetAudioDeviceRaw(this_01,this->AudioDeviceId);
  if (this_02 == (FAudioDevice *)0x0) {
    return;
  }
  this_03 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_02);
  if (this_03 == (UAudioBusSubsystem *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBusSubsystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusWriterNode.cpp"
                       ,0xa1,L"");
    if (!bVar5) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_00);
  uVar6 = 8;
  if ((uint)pFVar7->NumChannels < 8) {
    uVar6 = pFVar7->NumChannels;
  }
  this->AudioBusChannels = uVar6;
  pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_00);
  local_res8.ObjectId = pFVar7->AudioBusId;
  this->AudioBusId = local_res8.ObjectId;
  local_res8.InstanceId = 0xffffffff;
  FStringFormatArg::FStringFormatArg(&local_28,local_res8.ObjectId);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_78.AllocatorInstance,1,&local_78.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_78.AllocatorInstance.Data,&local_28,1)
  ;
  ::FString::FormatImpl(&local_68,L"_AudioBusWriterNode_AudioBusId_{0}",&local_78);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FStringFormatArg *)local_78.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  UAudioBusSubsystem::StartAudioBus(this_03,local_res8,&local_68,this->AudioBusChannels,false);
  pFVar8 = UAudioBusSubsystem::AddPatchInputForSoundAndAudioBus
                     (this_03,&local_58,this->InstanceID,local_res8,this->BlockSizeFrames,
                      this->AudioBusChannels,__real_3f800000);
  Audio::FPatchInput::operator=(&this->AudioBusPatchInput,pFVar8);
  Audio::FPatchInput::~FPatchInput(&local_58);
  iVar10 = this->AudioMixerOutputFrames;
  iVar1 = this->BlockSizeFrames;
  iVar4 = iVar1;
  if (iVar1 < iVar10) {
    iVar4 = iVar10;
  }
  if (iVar10 < iVar1) {
    iVar1 = iVar10;
  }
  iVar10 = (iVar4 + -1 + iVar1) / iVar1 + -1;
  if (AudioBusPrivate::EnableResampledAudioBus != 0) {
    if (((this->AudioMixerSampleRate != this->SampleRate) && (0.0 < this->AudioMixerSampleRate)) &&
       (0.0 < this->SampleRate)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<4>::CreatePatchInput(void)___ptr64'
                    ::__l45::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      if (iVar10 != 0) {
        iVar10 = NumBlocksToNumSamples(this,iVar10,this->SampleRate / this->AudioMixerSampleRate);
        Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,(float *)0x0,iVar10);
      }
      this_04 = ::operator_new(0xa0);
      FVar9.ObjectId = 0;
      FVar9.InstanceId = 0;
      if (this_04 != (FResampledPatchInput *)0x0) {
        pFVar8 = Audio::FPatchInput::FPatchInput(&local_40,&this->AudioBusPatchInput);
        FVar9 = (FAudioBusKey)
                AudioBusPrivate::FResampledPatchInput::FResampledPatchInput
                          (this_04,this->AudioBusChannels,this->AudioMixerSampleRate,
                           this->SampleRate,this->BlockSizeFrames,pFVar8);
      }
      local_res8 = FVar9;
      TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
      ::operator=(&this->ResampledPatchInput,
                  (TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
                   *)&local_res8);
      FVar9 = local_res8;
      if (local_res8 != (FAudioBusKey)0x0) {
        Audio::FPatchInput::~FPatchInput((FPatchInput *)((longlong)local_res8 + 0x88));
        pFVar2 = (((TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)FVar9 + 0x78))->
                 AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        if (*(ForElementType<float_*> *)((longlong)FVar9 + 0x68) != (ForElementType<float_*>)0x0) {
          FMemory::Free((void *)*(ForElementType<float_*> *)((longlong)FVar9 + 0x68));
        }
        if (*(ForElementType<float_const_*> *)((longlong)FVar9 + 0x48) !=
            (ForElementType<float_const_*>)0x0) {
          FMemory::Free((void *)*(ForElementType<float_const_*> *)((longlong)FVar9 + 0x48));
        }
        if (*(ForElementType<float> *)((longlong)FVar9 + 0x28) != (ForElementType<float>)0x0) {
          FMemory::Free((void *)*(ForElementType<float> *)((longlong)FVar9 + 0x28));
        }
        ::operator_delete((void *)FVar9,0xa0);
      }
      goto LAB_14b389e10;
    }
  }
  if (0 < iVar10) {
    iVar10 = NumBlocksToNumSamples(this,iVar10,__real_bf800000);
    Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,(float *)0x0,iVar10);
  }
LAB_14b389e10:
  (this->InterleavedBuffer).ArrayNum = 0;
  if ((this->InterleavedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
               &(this->InterleavedBuffer).ArrayMax);
  }
  TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
            (&this->InterleavedBuffer,this->AudioBusChannels * this->BlockSizeFrames);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// CreatePatchInput @ 14b389e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusWriterOperator<6>::CreatePatchInput(TAudioBusWriterOperator<6> *this)

{
  int iVar1;
  TSharedPtr<FAudioBusProxy,1> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  FAudioDeviceManager *this_01;
  FAudioDevice *this_02;
  UAudioBusSubsystem *this_03;
  FAudioBusProxy *pFVar7;
  FPatchInput *pFVar8;
  FResampledPatchInput *this_04;
  FAudioBusKey FVar9;
  int iVar10;
  FAudioBusKey local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FPatchInput local_58;
  FPatchInput local_40;
  FStringFormatArg local_28;
  
  this_00 = *(TSharedPtr<FAudioBusProxy,1> **)&(this->AudioBusAsset).field_0x8;
  if (this_00->Object == (FAudioBusProxy *)0x0) {
    return;
  }
  if (this_00->Object->NumChannels < 1) {
    if ((byte)LogMetaSound._0_1_ < 3) {
      return;
    }
    TSharedPtr<FAudioBusProxy,1>::operator->(this_00);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<6>::CreatePatchInput(void)___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    return;
  }
  this_01 = FAudioDeviceManager::Get();
  if (this_01 == (FAudioDeviceManager *)0x0) {
    return;
  }
  this_02 = FAudioDeviceManager::GetAudioDeviceRaw(this_01,this->AudioDeviceId);
  if (this_02 == (FAudioDevice *)0x0) {
    return;
  }
  this_03 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_02);
  if (this_03 == (UAudioBusSubsystem *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBusSubsystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusWriterNode.cpp"
                       ,0xa1,L"");
    if (!bVar5) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_00);
  uVar6 = 8;
  if ((uint)pFVar7->NumChannels < 8) {
    uVar6 = pFVar7->NumChannels;
  }
  this->AudioBusChannels = uVar6;
  pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_00);
  local_res8.ObjectId = pFVar7->AudioBusId;
  this->AudioBusId = local_res8.ObjectId;
  local_res8.InstanceId = 0xffffffff;
  FStringFormatArg::FStringFormatArg(&local_28,local_res8.ObjectId);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_78.AllocatorInstance,1,&local_78.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_78.AllocatorInstance.Data,&local_28,1)
  ;
  ::FString::FormatImpl(&local_68,L"_AudioBusWriterNode_AudioBusId_{0}",&local_78);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FStringFormatArg *)local_78.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  UAudioBusSubsystem::StartAudioBus(this_03,local_res8,&local_68,this->AudioBusChannels,false);
  pFVar8 = UAudioBusSubsystem::AddPatchInputForSoundAndAudioBus
                     (this_03,&local_58,this->InstanceID,local_res8,this->BlockSizeFrames,
                      this->AudioBusChannels,__real_3f800000);
  Audio::FPatchInput::operator=(&this->AudioBusPatchInput,pFVar8);
  Audio::FPatchInput::~FPatchInput(&local_58);
  iVar10 = this->AudioMixerOutputFrames;
  iVar1 = this->BlockSizeFrames;
  iVar4 = iVar1;
  if (iVar1 < iVar10) {
    iVar4 = iVar10;
  }
  if (iVar10 < iVar1) {
    iVar1 = iVar10;
  }
  iVar10 = (iVar4 + -1 + iVar1) / iVar1 + -1;
  if (AudioBusPrivate::EnableResampledAudioBus != 0) {
    if (((this->AudioMixerSampleRate != this->SampleRate) && (0.0 < this->AudioMixerSampleRate)) &&
       (0.0 < this->SampleRate)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<6>::CreatePatchInput(void)___ptr64'
                    ::__l45::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      if (iVar10 != 0) {
        iVar10 = NumBlocksToNumSamples(this,iVar10,this->SampleRate / this->AudioMixerSampleRate);
        Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,(float *)0x0,iVar10);
      }
      this_04 = ::operator_new(0xa0);
      FVar9.ObjectId = 0;
      FVar9.InstanceId = 0;
      if (this_04 != (FResampledPatchInput *)0x0) {
        pFVar8 = Audio::FPatchInput::FPatchInput(&local_40,&this->AudioBusPatchInput);
        FVar9 = (FAudioBusKey)
                AudioBusPrivate::FResampledPatchInput::FResampledPatchInput
                          (this_04,this->AudioBusChannels,this->AudioMixerSampleRate,
                           this->SampleRate,this->BlockSizeFrames,pFVar8);
      }
      local_res8 = FVar9;
      TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
      ::operator=(&this->ResampledPatchInput,
                  (TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
                   *)&local_res8);
      FVar9 = local_res8;
      if (local_res8 != (FAudioBusKey)0x0) {
        Audio::FPatchInput::~FPatchInput((FPatchInput *)((longlong)local_res8 + 0x88));
        pFVar2 = (((TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)FVar9 + 0x78))->
                 AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        if (*(ForElementType<float_*> *)((longlong)FVar9 + 0x68) != (ForElementType<float_*>)0x0) {
          FMemory::Free((void *)*(ForElementType<float_*> *)((longlong)FVar9 + 0x68));
        }
        if (*(ForElementType<float_const_*> *)((longlong)FVar9 + 0x48) !=
            (ForElementType<float_const_*>)0x0) {
          FMemory::Free((void *)*(ForElementType<float_const_*> *)((longlong)FVar9 + 0x48));
        }
        if (*(ForElementType<float> *)((longlong)FVar9 + 0x28) != (ForElementType<float>)0x0) {
          FMemory::Free((void *)*(ForElementType<float> *)((longlong)FVar9 + 0x28));
        }
        ::operator_delete((void *)FVar9,0xa0);
      }
      goto LAB_14b38a250;
    }
  }
  if (0 < iVar10) {
    iVar10 = NumBlocksToNumSamples(this,iVar10,__real_bf800000);
    Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,(float *)0x0,iVar10);
  }
LAB_14b38a250:
  (this->InterleavedBuffer).ArrayNum = 0;
  if ((this->InterleavedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
               &(this->InterleavedBuffer).ArrayMax);
  }
  TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
            (&this->InterleavedBuffer,this->AudioBusChannels * this->BlockSizeFrames);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// CreatePatchInput @ 14b38a2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusWriterOperator<8>::CreatePatchInput(TAudioBusWriterOperator<8> *this)

{
  int iVar1;
  TSharedPtr<FAudioBusProxy,1> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  FAudioDeviceManager *this_01;
  FAudioDevice *this_02;
  UAudioBusSubsystem *this_03;
  FAudioBusProxy *pFVar7;
  FPatchInput *pFVar8;
  FResampledPatchInput *this_04;
  FAudioBusKey FVar9;
  int iVar10;
  FAudioBusKey local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FPatchInput local_58;
  FPatchInput local_40;
  FStringFormatArg local_28;
  
  this_00 = *(TSharedPtr<FAudioBusProxy,1> **)&(this->AudioBusAsset).field_0x8;
  if (this_00->Object == (FAudioBusProxy *)0x0) {
    return;
  }
  if (this_00->Object->NumChannels < 1) {
    if ((byte)LogMetaSound._0_1_ < 3) {
      return;
    }
    TSharedPtr<FAudioBusProxy,1>::operator->(this_00);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<8>::CreatePatchInput(void)___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    return;
  }
  this_01 = FAudioDeviceManager::Get();
  if (this_01 == (FAudioDeviceManager *)0x0) {
    return;
  }
  this_02 = FAudioDeviceManager::GetAudioDeviceRaw(this_01,this->AudioDeviceId);
  if (this_02 == (FAudioDevice *)0x0) {
    return;
  }
  this_03 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_02);
  if (this_03 == (UAudioBusSubsystem *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBusSubsystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusWriterNode.cpp"
                       ,0xa1,L"");
    if (!bVar5) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_00);
  uVar6 = 8;
  if ((uint)pFVar7->NumChannels < 8) {
    uVar6 = pFVar7->NumChannels;
  }
  this->AudioBusChannels = uVar6;
  pFVar7 = TSharedPtr<FAudioBusProxy,1>::operator->(this_00);
  local_res8.ObjectId = pFVar7->AudioBusId;
  this->AudioBusId = local_res8.ObjectId;
  local_res8.InstanceId = 0xffffffff;
  FStringFormatArg::FStringFormatArg(&local_28,local_res8.ObjectId);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_78.AllocatorInstance,1,&local_78.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_78.AllocatorInstance.Data,&local_28,1)
  ;
  ::FString::FormatImpl(&local_68,L"_AudioBusWriterNode_AudioBusId_{0}",&local_78);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FStringFormatArg *)local_78.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  UAudioBusSubsystem::StartAudioBus(this_03,local_res8,&local_68,this->AudioBusChannels,false);
  pFVar8 = UAudioBusSubsystem::AddPatchInputForSoundAndAudioBus
                     (this_03,&local_58,this->InstanceID,local_res8,this->BlockSizeFrames,
                      this->AudioBusChannels,__real_3f800000);
  Audio::FPatchInput::operator=(&this->AudioBusPatchInput,pFVar8);
  Audio::FPatchInput::~FPatchInput(&local_58);
  iVar10 = this->AudioMixerOutputFrames;
  iVar1 = this->BlockSizeFrames;
  iVar4 = iVar1;
  if (iVar1 < iVar10) {
    iVar4 = iVar10;
  }
  if (iVar10 < iVar1) {
    iVar1 = iVar10;
  }
  iVar10 = (iVar4 + -1 + iVar1) / iVar1 + -1;
  if (AudioBusPrivate::EnableResampledAudioBus != 0) {
    if (((this->AudioMixerSampleRate != this->SampleRate) && (0.0 < this->AudioMixerSampleRate)) &&
       (0.0 < this->SampleRate)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<8>::CreatePatchInput(void)___ptr64'
                    ::__l45::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      if (iVar10 != 0) {
        iVar10 = NumBlocksToNumSamples(this,iVar10,this->SampleRate / this->AudioMixerSampleRate);
        Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,(float *)0x0,iVar10);
      }
      this_04 = ::operator_new(0xa0);
      FVar9.ObjectId = 0;
      FVar9.InstanceId = 0;
      if (this_04 != (FResampledPatchInput *)0x0) {
        pFVar8 = Audio::FPatchInput::FPatchInput(&local_40,&this->AudioBusPatchInput);
        FVar9 = (FAudioBusKey)
                AudioBusPrivate::FResampledPatchInput::FResampledPatchInput
                          (this_04,this->AudioBusChannels,this->AudioMixerSampleRate,
                           this->SampleRate,this->BlockSizeFrames,pFVar8);
      }
      local_res8 = FVar9;
      TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
      ::operator=(&this->ResampledPatchInput,
                  (TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
                   *)&local_res8);
      FVar9 = local_res8;
      if (local_res8 != (FAudioBusKey)0x0) {
        Audio::FPatchInput::~FPatchInput((FPatchInput *)((longlong)local_res8 + 0x88));
        pFVar2 = (((TArray<float,TAlignedHeapAllocator<16>_> *)((longlong)FVar9 + 0x78))->
                 AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        if (*(ForElementType<float_*> *)((longlong)FVar9 + 0x68) != (ForElementType<float_*>)0x0) {
          FMemory::Free((void *)*(ForElementType<float_*> *)((longlong)FVar9 + 0x68));
        }
        if (*(ForElementType<float_const_*> *)((longlong)FVar9 + 0x48) !=
            (ForElementType<float_const_*>)0x0) {
          FMemory::Free((void *)*(ForElementType<float_const_*> *)((longlong)FVar9 + 0x48));
        }
        if (*(ForElementType<float> *)((longlong)FVar9 + 0x28) != (ForElementType<float>)0x0) {
          FMemory::Free((void *)*(ForElementType<float> *)((longlong)FVar9 + 0x28));
        }
        ::operator_delete((void *)FVar9,0xa0);
      }
      goto LAB_14b38a690;
    }
  }
  if (0 < iVar10) {
    iVar10 = NumBlocksToNumSamples(this,iVar10,__real_bf800000);
    Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,(float *)0x0,iVar10);
  }
LAB_14b38a690:
  (this->InterleavedBuffer).ArrayNum = 0;
  if ((this->InterleavedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
               &(this->InterleavedBuffer).ArrayMax);
  }
  TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
            (&this->InterleavedBuffer,this->AudioBusChannels * this->BlockSizeFrames);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// Execute @ 14b39be60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TAudioBusWriterOperator<1>::Execute(TAudioBusWriterOperator<1> *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  FResampledPatchInput *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  void **ppvVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  void *local_res8;
  longlong lStackX_20;
  
  plVar1 = *(longlong **)&(this->AudioBusAsset).field_0x8;
  lVar9 = *plVar1;
  if ((lVar9 != 0) && (*(uint *)(lVar9 + 0x10) != this->AudioBusId)) {
    (this->InterleavedBuffer).ArrayNum = 0;
    if ((this->InterleavedBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
                 &(this->InterleavedBuffer).ArrayMax);
    }
  }
  if ((this->InterleavedBuffer).ArrayNum == 0) {
    if ((0.0 < this->SampleRate) && (*plVar1 != 0)) {
      CreatePatchInput(this);
    }
    if ((this->InterleavedBuffer).ArrayNum == 0) {
      return;
    }
  }
  if (((this->AudioInputs).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pFVar14 = (this->InterleavedBuffer).AllocatorInstance.Data;
  local_res8 = (void *)*puVar2;
  if (this->AudioBusChannels == 1) {
    memcpy(pFVar14,(void *)*puVar2,(longlong)this->BlockSizeFrames << 2);
  }
  else {
    uVar13 = (uint)(this->AudioBusChannels != 0);
    iVar8 = 0;
    if (0 < this->BlockSizeFrames) {
      do {
        uVar7 = 0;
        if (uVar13 < 4) {
          if (uVar13 != 0) {
            lVar9 = 0;
            goto LAB_14b39c03c;
          }
        }
        else {
          lVar9 = 0;
          uVar7 = (uVar13 - 4 >> 2) + 1;
          uVar11 = (ulonglong)uVar7;
          uVar7 = uVar7 * 4;
          pFVar12 = pFVar14 + 8;
          do {
            puVar3 = (&local_res8)[lVar9];
            (&local_res8)[lVar9] = puVar3 + 1;
            puVar4 = *(undefined4 **)(&stack0x00000010 + lVar9 * 8);
            *(undefined4 *)(pFVar12 + -8) = *puVar3;
            *(undefined4 **)(&stack0x00000010 + lVar9 * 8) = puVar4 + 1;
            puVar3 = *(undefined4 **)(&stack0x00000018 + lVar9 * 8);
            *(undefined4 *)(pFVar12 + -4) = *puVar4;
            *(undefined4 **)(&stack0x00000018 + lVar9 * 8) = puVar3 + 1;
            puVar4 = (undefined4 *)(&lStackX_20)[lVar9];
            *(undefined4 *)pFVar12 = *puVar3;
            (&lStackX_20)[lVar9] = (longlong)(puVar4 + 1);
            lVar9 = lVar9 + 4;
            *(undefined4 *)(pFVar12 + 4) = *puVar4;
            uVar11 = uVar11 - 1;
            pFVar12 = pFVar12 + 0x10;
          } while (uVar11 != 0);
          if (uVar7 < uVar13) {
LAB_14b39c03c:
            uVar11 = (ulonglong)(uVar13 - uVar7);
            ppvVar10 = &local_res8 + lVar9;
            pFVar12 = pFVar14 + lVar9 * 4;
            do {
              puVar3 = *ppvVar10;
              *ppvVar10 = puVar3 + 1;
              *(undefined4 *)pFVar12 = *puVar3;
              uVar11 = uVar11 - 1;
              ppvVar10 = ppvVar10 + 1;
              pFVar12 = pFVar12 + 4;
            } while (uVar11 != 0);
          }
        }
        iVar8 = iVar8 + 1;
        pFVar14 = pFVar14 + (ulonglong)this->AudioBusChannels * 4;
      } while (iVar8 < this->BlockSizeFrames);
    }
  }
  this_00 = (this->ResampledPatchInput).Ptr;
  iVar8 = (this->InterleavedBuffer).ArrayNum;
  pFVar14 = (this->InterleavedBuffer).AllocatorInstance.Data;
  if (this_00 == (FResampledPatchInput *)0x0) {
    iVar8 = Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,(float *)pFVar14,iVar8);
  }
  else {
    iVar8 = AudioBusPrivate::FResampledPatchInput::PushAudio(this_00,(float *)pFVar14,iVar8);
  }
  if ((iVar8 < (this->InterleavedBuffer).ArrayNum) && (this->bWasUnderrunReported == false)) {
    if (2 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<1>::Execute(void)___ptr64'
                  ::__l34::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    this->bWasUnderrunReported = true;
  }
  return;
}

// Execute @ 14b39c0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TAudioBusWriterOperator<2>::Execute(TAudioBusWriterOperator<2> *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 *puVar3;
  undefined4 *puVar4;
  FResampledPatchInput *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  void **ppvVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  void *local_18;
  longlong local_10;
  
  plVar1 = *(longlong **)&(this->AudioBusAsset).field_0x8;
  lVar9 = *plVar1;
  if ((lVar9 != 0) && (*(uint *)(lVar9 + 0x10) != this->AudioBusId)) {
    (this->InterleavedBuffer).ArrayNum = 0;
    if ((this->InterleavedBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
                 &(this->InterleavedBuffer).ArrayMax);
    }
  }
  if ((this->InterleavedBuffer).ArrayNum == 0) {
    if ((0.0 < this->SampleRate) && (*plVar1 != 0)) {
      CreatePatchInput(this);
    }
    if ((this->InterleavedBuffer).ArrayNum == 0) {
      return;
    }
  }
  if (((this->AudioInputs).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  _Src = (void *)*puVar2;
  local_18 = _Src;
  if (((this->AudioInputs).ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar1 = *(longlong **)((this->AudioInputs).AllocatorInstance.Data + 0x28);
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pFVar14 = (this->InterleavedBuffer).AllocatorInstance.Data;
  local_10 = *plVar1;
  uVar7 = this->AudioBusChannels;
  if (uVar7 == 1) {
    memcpy(pFVar14,_Src,(longlong)this->BlockSizeFrames << 2);
  }
  else {
    uVar13 = 2;
    if (uVar7 < 2) {
      uVar13 = uVar7;
    }
    iVar8 = 0;
    if (0 < this->BlockSizeFrames) {
      do {
        uVar7 = 0;
        if (uVar13 < 4) {
          if (uVar13 != 0) {
            lVar9 = 0;
            goto LAB_14b39c33c;
          }
        }
        else {
          lVar9 = 0;
          uVar7 = (uVar13 - 4 >> 2) + 1;
          uVar11 = (ulonglong)uVar7;
          uVar7 = uVar7 * 4;
          pFVar12 = pFVar14 + 8;
          do {
            puVar3 = (&local_18)[lVar9];
            (&local_18)[lVar9] = puVar3 + 1;
            puVar4 = (undefined4 *)(&local_10)[lVar9];
            *(undefined4 *)(pFVar12 + -8) = *puVar3;
            (&local_10)[lVar9] = (longlong)(puVar4 + 1);
            puVar3 = *(undefined4 **)(&stack0xfffffffffffffff8 + lVar9 * 8);
            *(undefined4 *)(pFVar12 + -4) = *puVar4;
            *(undefined4 **)(&stack0xfffffffffffffff8 + lVar9 * 8) = puVar3 + 1;
            puVar4 = *(undefined4 **)(&stack0x00000000 + lVar9 * 8);
            *(undefined4 *)pFVar12 = *puVar3;
            *(undefined4 **)(&stack0x00000000 + lVar9 * 8) = puVar4 + 1;
            lVar9 = lVar9 + 4;
            *(undefined4 *)(pFVar12 + 4) = *puVar4;
            uVar11 = uVar11 - 1;
            pFVar12 = pFVar12 + 0x10;
          } while (uVar11 != 0);
          if (uVar7 < uVar13) {
LAB_14b39c33c:
            uVar11 = (ulonglong)(uVar13 - uVar7);
            ppvVar10 = &local_18 + lVar9;
            pFVar12 = pFVar14 + lVar9 * 4;
            do {
              puVar3 = *ppvVar10;
              *ppvVar10 = puVar3 + 1;
              *(undefined4 *)pFVar12 = *puVar3;
              uVar11 = uVar11 - 1;
              ppvVar10 = ppvVar10 + 1;
              pFVar12 = pFVar12 + 4;
            } while (uVar11 != 0);
          }
        }
        iVar8 = iVar8 + 1;
        pFVar14 = pFVar14 + (ulonglong)this->AudioBusChannels * 4;
      } while (iVar8 < this->BlockSizeFrames);
    }
  }
  this_00 = (this->ResampledPatchInput).Ptr;
  iVar8 = (this->InterleavedBuffer).ArrayNum;
  pFVar14 = (this->InterleavedBuffer).AllocatorInstance.Data;
  if (this_00 == (FResampledPatchInput *)0x0) {
    iVar8 = Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,(float *)pFVar14,iVar8);
  }
  else {
    iVar8 = AudioBusPrivate::FResampledPatchInput::PushAudio(this_00,(float *)pFVar14,iVar8);
  }
  if ((iVar8 < (this->InterleavedBuffer).ArrayNum) && (this->bWasUnderrunReported == false)) {
    if (2 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<2>::Execute(void)___ptr64'
                  ::__l34::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    this->bWasUnderrunReported = true;
  }
  return;
}

// Execute @ 14b39c3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TAudioBusWriterOperator<4>::Execute(TAudioBusWriterOperator<4> *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  FResampledPatchInput *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  void **ppvVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  undefined1 auStackY_68 [32];
  void *local_38;
  longlong local_30 [5];
  
  local_30[3] = __security_cookie.value ^ (ulonglong)auStackY_68;
  plVar1 = *(longlong **)&(this->AudioBusAsset).field_0x8;
  lVar9 = *plVar1;
  if ((lVar9 != 0) && (*(uint *)(lVar9 + 0x10) != this->AudioBusId)) {
    (this->InterleavedBuffer).ArrayNum = 0;
    if ((this->InterleavedBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
                 &(this->InterleavedBuffer).ArrayMax);
    }
  }
  if ((this->InterleavedBuffer).ArrayNum == 0) {
    if ((0.0 < this->SampleRate) && (*plVar1 != 0)) {
      CreatePatchInput(this);
    }
    if ((this->InterleavedBuffer).ArrayNum == 0) {
      return;
    }
  }
  if (((this->AudioInputs).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_38 = (void *)*puVar2;
  if (((this->AudioInputs).ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar1 = *(longlong **)((this->AudioInputs).AllocatorInstance.Data + 0x28);
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_30[0] = *plVar1;
  if (((this->AudioInputs).ArrayNum < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x48);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_30[1] = *puVar2;
  if (((this->AudioInputs).ArrayNum < 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x68);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pFVar13 = (this->InterleavedBuffer).AllocatorInstance.Data;
  local_30[2] = *puVar2;
  uVar7 = this->AudioBusChannels;
  if (uVar7 == 1) {
    memcpy(pFVar13,local_38,(longlong)this->BlockSizeFrames << 2);
  }
  else {
    uVar11 = 4;
    if (uVar7 < 4) {
      uVar11 = uVar7;
    }
    iVar8 = 0;
    if (0 < this->BlockSizeFrames) {
      do {
        uVar7 = 0;
        if (uVar11 < 4) {
          if (uVar11 != 0) {
            lVar9 = 0;
            goto LAB_14b39c72b;
          }
        }
        else {
          lVar9 = 0;
          uVar7 = (uVar11 - 4 >> 2) + 1;
          uVar14 = (ulonglong)uVar7;
          uVar7 = uVar7 * 4;
          pFVar12 = pFVar13 + 8;
          do {
            puVar3 = (&local_38)[lVar9];
            (&local_38)[lVar9] = puVar3 + 1;
            puVar4 = (undefined4 *)local_30[lVar9];
            *(undefined4 *)(pFVar12 + -8) = *puVar3;
            local_30[lVar9] = (longlong)(puVar4 + 1);
            puVar3 = (undefined4 *)local_30[lVar9 + 1];
            *(undefined4 *)(pFVar12 + -4) = *puVar4;
            local_30[lVar9 + 1] = (longlong)(puVar3 + 1);
            puVar4 = (undefined4 *)local_30[lVar9 + 2];
            *(undefined4 *)pFVar12 = *puVar3;
            local_30[lVar9 + 2] = (longlong)(puVar4 + 1);
            lVar9 = lVar9 + 4;
            *(undefined4 *)(pFVar12 + 4) = *puVar4;
            uVar14 = uVar14 - 1;
            pFVar12 = pFVar12 + 0x10;
          } while (uVar14 != 0);
          if (uVar7 < uVar11) {
LAB_14b39c72b:
            uVar14 = (ulonglong)(uVar11 - uVar7);
            ppvVar10 = &local_38 + lVar9;
            pFVar12 = pFVar13 + lVar9 * 4;
            do {
              puVar3 = *ppvVar10;
              *ppvVar10 = puVar3 + 1;
              *(undefined4 *)pFVar12 = *puVar3;
              uVar14 = uVar14 - 1;
              ppvVar10 = ppvVar10 + 1;
              pFVar12 = pFVar12 + 4;
            } while (uVar14 != 0);
          }
        }
        iVar8 = iVar8 + 1;
        pFVar13 = pFVar13 + (ulonglong)this->AudioBusChannels * 4;
      } while (iVar8 < this->BlockSizeFrames);
    }
  }
  this_00 = (this->ResampledPatchInput).Ptr;
  iVar8 = (this->InterleavedBuffer).ArrayNum;
  pFVar13 = (this->InterleavedBuffer).AllocatorInstance.Data;
  if (this_00 == (FResampledPatchInput *)0x0) {
    iVar8 = Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,(float *)pFVar13,iVar8);
  }
  else {
    iVar8 = AudioBusPrivate::FResampledPatchInput::PushAudio(this_00,(float *)pFVar13,iVar8);
  }
  if ((iVar8 < (this->InterleavedBuffer).ArrayNum) && (this->bWasUnderrunReported == false)) {
    if (2 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<4>::Execute(void)___ptr64'
                  ::__l34::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    this->bWasUnderrunReported = true;
  }
  return;
}

// Execute @ 14b39c7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TAudioBusWriterOperator<6>::Execute(TAudioBusWriterOperator<6> *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  FResampledPatchInput *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  void **ppvVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_78 [32];
  void *local_48;
  longlong local_40 [7];
  
  local_40[5] = __security_cookie.value ^ (ulonglong)auStackY_78;
  plVar1 = *(longlong **)&(this->AudioBusAsset).field_0x8;
  lVar9 = *plVar1;
  if ((lVar9 != 0) && (*(uint *)(lVar9 + 0x10) != this->AudioBusId)) {
    (this->InterleavedBuffer).ArrayNum = 0;
    if ((this->InterleavedBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
                 &(this->InterleavedBuffer).ArrayMax);
    }
  }
  if ((this->InterleavedBuffer).ArrayNum == 0) {
    if ((0.0 < this->SampleRate) && (*plVar1 != 0)) {
      CreatePatchInput(this);
    }
    if ((this->InterleavedBuffer).ArrayNum == 0) {
      return;
    }
  }
  if (((this->AudioInputs).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_48 = (void *)*puVar2;
  if (((this->AudioInputs).ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar1 = *(longlong **)((this->AudioInputs).AllocatorInstance.Data + 0x28);
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_40[0] = *plVar1;
  if (((this->AudioInputs).ArrayNum < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x48);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_40[1] = *puVar2;
  if (((this->AudioInputs).ArrayNum < 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x68);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_40[2] = *puVar2;
  if (((this->AudioInputs).ArrayNum < 5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x88);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_40[3] = *puVar2;
  if (((this->AudioInputs).ArrayNum < 6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0xa8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pFVar14 = (this->InterleavedBuffer).AllocatorInstance.Data;
  local_40[4] = *puVar2;
  uVar7 = this->AudioBusChannels;
  if (uVar7 == 1) {
    memcpy(pFVar14,local_48,(longlong)this->BlockSizeFrames << 2);
  }
  else {
    uVar13 = 6;
    if (uVar7 < 6) {
      uVar13 = uVar7;
    }
    iVar8 = 0;
    if (0 < this->BlockSizeFrames) {
      do {
        uVar7 = 0;
        if (uVar13 < 4) {
          if (uVar13 != 0) {
            lVar9 = 0;
            goto LAB_14b39cc1c;
          }
        }
        else {
          lVar9 = 0;
          uVar7 = (uVar13 - 4 >> 2) + 1;
          uVar11 = (ulonglong)uVar7;
          uVar7 = uVar7 * 4;
          pFVar12 = pFVar14 + 8;
          do {
            puVar3 = (&local_48)[lVar9];
            (&local_48)[lVar9] = puVar3 + 1;
            puVar4 = (undefined4 *)local_40[lVar9];
            *(undefined4 *)(pFVar12 + -8) = *puVar3;
            local_40[lVar9] = (longlong)(puVar4 + 1);
            puVar3 = (undefined4 *)local_40[lVar9 + 1];
            *(undefined4 *)(pFVar12 + -4) = *puVar4;
            local_40[lVar9 + 1] = (longlong)(puVar3 + 1);
            puVar4 = (undefined4 *)local_40[lVar9 + 2];
            *(undefined4 *)pFVar12 = *puVar3;
            local_40[lVar9 + 2] = (longlong)(puVar4 + 1);
            lVar9 = lVar9 + 4;
            *(undefined4 *)(pFVar12 + 4) = *puVar4;
            uVar11 = uVar11 - 1;
            pFVar12 = pFVar12 + 0x10;
          } while (uVar11 != 0);
          if (uVar7 < uVar13) {
LAB_14b39cc1c:
            uVar11 = (ulonglong)(uVar13 - uVar7);
            ppvVar10 = &local_48 + lVar9;
            pFVar12 = pFVar14 + lVar9 * 4;
            do {
              puVar3 = *ppvVar10;
              *ppvVar10 = puVar3 + 1;
              *(undefined4 *)pFVar12 = *puVar3;
              uVar11 = uVar11 - 1;
              ppvVar10 = ppvVar10 + 1;
              pFVar12 = pFVar12 + 4;
            } while (uVar11 != 0);
          }
        }
        iVar8 = iVar8 + 1;
        pFVar14 = pFVar14 + (ulonglong)this->AudioBusChannels * 4;
      } while (iVar8 < this->BlockSizeFrames);
    }
  }
  this_00 = (this->ResampledPatchInput).Ptr;
  iVar8 = (this->InterleavedBuffer).ArrayNum;
  pFVar14 = (this->InterleavedBuffer).AllocatorInstance.Data;
  if (this_00 == (FResampledPatchInput *)0x0) {
    iVar8 = Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,(float *)pFVar14,iVar8);
  }
  else {
    iVar8 = AudioBusPrivate::FResampledPatchInput::PushAudio(this_00,(float *)pFVar14,iVar8);
  }
  if ((iVar8 < (this->InterleavedBuffer).ArrayNum) && (this->bWasUnderrunReported == false)) {
    if (2 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<6>::Execute(void)___ptr64'
                  ::__l34::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    this->bWasUnderrunReported = true;
  }
  return;
}

// Execute @ 14b39cce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::TAudioBusWriterOperator<8>::Execute(TAudioBusWriterOperator<8> *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  FResampledPatchInput *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  void **ppvVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_88 [32];
  void *local_58;
  longlong local_50 [6];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  plVar1 = *(longlong **)&(this->AudioBusAsset).field_0x8;
  lVar9 = *plVar1;
  if ((lVar9 != 0) && (*(uint *)(lVar9 + 0x10) != this->AudioBusId)) {
    (this->InterleavedBuffer).ArrayNum = 0;
    if ((this->InterleavedBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
                 &(this->InterleavedBuffer).ArrayMax);
    }
  }
  if ((this->InterleavedBuffer).ArrayNum == 0) {
    if ((0.0 < this->SampleRate) && (*plVar1 != 0)) {
      CreatePatchInput(this);
    }
    if ((this->InterleavedBuffer).ArrayNum == 0) {
      return;
    }
  }
  if (((this->AudioInputs).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_58 = (void *)*puVar2;
  if (((this->AudioInputs).ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar1 = *(longlong **)((this->AudioInputs).AllocatorInstance.Data + 0x28);
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar1[2] != (int)plVar1[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_50[0] = *plVar1;
  if (((this->AudioInputs).ArrayNum < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x48);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_50[1] = *puVar2;
  if (((this->AudioInputs).ArrayNum < 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x68);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_50[2] = *puVar2;
  if (((this->AudioInputs).ArrayNum < 5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0x88);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_50[3] = *puVar2;
  if (((this->AudioInputs).ArrayNum < 6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0xa8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_50[4] = *puVar2;
  if (((this->AudioInputs).ArrayNum < 7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 200);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  local_50[5] = *puVar2;
  if (((this->AudioInputs).ArrayNum < 8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar2 = *(undefined8 **)((this->AudioInputs).AllocatorInstance.Data + 0xe8);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pFVar14 = (this->InterleavedBuffer).AllocatorInstance.Data;
  local_20 = *puVar2;
  uVar7 = this->AudioBusChannels;
  if (uVar7 == 1) {
    memcpy(pFVar14,local_58,(longlong)this->BlockSizeFrames << 2);
  }
  else {
    uVar13 = 8;
    if (uVar7 < 8) {
      uVar13 = uVar7;
    }
    iVar8 = 0;
    if (0 < this->BlockSizeFrames) {
      do {
        uVar7 = 0;
        if (uVar13 < 4) {
          if (uVar13 != 0) {
            lVar9 = 0;
            goto LAB_14b39d1ec;
          }
        }
        else {
          lVar9 = 0;
          uVar7 = (uVar13 - 4 >> 2) + 1;
          uVar11 = (ulonglong)uVar7;
          uVar7 = uVar7 * 4;
          pFVar12 = pFVar14 + 8;
          do {
            puVar3 = (&local_58)[lVar9];
            (&local_58)[lVar9] = puVar3 + 1;
            puVar4 = (undefined4 *)local_50[lVar9];
            *(undefined4 *)(pFVar12 + -8) = *puVar3;
            local_50[lVar9] = (longlong)(puVar4 + 1);
            puVar3 = (undefined4 *)local_50[lVar9 + 1];
            *(undefined4 *)(pFVar12 + -4) = *puVar4;
            local_50[lVar9 + 1] = (longlong)(puVar3 + 1);
            puVar4 = (undefined4 *)local_50[lVar9 + 2];
            *(undefined4 *)pFVar12 = *puVar3;
            local_50[lVar9 + 2] = (longlong)(puVar4 + 1);
            lVar9 = lVar9 + 4;
            *(undefined4 *)(pFVar12 + 4) = *puVar4;
            uVar11 = uVar11 - 1;
            pFVar12 = pFVar12 + 0x10;
          } while (uVar11 != 0);
          if (uVar7 < uVar13) {
LAB_14b39d1ec:
            uVar11 = (ulonglong)(uVar13 - uVar7);
            ppvVar10 = &local_58 + lVar9;
            pFVar12 = pFVar14 + lVar9 * 4;
            do {
              puVar3 = *ppvVar10;
              *ppvVar10 = puVar3 + 1;
              *(undefined4 *)pFVar12 = *puVar3;
              uVar11 = uVar11 - 1;
              ppvVar10 = ppvVar10 + 1;
              pFVar12 = pFVar12 + 4;
            } while (uVar11 != 0);
          }
        }
        iVar8 = iVar8 + 1;
        pFVar14 = pFVar14 + (ulonglong)this->AudioBusChannels * 4;
      } while (iVar8 < this->BlockSizeFrames);
    }
  }
  this_00 = (this->ResampledPatchInput).Ptr;
  iVar8 = (this->InterleavedBuffer).ArrayNum;
  pFVar14 = (this->InterleavedBuffer).AllocatorInstance.Data;
  if (this_00 == (FResampledPatchInput *)0x0) {
    iVar8 = Audio::FPatchInput::PushAudio(&this->AudioBusPatchInput,(float *)pFVar14,iVar8);
  }
  else {
    iVar8 = AudioBusPrivate::FResampledPatchInput::PushAudio(this_00,(float *)pFVar14,iVar8);
  }
  if ((iVar8 < (this->InterleavedBuffer).ArrayNum) && (this->bWasUnderrunReported == false)) {
    if (2 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<8>::Execute(void)___ptr64'
                  ::__l34::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    this->bWasUnderrunReported = true;
  }
  return;
}

// GetNodeInfo @ 14b3b94b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TAudioBusWriterOperator<1>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<1>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<1>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<1>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TAudioBusWriterOperator<1>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<1>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TAudioBusWriterOperator<1>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<1>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<1>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<1>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3b9540

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TAudioBusWriterOperator<2>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<2>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<2>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<2>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TAudioBusWriterOperator<2>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<2>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TAudioBusWriterOperator<2>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<2>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<2>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<2>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3b95d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TAudioBusWriterOperator<4>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<4>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<4>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<4>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TAudioBusWriterOperator<4>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<4>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TAudioBusWriterOperator<4>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<4>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<4>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<4>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3b9660

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TAudioBusWriterOperator<6>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<6>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<6>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<6>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TAudioBusWriterOperator<6>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<6>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TAudioBusWriterOperator<6>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<6>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<6>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<6>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b3b96f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::TAudioBusWriterOperator<8>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<8>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<8>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<8>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TAudioBusWriterOperator<8>::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<8>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TAudioBusWriterOperator<8>::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<8>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<8>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TAudioBusWriterOperator<8>::GetNodeInfo(void)'
          ::__l2::Info;
}

// NumBlocksToNumSamples @ 14b3c9a80

int __thiscall
Metasound::TAudioBusWriterOperator<1>::NumBlocksToNumSamples
          (TAudioBusWriterOperator<1> *this,int param_1,float param_2)

{
  if (0.0 < param_2) {
    return -(((int)ROUND(__real_bf000000 -
                         (float)(param_1 * this->BlockSizeFrames) * (param_2 + param_2)) >> 1) *
            this->AudioBusChannels);
  }
  return param_1 * this->AudioBusChannels * this->BlockSizeFrames;
}

// NumBlocksToNumSamples @ 14b3c9ae0

int __thiscall
Metasound::TAudioBusWriterOperator<2>::NumBlocksToNumSamples
          (TAudioBusWriterOperator<2> *this,int param_1,float param_2)

{
  if (0.0 < param_2) {
    return -(((int)ROUND(__real_bf000000 -
                         (float)(param_1 * this->BlockSizeFrames) * (param_2 + param_2)) >> 1) *
            this->AudioBusChannels);
  }
  return param_1 * this->AudioBusChannels * this->BlockSizeFrames;
}

// NumBlocksToNumSamples @ 14b3c9b40

int __thiscall
Metasound::TAudioBusWriterOperator<4>::NumBlocksToNumSamples
          (TAudioBusWriterOperator<4> *this,int param_1,float param_2)

{
  if (0.0 < param_2) {
    return -(((int)ROUND(__real_bf000000 -
                         (float)(param_1 * this->BlockSizeFrames) * (param_2 + param_2)) >> 1) *
            this->AudioBusChannels);
  }
  return param_1 * this->AudioBusChannels * this->BlockSizeFrames;
}

// NumBlocksToNumSamples @ 14b3c9ba0

int __thiscall
Metasound::TAudioBusWriterOperator<6>::NumBlocksToNumSamples
          (TAudioBusWriterOperator<6> *this,int param_1,float param_2)

{
  if (0.0 < param_2) {
    return -(((int)ROUND(__real_bf000000 -
                         (float)(param_1 * this->BlockSizeFrames) * (param_2 + param_2)) >> 1) *
            this->AudioBusChannels);
  }
  return param_1 * this->AudioBusChannels * this->BlockSizeFrames;
}

// NumBlocksToNumSamples @ 14b3c9c00

int __thiscall
Metasound::TAudioBusWriterOperator<8>::NumBlocksToNumSamples
          (TAudioBusWriterOperator<8> *this,int param_1,float param_2)

{
  if (0.0 < param_2) {
    return -(((int)ROUND(__real_bf000000 -
                         (float)(param_1 * this->BlockSizeFrames) * (param_2 + param_2)) >> 1) *
            this->AudioBusChannels);
  }
  return param_1 * this->AudioBusChannels * this->BlockSizeFrames;
}

// Reset @ 14b3d8bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusWriterOperator<1>::Reset(TAudioBusWriterOperator<1> *this,FResetParams *param_1)

{
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar1;
  IMetasoundEnvironmentVariable *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar9;
  void *pvVar10;
  void *pvVar11;
  ulong64 uVar12;
  float fVar13;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  (this->InterleavedBuffer).ArrayNum = 0;
  if ((this->InterleavedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
               &(this->InterleavedBuffer).ArrayMax);
  }
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = -1.0;
  this->AudioDeviceId = 0xffffffff;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  Audio::FPatchInput::Reset(&this->AudioBusPatchInput);
  TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
  ::Reset(&this->ResampledPatchInput,(FResampledPatchInput *)0x0);
  this->AudioBusChannels = 0xffffffff;
  this->AudioBusId = 0;
  this->InstanceID = 0;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  this->BlockSizeFrames = param_1->OperatorSettings->NumFramesPerBlock;
  this->bWasUnderrunReported = false;
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar4 = false;
  }
  else {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar4 = pvVar10 == pvVar11;
  }
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar5 = pvVar10 == pvVar11;
  }
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
  bVar6 = false;
  if (pTVar9 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar6 = pvVar10 == pvVar11;
  }
  if ((bool)(bVar5 & bVar4 & bVar6)) {
    uVar7 = FMetasoundEnvironment::GetValue<unsigned_int>
                      (param_1->Environment,&Frontend::SourceInterface::Environment::DeviceID);
    this->AudioDeviceId = uVar7;
    iVar8 = FMetasoundEnvironment::GetValue<int>
                      (param_1->Environment,
                       &Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    this->AudioMixerOutputFrames = iVar8;
    uVar12 = FMetasoundEnvironment::GetValue<unsigned___int64>
                       (param_1->Environment,&Frontend::SourceInterface::Environment::TransmitterID)
    ;
    this->InstanceID = uVar12;
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::TransmitterID,&local_38);
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_48);
    ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_58);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<1>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
  if (pTVar9 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<float>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    if (pvVar10 == pvVar11) {
      fVar13 = FMetasoundEnvironment::GetValue<float>
                         (param_1->Environment,
                          &Frontend::SourceInterface::Environment::AudioMixerSampleRate);
      goto LAB_14b3d8faf;
    }
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerSampleRate,&local_28);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<1>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l30::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  fVar13 = this->SampleRate;
LAB_14b3d8faf:
  this->AudioMixerSampleRate = fVar13;
  return;
}

// Reset @ 14b3d8fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusWriterOperator<2>::Reset(TAudioBusWriterOperator<2> *this,FResetParams *param_1)

{
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar1;
  IMetasoundEnvironmentVariable *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar9;
  void *pvVar10;
  void *pvVar11;
  ulong64 uVar12;
  float fVar13;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  (this->InterleavedBuffer).ArrayNum = 0;
  if ((this->InterleavedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
               &(this->InterleavedBuffer).ArrayMax);
  }
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = -1.0;
  this->AudioDeviceId = 0xffffffff;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  Audio::FPatchInput::Reset(&this->AudioBusPatchInput);
  TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
  ::Reset(&this->ResampledPatchInput,(FResampledPatchInput *)0x0);
  this->AudioBusChannels = 0xffffffff;
  this->AudioBusId = 0;
  this->InstanceID = 0;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  this->BlockSizeFrames = param_1->OperatorSettings->NumFramesPerBlock;
  this->bWasUnderrunReported = false;
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar4 = false;
  }
  else {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar4 = pvVar10 == pvVar11;
  }
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar5 = pvVar10 == pvVar11;
  }
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
  bVar6 = false;
  if (pTVar9 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar6 = pvVar10 == pvVar11;
  }
  if ((bool)(bVar5 & bVar4 & bVar6)) {
    uVar7 = FMetasoundEnvironment::GetValue<unsigned_int>
                      (param_1->Environment,&Frontend::SourceInterface::Environment::DeviceID);
    this->AudioDeviceId = uVar7;
    iVar8 = FMetasoundEnvironment::GetValue<int>
                      (param_1->Environment,
                       &Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    this->AudioMixerOutputFrames = iVar8;
    uVar12 = FMetasoundEnvironment::GetValue<unsigned___int64>
                       (param_1->Environment,&Frontend::SourceInterface::Environment::TransmitterID)
    ;
    this->InstanceID = uVar12;
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::TransmitterID,&local_38);
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_48);
    ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_58);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<2>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
  if (pTVar9 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<float>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    if (pvVar10 == pvVar11) {
      fVar13 = FMetasoundEnvironment::GetValue<float>
                         (param_1->Environment,
                          &Frontend::SourceInterface::Environment::AudioMixerSampleRate);
      goto LAB_14b3d93bf;
    }
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerSampleRate,&local_28);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<2>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l30::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  fVar13 = this->SampleRate;
LAB_14b3d93bf:
  this->AudioMixerSampleRate = fVar13;
  return;
}

// Reset @ 14b3d93f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusWriterOperator<4>::Reset(TAudioBusWriterOperator<4> *this,FResetParams *param_1)

{
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar1;
  IMetasoundEnvironmentVariable *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar9;
  void *pvVar10;
  void *pvVar11;
  ulong64 uVar12;
  float fVar13;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  (this->InterleavedBuffer).ArrayNum = 0;
  if ((this->InterleavedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
               &(this->InterleavedBuffer).ArrayMax);
  }
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = -1.0;
  this->AudioDeviceId = 0xffffffff;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  Audio::FPatchInput::Reset(&this->AudioBusPatchInput);
  TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
  ::Reset(&this->ResampledPatchInput,(FResampledPatchInput *)0x0);
  this->AudioBusChannels = 0xffffffff;
  this->AudioBusId = 0;
  this->InstanceID = 0;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  this->BlockSizeFrames = param_1->OperatorSettings->NumFramesPerBlock;
  this->bWasUnderrunReported = false;
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar4 = false;
  }
  else {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar4 = pvVar10 == pvVar11;
  }
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar5 = pvVar10 == pvVar11;
  }
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
  bVar6 = false;
  if (pTVar9 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar6 = pvVar10 == pvVar11;
  }
  if ((bool)(bVar5 & bVar4 & bVar6)) {
    uVar7 = FMetasoundEnvironment::GetValue<unsigned_int>
                      (param_1->Environment,&Frontend::SourceInterface::Environment::DeviceID);
    this->AudioDeviceId = uVar7;
    iVar8 = FMetasoundEnvironment::GetValue<int>
                      (param_1->Environment,
                       &Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    this->AudioMixerOutputFrames = iVar8;
    uVar12 = FMetasoundEnvironment::GetValue<unsigned___int64>
                       (param_1->Environment,&Frontend::SourceInterface::Environment::TransmitterID)
    ;
    this->InstanceID = uVar12;
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::TransmitterID,&local_38);
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_48);
    ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_58);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<4>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
  if (pTVar9 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<float>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    if (pvVar10 == pvVar11) {
      fVar13 = FMetasoundEnvironment::GetValue<float>
                         (param_1->Environment,
                          &Frontend::SourceInterface::Environment::AudioMixerSampleRate);
      goto LAB_14b3d97cf;
    }
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerSampleRate,&local_28);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<4>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l30::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  fVar13 = this->SampleRate;
LAB_14b3d97cf:
  this->AudioMixerSampleRate = fVar13;
  return;
}

// Reset @ 14b3d9800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusWriterOperator<6>::Reset(TAudioBusWriterOperator<6> *this,FResetParams *param_1)

{
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar1;
  IMetasoundEnvironmentVariable *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar9;
  void *pvVar10;
  void *pvVar11;
  ulong64 uVar12;
  float fVar13;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  (this->InterleavedBuffer).ArrayNum = 0;
  if ((this->InterleavedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
               &(this->InterleavedBuffer).ArrayMax);
  }
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = -1.0;
  this->AudioDeviceId = 0xffffffff;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  Audio::FPatchInput::Reset(&this->AudioBusPatchInput);
  TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
  ::Reset(&this->ResampledPatchInput,(FResampledPatchInput *)0x0);
  this->AudioBusChannels = 0xffffffff;
  this->AudioBusId = 0;
  this->InstanceID = 0;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  this->BlockSizeFrames = param_1->OperatorSettings->NumFramesPerBlock;
  this->bWasUnderrunReported = false;
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar4 = false;
  }
  else {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar4 = pvVar10 == pvVar11;
  }
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar5 = pvVar10 == pvVar11;
  }
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
  bVar6 = false;
  if (pTVar9 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar6 = pvVar10 == pvVar11;
  }
  if ((bool)(bVar5 & bVar4 & bVar6)) {
    uVar7 = FMetasoundEnvironment::GetValue<unsigned_int>
                      (param_1->Environment,&Frontend::SourceInterface::Environment::DeviceID);
    this->AudioDeviceId = uVar7;
    iVar8 = FMetasoundEnvironment::GetValue<int>
                      (param_1->Environment,
                       &Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    this->AudioMixerOutputFrames = iVar8;
    uVar12 = FMetasoundEnvironment::GetValue<unsigned___int64>
                       (param_1->Environment,&Frontend::SourceInterface::Environment::TransmitterID)
    ;
    this->InstanceID = uVar12;
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::TransmitterID,&local_38);
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_48);
    ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_58);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<6>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
  if (pTVar9 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<float>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    if (pvVar10 == pvVar11) {
      fVar13 = FMetasoundEnvironment::GetValue<float>
                         (param_1->Environment,
                          &Frontend::SourceInterface::Environment::AudioMixerSampleRate);
      goto LAB_14b3d9bdf;
    }
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerSampleRate,&local_28);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<6>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l30::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  fVar13 = this->SampleRate;
LAB_14b3d9bdf:
  this->AudioMixerSampleRate = fVar13;
  return;
}

// Reset @ 14b3d9c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::TAudioBusWriterOperator<8>::Reset(TAudioBusWriterOperator<8> *this,FResetParams *param_1)

{
  TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar1;
  IMetasoundEnvironmentVariable *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar9;
  void *pvVar10;
  void *pvVar11;
  ulong64 uVar12;
  float fVar13;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  (this->InterleavedBuffer).ArrayNum = 0;
  if ((this->InterleavedBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->InterleavedBuffer).AllocatorInstance,0,
               &(this->InterleavedBuffer).ArrayMax);
  }
  this->AudioMixerOutputFrames = -1;
  this->AudioMixerSampleRate = -1.0;
  this->AudioDeviceId = 0xffffffff;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  Audio::FPatchInput::Reset(&this->AudioBusPatchInput);
  TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
  ::Reset(&this->ResampledPatchInput,(FResampledPatchInput *)0x0);
  this->AudioBusChannels = 0xffffffff;
  this->AudioBusId = 0;
  this->InstanceID = 0;
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
  this->BlockSizeFrames = param_1->OperatorSettings->NumFramesPerBlock;
  this->bWasUnderrunReported = false;
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
  if (pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar4 = false;
  }
  else {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::DeviceID);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned_int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar4 = pvVar10 == pvVar11;
  }
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
  if (pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar5 = false;
  }
  else {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<int>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar5 = pvVar10 == pvVar11;
  }
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
  bVar6 = false;
  if (pTVar9 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::TransmitterID);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<unsigned___int64>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    bVar6 = pvVar10 == pvVar11;
  }
  if ((bool)(bVar5 & bVar4 & bVar6)) {
    uVar7 = FMetasoundEnvironment::GetValue<unsigned_int>
                      (param_1->Environment,&Frontend::SourceInterface::Environment::DeviceID);
    this->AudioDeviceId = uVar7;
    iVar8 = FMetasoundEnvironment::GetValue<int>
                      (param_1->Environment,
                       &Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames);
    this->AudioMixerOutputFrames = iVar8;
    uVar12 = FMetasoundEnvironment::GetValue<unsigned___int64>
                       (param_1->Environment,&Frontend::SourceInterface::Environment::TransmitterID)
    ;
    this->InstanceID = uVar12;
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::TransmitterID,&local_38);
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerNumOutputFrames,&local_48);
    ::FName::ToString(&Frontend::SourceInterface::Environment::DeviceID,&local_58);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<8>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pTVar1 = &param_1->Environment->Variables;
  pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
  if (pTVar9 != (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(pTVar1,Frontend::SourceInterface::Environment::AudioMixerSampleRate);
    if ((pTVar9 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                    *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x148,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = pTVar9->Ptr;
    pvVar10 = TEnvironmentVariableTypeInfo<float>::GetTypeId();
    pvVar11 = (void *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    if (pvVar10 == pvVar11) {
      fVar13 = FMetasoundEnvironment::GetValue<float>
                         (param_1->Environment,
                          &Frontend::SourceInterface::Environment::AudioMixerSampleRate);
      goto LAB_14b3d9fef;
    }
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(&Frontend::SourceInterface::Environment::AudioMixerSampleRate,&local_28);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_Metasound::TAudioBusWriterOperator<8>::Reset(Metasound::IOperator::FResetParams_const&___ptr64)___ptr64'
                ::__l30::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  fVar13 = this->SampleRate;
LAB_14b3d9fef:
  this->AudioMixerSampleRate = fVar13;
  return;
}

