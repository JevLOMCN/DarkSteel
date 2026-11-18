// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 63

// operator() @ 14b004230

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
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

// operator() @ 14b0042d0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
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

// operator() @ 14b004370

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FMonoAudioFormat>_>::operator()
          (TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FMonoAudioFormat>_> *this,
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

// operator() @ 14b004410

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FStereoAudioFormat>_>::operator()
          (TCreateOutputBinding<Metasound::TDataReadReference<Metasound::FStereoAudioFormat>_> *this
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

// operator() @ 14b0044b0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>_>
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

// operator() @ 14b004550

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>_>
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

// operator() @ 14b0045f0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FMonoAudioFormat>_>_>
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

// operator() @ 14b004690

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>_>
::operator()(TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::FStereoAudioFormat>_>_>
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

// operator() @ 14b004730

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
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

// operator() @ 14b0047d0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
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

// operator() @ 14b004870

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FMonoAudioFormat>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FMonoAudioFormat>_> *this,
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

// operator() @ 14b004910

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FStereoAudioFormat>_>::operator()
          (TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FStereoAudioFormat>_>
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

// operator() @ 14b05cc00

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
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

// operator() @ 14b05cca0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>_>
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

// operator() @ 14b05cd40

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
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

// operator() @ 14b0be2a0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
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

// operator() @ 14b0be340

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
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

// operator() @ 14b0be3e0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
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

// operator() @ 14b0be480

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
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

// operator() @ 14b0be520

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>_>
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

// operator() @ 14b0be5c0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>_>
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

// operator() @ 14b0be660

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>_>
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

// operator() @ 14b0be700

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>_>
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

// operator() @ 14b0be7a0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
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

// operator() @ 14b0be840

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
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

// operator() @ 14b0be8e0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
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

// operator() @ 14b0be980

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
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

// operator() @ 14b14f950

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
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

// operator() @ 14b14f9f0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
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

// operator() @ 14b14fa90

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
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

// operator() @ 14b14fb30

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
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

// operator() @ 14b14fbd0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
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

// operator() @ 14b14fc70

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
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

// operator() @ 14b14fd10

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
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

// operator() @ 14b14fdb0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>_>
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

// operator() @ 14b14fe50

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>_>
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

// operator() @ 14b14fef0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>_>
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

// operator() @ 14b14ff90

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>_>
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

// operator() @ 14b150030

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>_>
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

// operator() @ 14b1500d0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>_>
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

// operator() @ 14b150170

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>_>
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

// operator() @ 14b150210

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
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

// operator() @ 14b1502b0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
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

// operator() @ 14b150350

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
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

// operator() @ 14b1503f0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
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

// operator() @ 14b150490

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
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

// operator() @ 14b150530

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
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

// operator() @ 14b1505d0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
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

// operator() @ 14b1d3b00

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
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

// operator() @ 14b1d3ba0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
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

// operator() @ 14b1d3c40

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>_>
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

// operator() @ 14b1d3ce0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>_>
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

// operator() @ 14b1d3d80

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
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

// operator() @ 14b1d3e20

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
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

// operator() @ 14b247fe0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
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

// operator() @ 14b248080

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
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

// operator() @ 14b248120

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
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

// operator() @ 14b2481c0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>_>
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

// operator() @ 14b248260

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>_>
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

// operator() @ 14b248300

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TVariable<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>_>
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

// operator() @ 14b2483a0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
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

// operator() @ 14b248440

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
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

// operator() @ 14b2484e0

FOutputBinding * __thiscall
Metasound::VertexDataPrivate::
TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
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

