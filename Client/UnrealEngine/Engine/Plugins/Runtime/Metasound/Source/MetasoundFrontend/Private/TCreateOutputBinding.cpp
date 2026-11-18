// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 56

// operator() @ 14ada2d20

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14ada2dc0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::operator()(void *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58 [3];
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_58[1] = (undefined **)**(undefined8 **)this;
  local_58[2] = (undefined **)*puVar1;
  local_58[0] = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)local_58);
  return __return_storage_ptr__;
}

// operator() @ 14ada2e60

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_>::
operator()(TCreateOutputBinding<Metasound::TDataReadReference<Metasound::Frontend::FAnalyzerAddress>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14ada2f00

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<int>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<int>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14ada2fa0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14ada3040

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>_>
::operator()(void *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58 [3];
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_58[1] = (undefined **)**(undefined8 **)this;
  local_58[2] = (undefined **)*puVar1;
  local_58[0] = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)local_58);
  return __return_storage_ptr__;
}

// operator() @ 14ada30e0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14ada3180

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14ada3220

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
::operator()(void *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58 [3];
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_58[1] = (undefined **)**(undefined8 **)this;
  local_58[2] = (undefined **)*puVar1;
  local_58[0] = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)local_58);
  return __return_storage_ptr__;
}

// operator() @ 14ada32c0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::Frontend::FAnalyzerAddress>_>::
operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::Frontend::FAnalyzerAddress>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4d220

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<int>_>::operator()
          (TCreateOutputBinding<Metasound::TDataReadReference<int>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4d2c0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<float>_>::
operator()(TCreateOutputBinding<Metasound::TDataReadReference<float>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4d360

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
operator()(TCreateOutputBinding<Metasound::TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4d400

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
operator()(TCreateOutputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4d4a0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4d540

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4d5e0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>::
operator()(TCreateOutputBinding<Metasound::TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4d680

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4d720

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
operator()(TCreateOutputBinding<Metasound::TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4d7c0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>::operator()
          (TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4d860

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_>::operator()
          (TCreateOutputBinding<Metasound::TDataReadReference<FMetasoundParameterStorageWrapper>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4d900

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_>::operator()
          (TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FSendAddress>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4d9a0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<FString>_>::
operator()(TCreateOutputBinding<Metasound::TDataReadReference<FString>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4da40

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTime>_>
::operator()(TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTime>_> *this,
            FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4dae0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>::operator()
          (TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4db80

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataReadReference<bool>_>::operator()
          (TCreateOutputBinding<Metasound::TDataReadReference<bool>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4dc20

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>::
operator()(TCreateOutputBinding<Metasound::TDataWriteReference<float>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4dcc0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<int>_>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4dd60

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<float>_>_> *this
          ,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4de00

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4dea0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4df40

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4dfe0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e080

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e120

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e1c0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e260

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FAudioBuffer>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e300

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FMetasoundParameterStorageWrapper>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e3a0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FSendAddress>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e440

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<FString>_>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e4e0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_>::
operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTime>_>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e580

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_>::
operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FTrigger>_>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e620

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<bool>_>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e6c0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>::
operator()(TCreateOutputBinding<Metasound::TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e760

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>::
operator()(TCreateOutputBinding<Metasound::TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e800

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e8a0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e940

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4e9e0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
             *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4ea80

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>::
operator()(TCreateOutputBinding<Metasound::TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4eb20

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<FMetasoundParameterStorageWrapper>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<FMetasoundParameterStorageWrapper>_>
           *this,FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4ebc0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FSendAddress>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FSendAddress>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4ec60

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<FString>_>::
operator()(TCreateOutputBinding<Metasound::TDataWriteReference<FString>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4ed00

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTime>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTime>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4eda0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

// operator() @ 14af4ee40

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<bool>_>::
operator()(TCreateOutputBinding<Metasound::TDataWriteReference<bool>_> *this,
          FOutputBinding *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined **local_58;
  FName local_50;
  undefined8 local_48;
  undefined4 local_40;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this->Ref + 8))();
  local_50 = *this->VertexName;
  local_48 = *puVar1;
  local_58 = &___7FOutputDataVertex_Metasound__6B_;
  local_40 = 0;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  FOutputBinding::FOutputBinding(__return_storage_ptr__,(FOutputDataVertex *)&local_58);
  return __return_storage_ptr__;
}

