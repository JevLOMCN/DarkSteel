// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 192

// TConvertDeinterleave<1,1> @ 14449d030

TConvertDeinterleave<1,1> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,1>::TConvertDeinterleave<1,1>
          (TConvertDeinterleave<1,1> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<1,1> *pTVar3;
  
  *this = (TConvertDeinterleave<1,1>)
          &___7__TConvertDeinterleave__00_00_ConvertDeinterleavePrivate_Audio__6B_;
  if (param_1->NumInputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x9e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x9f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<1,2> @ 14449d0c0

TConvertDeinterleave<1,2> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,2>::TConvertDeinterleave<1,2>
          (TConvertDeinterleave<1,2> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<1,2> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__00_01_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x69,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x6a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DMonoInputChannelMap
                    (2,param_1->MonoUpmixMethod,false,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(1,2,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x75,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<1,3> @ 14449d1f0

TConvertDeinterleave<1,3> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,3>::TConvertDeinterleave<1,3>
          (TConvertDeinterleave<1,3> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<1,3> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__00_02_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x69,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x6a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DMonoInputChannelMap
                    (3,param_1->MonoUpmixMethod,false,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(1,3,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x75,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<1,4> @ 14449d320

TConvertDeinterleave<1,4> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,4>::TConvertDeinterleave<1,4>
          (TConvertDeinterleave<1,4> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<1,4> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__00_03_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x69,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x6a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DMonoInputChannelMap
                    (4,param_1->MonoUpmixMethod,false,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(1,4,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x75,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<1,5> @ 14449d450

TConvertDeinterleave<1,5> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,5>::TConvertDeinterleave<1,5>
          (TConvertDeinterleave<1,5> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<1,5> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__00_04_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x69,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x6a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DMonoInputChannelMap
                    (5,param_1->MonoUpmixMethod,false,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(1,5,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x75,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<1,6> @ 14449d580

TConvertDeinterleave<1,6> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,6>::TConvertDeinterleave<1,6>
          (TConvertDeinterleave<1,6> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<1,6> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__00_05_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x69,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x6a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DMonoInputChannelMap
                    (6,param_1->MonoUpmixMethod,false,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(1,6,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x75,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<1,7> @ 14449d6b0

TConvertDeinterleave<1,7> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,7>::TConvertDeinterleave<1,7>
          (TConvertDeinterleave<1,7> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<1,7> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__00_06_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x69,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x6a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DMonoInputChannelMap
                    (7,param_1->MonoUpmixMethod,false,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(1,7,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x75,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<1,8> @ 14449d7e0

TConvertDeinterleave<1,8> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,8>::TConvertDeinterleave<1,8>
          (TConvertDeinterleave<1,8> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<1,8> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__00_07_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x69,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x6a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DMonoInputChannelMap
                    (8,param_1->MonoUpmixMethod,false,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(1,8,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x75,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<1,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<2,1> @ 14449d910

TConvertDeinterleave<2,1> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,1>::TConvertDeinterleave<2,1>
          (TConvertDeinterleave<2,1> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<2,1> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__01_00_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(2,1,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(2,1,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<2,2> @ 14449da40

TConvertDeinterleave<2,2> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,2>::TConvertDeinterleave<2,2>
          (TConvertDeinterleave<2,2> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<2,2> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__01_01_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(2,2,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(2,2,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<2,3> @ 14449db60

TConvertDeinterleave<2,3> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,3>::TConvertDeinterleave<2,3>
          (TConvertDeinterleave<2,3> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<2,3> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__01_02_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(2,3,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(2,3,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<2,4> @ 14449dc90

TConvertDeinterleave<2,4> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,4>::TConvertDeinterleave<2,4>
          (TConvertDeinterleave<2,4> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<2,4> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__01_03_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(2,4,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(2,4,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<2,5> @ 14449ddc0

TConvertDeinterleave<2,5> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,5>::TConvertDeinterleave<2,5>
          (TConvertDeinterleave<2,5> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<2,5> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__01_04_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(2,5,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(2,5,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<2,6> @ 14449def0

TConvertDeinterleave<2,6> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,6>::TConvertDeinterleave<2,6>
          (TConvertDeinterleave<2,6> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<2,6> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__01_05_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(2,6,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(2,6,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0xc) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<2,7> @ 14449e020

TConvertDeinterleave<2,7> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,7>::TConvertDeinterleave<2,7>
          (TConvertDeinterleave<2,7> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<2,7> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__01_06_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(2,7,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(2,7,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0xe) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<2,8> @ 14449e150

TConvertDeinterleave<2,8> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,8>::TConvertDeinterleave<2,8>
          (TConvertDeinterleave<2,8> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<2,8> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__01_07_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(2,8,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(2,8,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<2,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<3,1> @ 14449e280

TConvertDeinterleave<3,1> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,1>::TConvertDeinterleave<3,1>
          (TConvertDeinterleave<3,1> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<3,1> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__02_00_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(3,1,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(3,1,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<3,2> @ 14449e3b0

TConvertDeinterleave<3,2> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,2>::TConvertDeinterleave<3,2>
          (TConvertDeinterleave<3,2> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<3,2> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__02_01_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(3,2,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(3,2,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<3,3> @ 14449e4e0

TConvertDeinterleave<3,3> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,3>::TConvertDeinterleave<3,3>
          (TConvertDeinterleave<3,3> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<3,3> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__02_02_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(3,3,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(3,3,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 9) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<3,4> @ 14449e600

TConvertDeinterleave<3,4> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,4>::TConvertDeinterleave<3,4>
          (TConvertDeinterleave<3,4> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<3,4> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__02_03_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(3,4,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(3,4,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0xc) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<3,5> @ 14449e730

TConvertDeinterleave<3,5> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,5>::TConvertDeinterleave<3,5>
          (TConvertDeinterleave<3,5> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<3,5> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__02_04_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(3,5,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(3,5,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0xf) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<3,6> @ 14449e860

TConvertDeinterleave<3,6> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,6>::TConvertDeinterleave<3,6>
          (TConvertDeinterleave<3,6> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<3,6> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__02_05_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(3,6,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(3,6,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x12) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<3,7> @ 14449e990

TConvertDeinterleave<3,7> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,7>::TConvertDeinterleave<3,7>
          (TConvertDeinterleave<3,7> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<3,7> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__02_06_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(3,7,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(3,7,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x15) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<3,8> @ 14449eac0

TConvertDeinterleave<3,8> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,8>::TConvertDeinterleave<3,8>
          (TConvertDeinterleave<3,8> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<3,8> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__02_07_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(3,8,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(3,8,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x18) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<3,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<4,1> @ 14449ebf0

TConvertDeinterleave<4,1> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,1>::TConvertDeinterleave<4,1>
          (TConvertDeinterleave<4,1> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<4,1> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__03_00_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DQuadInputChannelMap(1,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(4,1,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<4,2> @ 14449ed10

TConvertDeinterleave<4,2> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,2>::TConvertDeinterleave<4,2>
          (TConvertDeinterleave<4,2> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<4,2> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__03_01_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DQuadInputChannelMap(2,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(4,2,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<4,3> @ 14449ee30

TConvertDeinterleave<4,3> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,3>::TConvertDeinterleave<4,3>
          (TConvertDeinterleave<4,3> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<4,3> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__03_02_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DQuadInputChannelMap(3,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(4,3,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0xc) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<4,4> @ 14449ef50

TConvertDeinterleave<4,4> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,4>::TConvertDeinterleave<4,4>
          (TConvertDeinterleave<4,4> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<4,4> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__03_03_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DQuadInputChannelMap(4,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(4,4,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<4,5> @ 14449f070

TConvertDeinterleave<4,5> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,5>::TConvertDeinterleave<4,5>
          (TConvertDeinterleave<4,5> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<4,5> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__03_04_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DQuadInputChannelMap(5,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(4,5,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x14) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<4,6> @ 14449f190

TConvertDeinterleave<4,6> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,6>::TConvertDeinterleave<4,6>
          (TConvertDeinterleave<4,6> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<4,6> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__03_05_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DQuadInputChannelMap(6,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(4,6,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x18) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<4,7> @ 14449f2b0

TConvertDeinterleave<4,7> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,7>::TConvertDeinterleave<4,7>
          (TConvertDeinterleave<4,7> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<4,7> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__03_06_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DQuadInputChannelMap(7,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(4,7,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x1c) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<4,8> @ 14449f3d0

TConvertDeinterleave<4,8> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,8>::TConvertDeinterleave<4,8>
          (TConvertDeinterleave<4,8> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<4,8> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__03_07_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DQuadInputChannelMap(8,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(4,8,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x20) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<4,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<5,1> @ 14449f4f0

TConvertDeinterleave<5,1> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,1>::TConvertDeinterleave<5,1>
          (TConvertDeinterleave<5,1> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<5,1> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__04_00_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(5,1,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(5,1,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<5,2> @ 14449f620

TConvertDeinterleave<5,2> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,2>::TConvertDeinterleave<5,2>
          (TConvertDeinterleave<5,2> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<5,2> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__04_01_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(5,2,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(5,2,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<5,3> @ 14449f750

TConvertDeinterleave<5,3> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,3>::TConvertDeinterleave<5,3>
          (TConvertDeinterleave<5,3> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<5,3> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__04_02_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(5,3,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(5,3,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0xf) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<5,4> @ 14449f880

TConvertDeinterleave<5,4> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,4>::TConvertDeinterleave<5,4>
          (TConvertDeinterleave<5,4> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<5,4> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__04_03_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(5,4,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(5,4,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x14) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<5,5> @ 14449f9b0

TConvertDeinterleave<5,5> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,5>::TConvertDeinterleave<5,5>
          (TConvertDeinterleave<5,5> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<5,5> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__04_04_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(5,5,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(5,5,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x19) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<5,6> @ 14449fad0

TConvertDeinterleave<5,6> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,6>::TConvertDeinterleave<5,6>
          (TConvertDeinterleave<5,6> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<5,6> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__04_05_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(5,6,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(5,6,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x1e) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<5,7> @ 14449fc00

TConvertDeinterleave<5,7> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,7>::TConvertDeinterleave<5,7>
          (TConvertDeinterleave<5,7> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<5,7> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__04_06_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(5,7,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(5,7,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x23) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<5,8> @ 14449fd30

TConvertDeinterleave<5,8> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,8>::TConvertDeinterleave<5,8>
          (TConvertDeinterleave<5,8> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<5,8> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__04_07_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(5,8,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(5,8,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<5,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<6,1> @ 14449fe60

TConvertDeinterleave<6,1> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,1>::TConvertDeinterleave<6,1>
          (TConvertDeinterleave<6,1> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<6,1> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__05_00_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(6,1,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(6,1,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<6,2> @ 14449ff90

TConvertDeinterleave<6,2> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,2>::TConvertDeinterleave<6,2>
          (TConvertDeinterleave<6,2> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<6,2> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__05_01_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(6,2,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(6,2,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0xc) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<6,3> @ 1444a00c0

TConvertDeinterleave<6,3> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,3>::TConvertDeinterleave<6,3>
          (TConvertDeinterleave<6,3> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<6,3> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__05_02_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(6,3,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(6,3,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x12) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<6,4> @ 1444a01f0

TConvertDeinterleave<6,4> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,4>::TConvertDeinterleave<6,4>
          (TConvertDeinterleave<6,4> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<6,4> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__05_03_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(6,4,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(6,4,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x18) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<6,5> @ 1444a0320

TConvertDeinterleave<6,5> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,5>::TConvertDeinterleave<6,5>
          (TConvertDeinterleave<6,5> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<6,5> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__05_04_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(6,5,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(6,5,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x1e) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<6,6> @ 1444a0450

TConvertDeinterleave<6,6> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,6>::TConvertDeinterleave<6,6>
          (TConvertDeinterleave<6,6> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<6,6> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__05_05_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(6,6,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(6,6,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x24) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<6,7> @ 1444a0570

TConvertDeinterleave<6,7> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,7>::TConvertDeinterleave<6,7>
          (TConvertDeinterleave<6,7> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<6,7> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__05_06_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(6,7,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(6,7,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x2a) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<6,8> @ 1444a06a0

TConvertDeinterleave<6,8> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,8>::TConvertDeinterleave<6,8>
          (TConvertDeinterleave<6,8> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<6,8> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__05_07_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(6,8,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(6,8,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x30) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<6,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<7,1> @ 1444a07d0

TConvertDeinterleave<7,1> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,1>::TConvertDeinterleave<7,1>
          (TConvertDeinterleave<7,1> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<7,1> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__06_00_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(7,1,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(7,1,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<7,2> @ 1444a0900

TConvertDeinterleave<7,2> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,2>::TConvertDeinterleave<7,2>
          (TConvertDeinterleave<7,2> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<7,2> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__06_01_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(7,2,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(7,2,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0xe) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<7,3> @ 1444a0a30

TConvertDeinterleave<7,3> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,3>::TConvertDeinterleave<7,3>
          (TConvertDeinterleave<7,3> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<7,3> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__06_02_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(7,3,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(7,3,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x15) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<7,4> @ 1444a0b60

TConvertDeinterleave<7,4> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,4>::TConvertDeinterleave<7,4>
          (TConvertDeinterleave<7,4> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<7,4> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__06_03_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(7,4,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(7,4,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x1c) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<7,5> @ 1444a0c90

TConvertDeinterleave<7,5> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,5>::TConvertDeinterleave<7,5>
          (TConvertDeinterleave<7,5> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<7,5> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__06_04_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(7,5,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(7,5,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x23) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<7,6> @ 1444a0dc0

TConvertDeinterleave<7,6> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,6>::TConvertDeinterleave<7,6>
          (TConvertDeinterleave<7,6> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<7,6> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__06_05_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(7,6,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(7,6,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x2a) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<7,7> @ 1444a0ef0

TConvertDeinterleave<7,7> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,7>::TConvertDeinterleave<7,7>
          (TConvertDeinterleave<7,7> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<7,7> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__06_06_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(7,7,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(7,7,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x31) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<7,8> @ 1444a1010

TConvertDeinterleave<7,8> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,8>::TConvertDeinterleave<7,8>
          (TConvertDeinterleave<7,8> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<7,8> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__06_07_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(7,8,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(7,8,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x38) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<7,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<8,1> @ 1444a1140

TConvertDeinterleave<8,1> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,1>::TConvertDeinterleave<8,1>
          (TConvertDeinterleave<8,1> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<8,1> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__07_00_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(8,1,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(8,1,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<8,2> @ 1444a1270

TConvertDeinterleave<8,2> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,2>::TConvertDeinterleave<8,2>
          (TConvertDeinterleave<8,2> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<8,2> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__07_01_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(8,2,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(8,2,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x10) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,2> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<8,3> @ 1444a13a0

TConvertDeinterleave<8,3> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,3>::TConvertDeinterleave<8,3>
          (TConvertDeinterleave<8,3> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<8,3> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__07_02_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(8,3,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(8,3,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x18) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<8,4> @ 1444a14d0

TConvertDeinterleave<8,4> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,4>::TConvertDeinterleave<8,4>
          (TConvertDeinterleave<8,4> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<8,4> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__07_03_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(8,4,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(8,4,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x20) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,4> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<8,5> @ 1444a1600

TConvertDeinterleave<8,5> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,5>::TConvertDeinterleave<8,5>
          (TConvertDeinterleave<8,5> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<8,5> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__07_04_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(8,5,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(8,5,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,5> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<8,6> @ 1444a1730

TConvertDeinterleave<8,6> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,6>::TConvertDeinterleave<8,6>
          (TConvertDeinterleave<8,6> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<8,6> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__07_05_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(8,6,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(8,6,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x30) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,6> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<8,7> @ 1444a1860

TConvertDeinterleave<8,7> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,7>::TConvertDeinterleave<8,7>
          (TConvertDeinterleave<8,7> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<8,7> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__07_06_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(8,7,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(8,7,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x38) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,7> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TConvertDeinterleave<8,8> @ 1444a1990

TConvertDeinterleave<8,8> * __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,8>::TConvertDeinterleave<8,8>
          (TConvertDeinterleave<8,8> *this,FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TConvertDeinterleave<8,8> *pTVar3;
  
  this->_padding_ =
       (longlong)&___7__TConvertDeinterleave__07_07_ConvertDeinterleavePrivate_Audio__6B_;
  (this->ChannelGains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelGains).ArrayNum = 0;
  (this->ChannelGains).ArrayMax = 0;
  if (param_1->NumInputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumInputChannels == NumInputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x21,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_1->NumOutputChannels != 8) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.NumOutputChannels == NumOutputChannels",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  bVar2 = ChannelMapPrivate::Create2DGenericInputChannelMap(8,8,&this->ChannelGains);
  if (bVar2) {
    ChannelMapPrivate::TransposeOutputMajorOrderToInputMajorOrder(8,8,&this->ChannelGains);
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bSuccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->ChannelGains).ArrayNum != 0x40) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelGains.Num() == (NumInputChannels * NumOutputChannels)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x2d,L"Expected channel array of %d elements. Actual num elements: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TConvertDeinterleave<8,8> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// ~TConvertDeinterleave<1,1> @ 1444a5510

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,1>::~TConvertDeinterleave<1,1>
          (TConvertDeinterleave<1,1> *this)

{
  return;
}

// ~TConvertDeinterleave<1,2> @ 1444a5520

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,2>::~TConvertDeinterleave<1,2>
          (TConvertDeinterleave<1,2> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<1,3> @ 1444a5540

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,3>::~TConvertDeinterleave<1,3>
          (TConvertDeinterleave<1,3> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<1,4> @ 1444a5560

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,4>::~TConvertDeinterleave<1,4>
          (TConvertDeinterleave<1,4> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<1,5> @ 1444a5580

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,5>::~TConvertDeinterleave<1,5>
          (TConvertDeinterleave<1,5> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<1,6> @ 1444a55a0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,6>::~TConvertDeinterleave<1,6>
          (TConvertDeinterleave<1,6> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<1,7> @ 1444a55c0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,7>::~TConvertDeinterleave<1,7>
          (TConvertDeinterleave<1,7> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<1,8> @ 1444a55e0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,8>::~TConvertDeinterleave<1,8>
          (TConvertDeinterleave<1,8> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<2,1> @ 1444a5600

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,1>::~TConvertDeinterleave<2,1>
          (TConvertDeinterleave<2,1> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<2,2> @ 1444a5620

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,2>::~TConvertDeinterleave<2,2>
          (TConvertDeinterleave<2,2> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<2,3> @ 1444a5640

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,3>::~TConvertDeinterleave<2,3>
          (TConvertDeinterleave<2,3> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<2,4> @ 1444a5660

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,4>::~TConvertDeinterleave<2,4>
          (TConvertDeinterleave<2,4> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<2,5> @ 1444a5680

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,5>::~TConvertDeinterleave<2,5>
          (TConvertDeinterleave<2,5> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<2,6> @ 1444a56a0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,6>::~TConvertDeinterleave<2,6>
          (TConvertDeinterleave<2,6> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<2,7> @ 1444a56c0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,7>::~TConvertDeinterleave<2,7>
          (TConvertDeinterleave<2,7> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<2,8> @ 1444a56e0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,8>::~TConvertDeinterleave<2,8>
          (TConvertDeinterleave<2,8> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<3,1> @ 1444a5700

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,1>::~TConvertDeinterleave<3,1>
          (TConvertDeinterleave<3,1> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<3,2> @ 1444a5720

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,2>::~TConvertDeinterleave<3,2>
          (TConvertDeinterleave<3,2> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<3,3> @ 1444a5740

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,3>::~TConvertDeinterleave<3,3>
          (TConvertDeinterleave<3,3> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<3,4> @ 1444a5760

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,4>::~TConvertDeinterleave<3,4>
          (TConvertDeinterleave<3,4> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<3,5> @ 1444a5780

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,5>::~TConvertDeinterleave<3,5>
          (TConvertDeinterleave<3,5> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<3,6> @ 1444a57a0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,6>::~TConvertDeinterleave<3,6>
          (TConvertDeinterleave<3,6> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<3,7> @ 1444a57c0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,7>::~TConvertDeinterleave<3,7>
          (TConvertDeinterleave<3,7> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<3,8> @ 1444a57e0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,8>::~TConvertDeinterleave<3,8>
          (TConvertDeinterleave<3,8> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<4,1> @ 1444a5800

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,1>::~TConvertDeinterleave<4,1>
          (TConvertDeinterleave<4,1> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<4,2> @ 1444a5820

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,2>::~TConvertDeinterleave<4,2>
          (TConvertDeinterleave<4,2> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<4,3> @ 1444a5840

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,3>::~TConvertDeinterleave<4,3>
          (TConvertDeinterleave<4,3> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<4,4> @ 1444a5860

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,4>::~TConvertDeinterleave<4,4>
          (TConvertDeinterleave<4,4> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<4,5> @ 1444a5880

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,5>::~TConvertDeinterleave<4,5>
          (TConvertDeinterleave<4,5> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<4,6> @ 1444a58a0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,6>::~TConvertDeinterleave<4,6>
          (TConvertDeinterleave<4,6> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<4,7> @ 1444a58c0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,7>::~TConvertDeinterleave<4,7>
          (TConvertDeinterleave<4,7> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<4,8> @ 1444a58e0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,8>::~TConvertDeinterleave<4,8>
          (TConvertDeinterleave<4,8> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<5,1> @ 1444a5900

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,1>::~TConvertDeinterleave<5,1>
          (TConvertDeinterleave<5,1> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<5,2> @ 1444a5920

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,2>::~TConvertDeinterleave<5,2>
          (TConvertDeinterleave<5,2> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<5,3> @ 1444a5940

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,3>::~TConvertDeinterleave<5,3>
          (TConvertDeinterleave<5,3> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<5,4> @ 1444a5960

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,4>::~TConvertDeinterleave<5,4>
          (TConvertDeinterleave<5,4> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<5,5> @ 1444a5980

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,5>::~TConvertDeinterleave<5,5>
          (TConvertDeinterleave<5,5> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<5,6> @ 1444a59a0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,6>::~TConvertDeinterleave<5,6>
          (TConvertDeinterleave<5,6> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<5,7> @ 1444a59c0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,7>::~TConvertDeinterleave<5,7>
          (TConvertDeinterleave<5,7> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<5,8> @ 1444a59e0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,8>::~TConvertDeinterleave<5,8>
          (TConvertDeinterleave<5,8> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<6,1> @ 1444a5a00

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,1>::~TConvertDeinterleave<6,1>
          (TConvertDeinterleave<6,1> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<6,2> @ 1444a5a20

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,2>::~TConvertDeinterleave<6,2>
          (TConvertDeinterleave<6,2> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<6,3> @ 1444a5a40

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,3>::~TConvertDeinterleave<6,3>
          (TConvertDeinterleave<6,3> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<6,4> @ 1444a5a60

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,4>::~TConvertDeinterleave<6,4>
          (TConvertDeinterleave<6,4> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<6,5> @ 1444a5a80

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,5>::~TConvertDeinterleave<6,5>
          (TConvertDeinterleave<6,5> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<6,6> @ 1444a5aa0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,6>::~TConvertDeinterleave<6,6>
          (TConvertDeinterleave<6,6> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<6,7> @ 1444a5ac0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,7>::~TConvertDeinterleave<6,7>
          (TConvertDeinterleave<6,7> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<6,8> @ 1444a5ae0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,8>::~TConvertDeinterleave<6,8>
          (TConvertDeinterleave<6,8> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<7,1> @ 1444a5b00

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,1>::~TConvertDeinterleave<7,1>
          (TConvertDeinterleave<7,1> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<7,2> @ 1444a5b20

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,2>::~TConvertDeinterleave<7,2>
          (TConvertDeinterleave<7,2> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<7,3> @ 1444a5b40

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,3>::~TConvertDeinterleave<7,3>
          (TConvertDeinterleave<7,3> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<7,4> @ 1444a5b60

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,4>::~TConvertDeinterleave<7,4>
          (TConvertDeinterleave<7,4> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<7,5> @ 1444a5b80

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,5>::~TConvertDeinterleave<7,5>
          (TConvertDeinterleave<7,5> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<7,6> @ 1444a5ba0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,6>::~TConvertDeinterleave<7,6>
          (TConvertDeinterleave<7,6> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<7,7> @ 1444a5bc0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,7>::~TConvertDeinterleave<7,7>
          (TConvertDeinterleave<7,7> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<7,8> @ 1444a5be0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,8>::~TConvertDeinterleave<7,8>
          (TConvertDeinterleave<7,8> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<8,1> @ 1444a5c00

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,1>::~TConvertDeinterleave<8,1>
          (TConvertDeinterleave<8,1> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<8,2> @ 1444a5c20

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,2>::~TConvertDeinterleave<8,2>
          (TConvertDeinterleave<8,2> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<8,3> @ 1444a5c40

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,3>::~TConvertDeinterleave<8,3>
          (TConvertDeinterleave<8,3> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<8,4> @ 1444a5c60

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,4>::~TConvertDeinterleave<8,4>
          (TConvertDeinterleave<8,4> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<8,5> @ 1444a5c80

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,5>::~TConvertDeinterleave<8,5>
          (TConvertDeinterleave<8,5> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<8,6> @ 1444a5ca0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,6>::~TConvertDeinterleave<8,6>
          (TConvertDeinterleave<8,6> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<8,7> @ 1444a5cc0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,7>::~TConvertDeinterleave<8,7>
          (TConvertDeinterleave<8,7> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TConvertDeinterleave<8,8> @ 1444a5ce0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,8>::~TConvertDeinterleave<8,8>
          (TConvertDeinterleave<8,8> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ProcessAudio @ 1444c8380

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,1>::ProcessAudio
          (TConvertDeinterleave<1,1> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *_Src;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum != iVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAudio.Num() == GetMultichannelBufferNumFrames(OutAudio)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0xa5,L"Audio buffer frame count mismatch.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2->ArrayNum != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("1 == OutAudio.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0xa6,L"Output audio buffer not initialized to expected channel count.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = GetMultichannelBufferNumFrames(param_2);
  _Src = param_1->DataPtr;
  if (param_2->ArrayNum < 1) {
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
  memcpy(*(void **)(param_2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  return;
}

// ProcessAudio @ 1444c8470

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,2>::ProcessAudio
          (TConvertDeinterleave<1,2> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  TArrayView<float,int> local_48;
  TArrayView<float_const_,int> local_38 [2];
  
  iVar6 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum != iVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSamples.Num() == GetMultichannelBufferNumFrames(OutSamples)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x7c,L"Audio buffer frame count mismatch.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2->ArrayNum != 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x7d,L"Output audio buffer not initialized to expected channel count.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar6 = GetMultichannelBufferNumFrames(param_2);
  if ((this->ChannelGains).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = local_38[0]._12_4_;
  if (*(float *)(this->ChannelGains).AllocatorInstance.Data == 0.0) {
    if (param_2->ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    memset(*(void **)(param_2->AllocatorInstance).Data,0,(longlong)iVar6 * 4);
  }
  else {
    if (param_2->ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pfVar1 = *(float **)(param_2->AllocatorInstance).Data;
    if (iVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->ChannelGains).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_38[0].DataPtr = param_1->DataPtr;
    uVar3._0_4_ = param_1->ArrayNum;
    uVar3._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_48._12_4_ = local_38[0]._12_4_;
    local_48.ArrayNum = iVar6;
    local_48.DataPtr = pfVar1;
    local_38[0]._8_8_ = uVar3;
    ArrayMultiplyByConstant
              (local_38,*(float *)(this->ChannelGains).AllocatorInstance.Data,&local_48);
  }
  if ((this->ChannelGains).ArrayNum < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(float *)((this->ChannelGains).AllocatorInstance.Data + 4) == 0.0) {
    if (param_2->ArrayNum < 2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    memset(*(void **)((param_2->AllocatorInstance).Data + 0x10),0,(longlong)iVar6 * 4);
  }
  else {
    if (param_2->ArrayNum < 2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pfVar1 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
    if (iVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->ChannelGains).ArrayNum < 2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_38[0].DataPtr = param_1->DataPtr;
    local_38[0].ArrayNum = param_1->ArrayNum;
    local_38[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_48._12_4_ = uVar4;
    local_48.ArrayNum = iVar6;
    local_48.DataPtr = pfVar1;
    ArrayMultiplyByConstant
              (local_38,*(float *)((this->ChannelGains).AllocatorInstance.Data + 4),&local_48);
  }
  return;
}

// ProcessAudio @ 1444c8840

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,3>::ProcessAudio
          (TConvertDeinterleave<1,3> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  TArrayView<float,int> local_58;
  TArrayView<float_const_,int> local_48 [2];
  
  iVar6 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum != iVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSamples.Num() == GetMultichannelBufferNumFrames(OutSamples)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x7c,L"Audio buffer frame count mismatch.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2->ArrayNum != 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x7d,L"Output audio buffer not initialized to expected channel count.");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar6 = GetMultichannelBufferNumFrames(param_2);
  lVar7 = (longlong)iVar6;
  if ((this->ChannelGains).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = local_48[0]._12_4_;
  if (*(float *)(this->ChannelGains).AllocatorInstance.Data == 0.0) {
    if (param_2->ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    memset(*(void **)(param_2->AllocatorInstance).Data,0,lVar7 * 4);
  }
  else {
    if (param_2->ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pfVar1 = *(float **)(param_2->AllocatorInstance).Data;
    if (iVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->ChannelGains).ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_48[0].DataPtr = param_1->DataPtr;
    uVar3._0_4_ = param_1->ArrayNum;
    uVar3._4_4_ = *(undefined4 *)&param_1->field_0xc;
    local_58._12_4_ = local_48[0]._12_4_;
    local_58.ArrayNum = iVar6;
    local_58.DataPtr = pfVar1;
    local_48[0]._8_8_ = uVar3;
    ArrayMultiplyByConstant
              (local_48,*(float *)(this->ChannelGains).AllocatorInstance.Data,&local_58);
  }
  if ((this->ChannelGains).ArrayNum < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(float *)((this->ChannelGains).AllocatorInstance.Data + 4) == 0.0) {
    if (param_2->ArrayNum < 2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    memset(*(void **)((param_2->AllocatorInstance).Data + 0x10),0,lVar7 * 4);
  }
  else {
    if (param_2->ArrayNum < 2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pfVar1 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
    if (iVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->ChannelGains).ArrayNum < 2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_48[0].DataPtr = param_1->DataPtr;
    local_48[0].ArrayNum = param_1->ArrayNum;
    local_48[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_58._12_4_ = uVar4;
    local_58.ArrayNum = iVar6;
    local_58.DataPtr = pfVar1;
    ArrayMultiplyByConstant
              (local_48,*(float *)((this->ChannelGains).AllocatorInstance.Data + 4),&local_58);
  }
  if ((this->ChannelGains).ArrayNum < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(float *)((this->ChannelGains).AllocatorInstance.Data + 8) == 0.0) {
    if (param_2->ArrayNum < 3) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    memset(*(void **)((param_2->AllocatorInstance).Data + 0x20),0,lVar7 * 4);
  }
  else {
    if (param_2->ArrayNum < 3) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pfVar1 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
    if (iVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->ChannelGains).ArrayNum < 3) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_48[0].DataPtr = param_1->DataPtr;
    local_48[0].ArrayNum = param_1->ArrayNum;
    local_48[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_58._12_4_ = uVar4;
    local_58.ArrayNum = iVar6;
    local_58.DataPtr = pfVar1;
    ArrayMultiplyByConstant
              (local_48,*(float *)((this->ChannelGains).AllocatorInstance.Data + 8),&local_58);
  }
  return;
}

// ProcessAudio @ 1444c8d80

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,4>::ProcessAudio
          (TConvertDeinterleave<1,4> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58 [2];
  
  iVar5 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum != iVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSamples.Num() == GetMultichannelBufferNumFrames(OutSamples)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x7c,L"Audio buffer frame count mismatch.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2->ArrayNum != 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x7d,L"Output audio buffer not initialized to expected channel count.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = GetMultichannelBufferNumFrames(param_2);
  uVar3 = local_58[0]._12_4_;
  iVar6 = 0;
  lVar8 = 0;
  lVar7 = 0;
  do {
    if ((this->ChannelGains).ArrayNum <= iVar6) {
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
    if (*(float *)((this->ChannelGains).AllocatorInstance.Data + lVar7) == 0.0) {
      if (param_2->ArrayNum <= iVar6) {
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
      memset(*(void **)((param_2->AllocatorInstance).Data + lVar8),0,(longlong)iVar5 << 2);
    }
    else {
      if (param_2->ArrayNum <= iVar6) {
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
      pfVar1 = *(float **)((param_2->AllocatorInstance).Data + lVar8);
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((this->ChannelGains).ArrayNum <= iVar6) {
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
      local_68._12_4_ = uVar3;
      local_68.ArrayNum = iVar5;
      local_58[0].DataPtr = param_1->DataPtr;
      local_58[0].ArrayNum = param_1->ArrayNum;
      local_58[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
      local_68.DataPtr = pfVar1;
      ArrayMultiplyByConstant
                (local_58,*(float *)((this->ChannelGains).AllocatorInstance.Data + lVar7),&local_68)
      ;
    }
    iVar6 = iVar6 + 1;
    lVar7 = lVar7 + 4;
    lVar8 = lVar8 + 0x10;
  } while (iVar6 < 4);
  return;
}

// ProcessAudio @ 1444c8ff0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,5>::ProcessAudio
          (TConvertDeinterleave<1,5> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58 [2];
  
  iVar5 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum != iVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSamples.Num() == GetMultichannelBufferNumFrames(OutSamples)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x7c,L"Audio buffer frame count mismatch.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2->ArrayNum != 5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x7d,L"Output audio buffer not initialized to expected channel count.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = GetMultichannelBufferNumFrames(param_2);
  uVar3 = local_58[0]._12_4_;
  iVar6 = 0;
  lVar8 = 0;
  lVar7 = 0;
  do {
    if ((this->ChannelGains).ArrayNum <= iVar6) {
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
    if (*(float *)((this->ChannelGains).AllocatorInstance.Data + lVar7) == 0.0) {
      if (param_2->ArrayNum <= iVar6) {
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
      memset(*(void **)((param_2->AllocatorInstance).Data + lVar8),0,(longlong)iVar5 << 2);
    }
    else {
      if (param_2->ArrayNum <= iVar6) {
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
      pfVar1 = *(float **)((param_2->AllocatorInstance).Data + lVar8);
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((this->ChannelGains).ArrayNum <= iVar6) {
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
      local_68._12_4_ = uVar3;
      local_68.ArrayNum = iVar5;
      local_58[0].DataPtr = param_1->DataPtr;
      local_58[0].ArrayNum = param_1->ArrayNum;
      local_58[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
      local_68.DataPtr = pfVar1;
      ArrayMultiplyByConstant
                (local_58,*(float *)((this->ChannelGains).AllocatorInstance.Data + lVar7),&local_68)
      ;
    }
    iVar6 = iVar6 + 1;
    lVar7 = lVar7 + 4;
    lVar8 = lVar8 + 0x10;
  } while (iVar6 < 5);
  return;
}

// ProcessAudio @ 1444c9260

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,6>::ProcessAudio
          (TConvertDeinterleave<1,6> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58 [2];
  
  iVar5 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum != iVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSamples.Num() == GetMultichannelBufferNumFrames(OutSamples)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x7c,L"Audio buffer frame count mismatch.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2->ArrayNum != 6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x7d,L"Output audio buffer not initialized to expected channel count.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = GetMultichannelBufferNumFrames(param_2);
  uVar3 = local_58[0]._12_4_;
  iVar6 = 0;
  lVar8 = 0;
  lVar7 = 0;
  do {
    if ((this->ChannelGains).ArrayNum <= iVar6) {
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
    if (*(float *)((this->ChannelGains).AllocatorInstance.Data + lVar7) == 0.0) {
      if (param_2->ArrayNum <= iVar6) {
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
      memset(*(void **)((param_2->AllocatorInstance).Data + lVar8),0,(longlong)iVar5 << 2);
    }
    else {
      if (param_2->ArrayNum <= iVar6) {
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
      pfVar1 = *(float **)((param_2->AllocatorInstance).Data + lVar8);
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((this->ChannelGains).ArrayNum <= iVar6) {
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
      local_68._12_4_ = uVar3;
      local_68.ArrayNum = iVar5;
      local_58[0].DataPtr = param_1->DataPtr;
      local_58[0].ArrayNum = param_1->ArrayNum;
      local_58[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
      local_68.DataPtr = pfVar1;
      ArrayMultiplyByConstant
                (local_58,*(float *)((this->ChannelGains).AllocatorInstance.Data + lVar7),&local_68)
      ;
    }
    iVar6 = iVar6 + 1;
    lVar7 = lVar7 + 4;
    lVar8 = lVar8 + 0x10;
  } while (iVar6 < 6);
  return;
}

// ProcessAudio @ 1444c94d0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,7>::ProcessAudio
          (TConvertDeinterleave<1,7> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58 [2];
  
  iVar5 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum != iVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSamples.Num() == GetMultichannelBufferNumFrames(OutSamples)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x7c,L"Audio buffer frame count mismatch.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2->ArrayNum != 7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x7d,L"Output audio buffer not initialized to expected channel count.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = GetMultichannelBufferNumFrames(param_2);
  uVar3 = local_58[0]._12_4_;
  iVar6 = 0;
  lVar8 = 0;
  lVar7 = 0;
  do {
    if ((this->ChannelGains).ArrayNum <= iVar6) {
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
    if (*(float *)((this->ChannelGains).AllocatorInstance.Data + lVar7) == 0.0) {
      if (param_2->ArrayNum <= iVar6) {
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
      memset(*(void **)((param_2->AllocatorInstance).Data + lVar8),0,(longlong)iVar5 << 2);
    }
    else {
      if (param_2->ArrayNum <= iVar6) {
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
      pfVar1 = *(float **)((param_2->AllocatorInstance).Data + lVar8);
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((this->ChannelGains).ArrayNum <= iVar6) {
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
      local_68._12_4_ = uVar3;
      local_68.ArrayNum = iVar5;
      local_58[0].DataPtr = param_1->DataPtr;
      local_58[0].ArrayNum = param_1->ArrayNum;
      local_58[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
      local_68.DataPtr = pfVar1;
      ArrayMultiplyByConstant
                (local_58,*(float *)((this->ChannelGains).AllocatorInstance.Data + lVar7),&local_68)
      ;
    }
    iVar6 = iVar6 + 1;
    lVar7 = lVar7 + 4;
    lVar8 = lVar8 + 0x10;
  } while (iVar6 < 7);
  return;
}

// ProcessAudio @ 1444c9740

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<1,8>::ProcessAudio
          (TConvertDeinterleave<1,8> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58 [2];
  
  iVar5 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum != iVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSamples.Num() == GetMultichannelBufferNumFrames(OutSamples)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x7c,L"Audio buffer frame count mismatch.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2->ArrayNum != 8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x7d,L"Output audio buffer not initialized to expected channel count.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = GetMultichannelBufferNumFrames(param_2);
  uVar3 = local_58[0]._12_4_;
  iVar6 = 0;
  lVar8 = 0;
  lVar7 = 0;
  do {
    if ((this->ChannelGains).ArrayNum <= iVar6) {
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
    if (*(float *)((this->ChannelGains).AllocatorInstance.Data + lVar7) == 0.0) {
      if (param_2->ArrayNum <= iVar6) {
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
      memset(*(void **)((param_2->AllocatorInstance).Data + lVar8),0,(longlong)iVar5 << 2);
    }
    else {
      if (param_2->ArrayNum <= iVar6) {
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
      pfVar1 = *(float **)((param_2->AllocatorInstance).Data + lVar8);
      if (iVar5 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((this->ChannelGains).ArrayNum <= iVar6) {
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
      local_68._12_4_ = uVar3;
      local_68.ArrayNum = iVar5;
      local_58[0].DataPtr = param_1->DataPtr;
      local_58[0].ArrayNum = param_1->ArrayNum;
      local_58[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
      local_68.DataPtr = pfVar1;
      ArrayMultiplyByConstant
                (local_58,*(float *)((this->ChannelGains).AllocatorInstance.Data + lVar7),&local_68)
      ;
    }
    iVar6 = iVar6 + 1;
    lVar7 = lVar7 + 4;
    lVar8 = lVar8 + 0x10;
  } while (iVar6 < 8);
  return;
}

// ProcessAudio @ 1444c99b0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,1>::ProcessAudio
          (TConvertDeinterleave<2,1> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  
  if (((param_1->ArrayNum & 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InSamples.Num() % NumInputChannels) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                         ,0x39,L"Input sample buffer contains partial audio frame."), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  if ((param_1->ArrayNum / 2 != iVar7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                         ,0x3a,L"Audio buffer frame count mismatch."), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2->ArrayNum != 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumOutputChannels == OutSamples.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                         ,0x3b,L"Output audio buffer not initialized to expected channel count."),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  lVar9 = 0;
  pfVar1 = param_1->DataPtr;
  if ((param_2->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar8 = *(float **)(param_2->AllocatorInstance).Data;
  if (0 < iVar7) {
    do {
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      lVar4 = lVar9 * 2;
      lVar5 = lVar9 * 2;
      lVar9 = lVar9 + 1;
      *pfVar8 = *(float *)(pFVar2 + 4) * pfVar1[lVar4 + 1] + *(float *)pFVar2 * pfVar1[lVar5];
      pfVar8 = pfVar8 + 1;
    } while (lVar9 < iVar7);
  }
  return;
}

// ProcessAudio @ 1444c9b10

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,2>::ProcessAudio
          (TConvertDeinterleave<2,2> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  
  if ((param_1->ArrayNum & 1) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum / 2 != iVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2->ArrayNum != 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  lVar9 = 0;
  pfVar1 = param_1->DataPtr;
  if (param_2->ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar10 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar8 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (0 < iVar7) {
    do {
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar10 = *(float *)(pFVar2 + 4) * pfVar1[lVar9 * 2 + 1] +
                 *(float *)pFVar2 * pfVar1[lVar9 * 2];
      pfVar10 = pfVar10 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      lVar4 = lVar9 * 2;
      lVar5 = lVar9 * 2;
      lVar9 = lVar9 + 1;
      *pfVar8 = *(float *)(pFVar2 + 0xc) * pfVar1[lVar4 + 1] +
                *(float *)(pFVar2 + 8) * pfVar1[lVar5];
      pfVar8 = pfVar8 + 1;
    } while (lVar9 < iVar7);
  }
  return;
}

// ProcessAudio @ 1444c9ce0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,3>::ProcessAudio
          (TConvertDeinterleave<2,3> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  
  if ((param_1->ArrayNum & 1) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum / 2 != iVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2->ArrayNum != 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  lVar9 = 0;
  pfVar1 = param_1->DataPtr;
  if (param_2->ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar11 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar10 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar8 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (0 < iVar7) {
    do {
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar11 = *(float *)(pFVar2 + 4) * pfVar1[lVar9 * 2 + 1] +
                 *(float *)pFVar2 * pfVar1[lVar9 * 2];
      pfVar11 = pfVar11 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar10 = *(float *)(pFVar2 + 0xc) * pfVar1[lVar9 * 2 + 1] +
                 pfVar1[lVar9 * 2] * *(float *)(pFVar2 + 8);
      pfVar10 = pfVar10 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      lVar4 = lVar9 * 2;
      lVar5 = lVar9 * 2;
      lVar9 = lVar9 + 1;
      *pfVar8 = *(float *)(pFVar2 + 0x14) * pfVar1[lVar5 + 1] +
                pfVar1[lVar4] * *(float *)(pFVar2 + 0x10);
      pfVar8 = pfVar8 + 1;
    } while (lVar9 < iVar7);
  }
  return;
}

// ProcessAudio @ 1444c9f10

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,4>::ProcessAudio
          (TConvertDeinterleave<2,4> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  
  if ((param_1->ArrayNum & 1) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum / 2 != iVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2->ArrayNum != 4) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  lVar10 = 0;
  pfVar1 = param_1->DataPtr;
  if (param_2->ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar11 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar9 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar8 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (0 < iVar7) {
    do {
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar11 = *(float *)(pFVar2 + 4) * pfVar1[lVar10 * 2 + 1] +
                 pfVar1[lVar10 * 2] * *(float *)pFVar2;
      pfVar11 = pfVar11 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar12 = *(float *)(pFVar2 + 0xc) * pfVar1[lVar10 * 2 + 1] +
                 *(float *)(pFVar2 + 8) * pfVar1[lVar10 * 2];
      pfVar12 = pfVar12 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar9 = *(float *)(pFVar2 + 0x14) * pfVar1[lVar10 * 2 + 1] +
                *(float *)(pFVar2 + 0x10) * pfVar1[lVar10 * 2];
      pfVar9 = pfVar9 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      lVar4 = lVar10 * 2;
      lVar5 = lVar10 * 2;
      lVar10 = lVar10 + 1;
      *pfVar8 = *(float *)(pFVar2 + 0x1c) * pfVar1[lVar5 + 1] +
                pfVar1[lVar4] * *(float *)(pFVar2 + 0x18);
      pfVar8 = pfVar8 + 1;
    } while (lVar10 < iVar7);
  }
  return;
}

// ProcessAudio @ 1444ca1c0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,5>::ProcessAudio
          (TConvertDeinterleave<2,5> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  
  if (((param_1->ArrayNum & 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InSamples.Num() % NumInputChannels) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                         ,0x39,L"Input sample buffer contains partial audio frame."), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  if ((param_1->ArrayNum / 2 != iVar7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                         ,0x3a,L"Audio buffer frame count mismatch."), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2->ArrayNum != 5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumOutputChannels == OutSamples.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                         ,0x3b,L"Output audio buffer not initialized to expected channel count."),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  lVar9 = 0;
  pfVar1 = param_1->DataPtr;
  if ((param_2->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar11 = *(float **)(param_2->AllocatorInstance).Data;
  if ((param_2->ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar10 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if ((param_2->ArrayNum < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar13 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if ((param_2->ArrayNum < 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if ((param_2->ArrayNum < 5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar8 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (0 < (longlong)iVar7) {
    do {
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar11 = *(float *)(pFVar2 + 4) * pfVar1[lVar9 * 2 + 1] +
                 *(float *)pFVar2 * pfVar1[lVar9 * 2];
      pfVar11 = pfVar11 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar10 = *(float *)(pFVar2 + 0xc) * pfVar1[lVar9 * 2 + 1] +
                 pfVar1[lVar9 * 2] * *(float *)(pFVar2 + 8);
      pfVar10 = pfVar10 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar13 = *(float *)(pFVar2 + 0x14) * pfVar1[lVar9 * 2 + 1] +
                 pfVar1[lVar9 * 2] * *(float *)(pFVar2 + 0x10);
      pfVar13 = pfVar13 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar12 = *(float *)(pFVar2 + 0x1c) * pfVar1[lVar9 * 2 + 1] +
                 pfVar1[lVar9 * 2] * *(float *)(pFVar2 + 0x18);
      pfVar12 = pfVar12 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      lVar4 = lVar9 * 2;
      lVar5 = lVar9 * 2;
      lVar9 = lVar9 + 1;
      *pfVar8 = *(float *)(pFVar2 + 0x24) * pfVar1[lVar4 + 1] +
                *(float *)(pFVar2 + 0x20) * pfVar1[lVar5];
      pfVar8 = pfVar8 + 1;
    } while (lVar9 < iVar7);
  }
  return;
}

// ProcessAudio @ 1444ca4e0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,6>::ProcessAudio
          (TConvertDeinterleave<2,6> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *local_30;
  
  if ((param_1->ArrayNum & 1) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum / 2 != iVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2->ArrayNum != 6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  lVar9 = 0;
  pfVar1 = param_1->DataPtr;
  if (param_2->ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_30 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar11 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar10 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar13 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar8 = *(float **)((param_2->AllocatorInstance).Data + 0x50);
  if (0 < (longlong)iVar7) {
    do {
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *local_30 = *(float *)(pFVar2 + 4) * pfVar1[lVar9 * 2 + 1] +
                  pfVar1[lVar9 * 2] * *(float *)pFVar2;
      local_30 = local_30 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar11 = *(float *)(pFVar2 + 0xc) * pfVar1[lVar9 * 2 + 1] +
                 *(float *)(pFVar2 + 8) * pfVar1[lVar9 * 2];
      pfVar11 = pfVar11 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar10 = *(float *)(pFVar2 + 0x14) * pfVar1[lVar9 * 2 + 1] +
                 *(float *)(pFVar2 + 0x10) * pfVar1[lVar9 * 2];
      pfVar10 = pfVar10 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar13 = *(float *)(pFVar2 + 0x1c) * pfVar1[lVar9 * 2 + 1] +
                 *(float *)(pFVar2 + 0x18) * pfVar1[lVar9 * 2];
      pfVar13 = pfVar13 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar12 = *(float *)(pFVar2 + 0x24) * pfVar1[lVar9 * 2 + 1] +
                 pfVar1[lVar9 * 2] * *(float *)(pFVar2 + 0x20);
      pfVar12 = pfVar12 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      lVar4 = lVar9 * 2;
      lVar5 = lVar9 * 2;
      lVar9 = lVar9 + 1;
      *pfVar8 = *(float *)(pFVar2 + 0x2c) * pfVar1[lVar5 + 1] +
                pfVar1[lVar4] * *(float *)(pFVar2 + 0x28);
      pfVar8 = pfVar8 + 1;
    } while (lVar9 < iVar7);
  }
  return;
}

// ProcessAudio @ 1444ca870

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,7>::ProcessAudio
          (TConvertDeinterleave<2,7> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *local_40;
  float *local_38;
  
  if (((param_1->ArrayNum & 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InSamples.Num() % NumInputChannels) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                         ,0x39,L"Input sample buffer contains partial audio frame."), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  if ((param_1->ArrayNum / 2 != iVar7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                         ,0x3a,L"Audio buffer frame count mismatch."), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2->ArrayNum != 7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumOutputChannels == OutSamples.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                         ,0x3b,L"Output audio buffer not initialized to expected channel count."),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  lVar9 = 0;
  pfVar1 = param_1->DataPtr;
  if ((param_2->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_40 = *(float **)(param_2->AllocatorInstance).Data;
  if ((param_2->ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if ((param_2->ArrayNum < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar11 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if ((param_2->ArrayNum < 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar10 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if ((param_2->ArrayNum < 5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar13 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if ((param_2->ArrayNum < 6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x50);
  if ((param_2->ArrayNum < 7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar8 = *(float **)((param_2->AllocatorInstance).Data + 0x60);
  if (0 < (longlong)iVar7) {
    do {
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *local_40 = *(float *)(pFVar2 + 4) * pfVar1[lVar9 * 2 + 1] +
                  *(float *)pFVar2 * pfVar1[lVar9 * 2];
      local_40 = local_40 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *local_38 = *(float *)(pFVar2 + 0xc) * pfVar1[lVar9 * 2 + 1] +
                  *(float *)(pFVar2 + 8) * pfVar1[lVar9 * 2];
      local_38 = local_38 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar11 = *(float *)(pFVar2 + 0x14) * pfVar1[lVar9 * 2 + 1] +
                 *(float *)(pFVar2 + 0x10) * pfVar1[lVar9 * 2];
      pfVar11 = pfVar11 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar10 = *(float *)(pFVar2 + 0x1c) * pfVar1[lVar9 * 2 + 1] +
                 *(float *)(pFVar2 + 0x18) * pfVar1[lVar9 * 2];
      pfVar10 = pfVar10 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar13 = *(float *)(pFVar2 + 0x24) * pfVar1[lVar9 * 2 + 1] +
                 *(float *)(pFVar2 + 0x20) * pfVar1[lVar9 * 2];
      pfVar13 = pfVar13 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar12 = *(float *)(pFVar2 + 0x2c) * pfVar1[lVar9 * 2 + 1] +
                 *(float *)(pFVar2 + 0x28) * pfVar1[lVar9 * 2];
      pfVar12 = pfVar12 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      lVar4 = lVar9 * 2;
      lVar5 = lVar9 * 2;
      lVar9 = lVar9 + 1;
      *pfVar8 = *(float *)(pFVar2 + 0x34) * pfVar1[lVar4 + 1] +
                *(float *)(pFVar2 + 0x30) * pfVar1[lVar5];
      pfVar8 = pfVar8 + 1;
    } while (lVar9 < iVar7);
  }
  return;
}

// ProcessAudio @ 1444cac80

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<2,8>::ProcessAudio
          (TConvertDeinterleave<2,8> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *local_40;
  float *local_38;
  float *local_30;
  
  if ((param_1->ArrayNum & 1) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum / 2 != iVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2->ArrayNum != 8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  lVar9 = 0;
  pfVar1 = param_1->DataPtr;
  if (param_2->ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_40 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_30 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar11 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar10 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar13 = *(float **)((param_2->AllocatorInstance).Data + 0x50);
  if (param_2->ArrayNum < 7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x60);
  if (param_2->ArrayNum < 8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pfVar8 = *(float **)((param_2->AllocatorInstance).Data + 0x70);
  if (0 < (longlong)iVar7) {
    do {
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *local_40 = *(float *)(pFVar2 + 4) * pfVar1[lVar9 * 2 + 1] +
                  pfVar1[lVar9 * 2] * *(float *)pFVar2;
      local_40 = local_40 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *local_38 = *(float *)(pFVar2 + 0xc) * pfVar1[lVar9 * 2 + 1] +
                  *(float *)(pFVar2 + 8) * pfVar1[lVar9 * 2];
      local_38 = local_38 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *local_30 = *(float *)(pFVar2 + 0x14) * pfVar1[lVar9 * 2 + 1] +
                  *(float *)(pFVar2 + 0x10) * pfVar1[lVar9 * 2];
      local_30 = local_30 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar11 = *(float *)(pFVar2 + 0x1c) * pfVar1[lVar9 * 2 + 1] +
                 pfVar1[lVar9 * 2] * *(float *)(pFVar2 + 0x18);
      pfVar11 = pfVar11 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar10 = *(float *)(pFVar2 + 0x24) * pfVar1[lVar9 * 2 + 1] +
                 pfVar1[lVar9 * 2] * *(float *)(pFVar2 + 0x20);
      pfVar10 = pfVar10 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar13 = *(float *)(pFVar2 + 0x2c) * pfVar1[lVar9 * 2 + 1] +
                 pfVar1[lVar9 * 2] * *(float *)(pFVar2 + 0x28);
      pfVar13 = pfVar13 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar12 = *(float *)(pFVar2 + 0x34) * pfVar1[lVar9 * 2 + 1] +
                 *(float *)(pFVar2 + 0x30) * pfVar1[lVar9 * 2];
      pfVar12 = pfVar12 + 1;
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      lVar4 = lVar9 * 2;
      lVar5 = lVar9 * 2;
      lVar9 = lVar9 + 1;
      *pfVar8 = *(float *)(pFVar2 + 0x3c) * pfVar1[lVar5 + 1] +
                pfVar1[lVar4] * *(float *)(pFVar2 + 0x38);
      pfVar8 = pfVar8 + 1;
    } while (lVar9 < iVar7);
  }
  return;
}

// ProcessAudio @ 1444cb100

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,1>::ProcessAudio
          (TConvertDeinterleave<3,1> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  
  iVar8 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  iVar8 = param_1->ArrayNum;
  if (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2->ArrayNum != 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = GetMultichannelBufferNumFrames(param_2);
  pfVar10 = param_1->DataPtr;
  lVar11 = (longlong)iVar8;
  if (param_2->ArrayNum < 1) {
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
  pfVar9 = *(float **)(param_2->AllocatorInstance).Data;
  if (0 < iVar8) {
    pfVar10 = pfVar10 + 2;
    do {
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar10 + -1;
      pfVar2 = pfVar10 + -2;
      fVar3 = *pfVar10;
      pfVar10 = pfVar10 + 3;
      *pfVar9 = *pfVar1 * *(float *)(pFVar4 + 4) + *pfVar2 * *(float *)pFVar4 +
                *(float *)(pFVar4 + 8) * fVar3;
      pfVar9 = pfVar9 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// ProcessAudio @ 1444cb290

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,2>::ProcessAudio
          (TConvertDeinterleave<3,2> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  
  iVar8 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  iVar8 = param_1->ArrayNum;
  if (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2->ArrayNum != 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = GetMultichannelBufferNumFrames(param_2);
  pfVar9 = param_1->DataPtr;
  lVar11 = (longlong)iVar8;
  if (param_2->ArrayNum < 1) {
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
  pfVar12 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
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
  pfVar10 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (0 < iVar8) {
    pfVar9 = pfVar9 + 2;
    do {
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar12 = *(float *)(pFVar4 + 4) * pfVar9[-1] + pfVar9[-2] * *(float *)pFVar4 +
                 *(float *)(pFVar4 + 8) * *pfVar9;
      pfVar12 = pfVar12 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar9 + -1;
      pfVar2 = pfVar9 + -2;
      fVar3 = *pfVar9;
      pfVar9 = pfVar9 + 3;
      *pfVar10 = *(float *)(pFVar4 + 0x10) * *pfVar1 + *(float *)(pFVar4 + 0xc) * *pfVar2 +
                 *(float *)(pFVar4 + 0x14) * fVar3;
      pfVar10 = pfVar10 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// ProcessAudio @ 1444cb490

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,3>::ProcessAudio
          (TConvertDeinterleave<3,3> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  
  iVar8 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  iVar8 = param_1->ArrayNum;
  if (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2->ArrayNum != 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = GetMultichannelBufferNumFrames(param_2);
  pfVar9 = param_1->DataPtr;
  lVar13 = (longlong)iVar8;
  if (param_2->ArrayNum < 1) {
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
  pfVar10 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
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
  pfVar11 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
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
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (0 < iVar8) {
    pfVar9 = pfVar9 + 2;
    do {
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar10 = *(float *)(pFVar4 + 4) * pfVar9[-1] + *(float *)pFVar4 * pfVar9[-2] +
                 *(float *)(pFVar4 + 8) * *pfVar9;
      pfVar10 = pfVar10 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar11 = *(float *)(pFVar4 + 0x10) * pfVar9[-1] + *(float *)(pFVar4 + 0xc) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x14) * *pfVar9;
      pfVar11 = pfVar11 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar9 + -1;
      pfVar2 = pfVar9 + -2;
      fVar3 = *pfVar9;
      pfVar9 = pfVar9 + 3;
      *pfVar12 = *(float *)(pFVar4 + 0x1c) * *pfVar1 + *(float *)(pFVar4 + 0x18) * *pfVar2 +
                 *(float *)(pFVar4 + 0x20) * fVar3;
      pfVar12 = pfVar12 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

// ProcessAudio @ 1444cb710

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,4>::ProcessAudio
          (TConvertDeinterleave<3,4> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  
  iVar8 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  iVar8 = param_1->ArrayNum;
  if (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2->ArrayNum != 4) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = GetMultichannelBufferNumFrames(param_2);
  pfVar9 = param_1->DataPtr;
  lVar14 = (longlong)iVar8;
  if (param_2->ArrayNum < 1) {
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
  pfVar10 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
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
  pfVar11 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
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
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
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
  pfVar13 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (0 < iVar8) {
    pfVar9 = pfVar9 + 2;
    do {
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar10 = *(float *)(pFVar4 + 4) * pfVar9[-1] + pfVar9[-2] * *(float *)pFVar4 +
                 *(float *)(pFVar4 + 8) * *pfVar9;
      pfVar10 = pfVar10 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar11 = *(float *)(pFVar4 + 0x10) * pfVar9[-1] + *(float *)(pFVar4 + 0xc) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x14) * *pfVar9;
      pfVar11 = pfVar11 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar12 = *(float *)(pFVar4 + 0x1c) * pfVar9[-1] + *(float *)(pFVar4 + 0x18) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x20) * *pfVar9;
      pfVar12 = pfVar12 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar9 + -1;
      pfVar2 = pfVar9 + -2;
      fVar3 = *pfVar9;
      pfVar9 = pfVar9 + 3;
      *pfVar13 = *(float *)(pFVar4 + 0x28) * *pfVar1 + *(float *)(pFVar4 + 0x24) * *pfVar2 +
                 *(float *)(pFVar4 + 0x2c) * fVar3;
      pfVar13 = pfVar13 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}

// ProcessAudio @ 1444cba00

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,5>::ProcessAudio
          (TConvertDeinterleave<3,5> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  
  iVar8 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  iVar8 = param_1->ArrayNum;
  if (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2->ArrayNum != 5) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = GetMultichannelBufferNumFrames(param_2);
  pfVar9 = param_1->DataPtr;
  lVar13 = (longlong)iVar8;
  if (param_2->ArrayNum < 1) {
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
  pfVar15 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
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
  pfVar14 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
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
  pfVar10 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
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
  pfVar11 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
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
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (0 < iVar8) {
    pfVar9 = pfVar9 + 2;
    do {
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar15 = *(float *)(pFVar4 + 4) * pfVar9[-1] + *(float *)pFVar4 * pfVar9[-2] +
                 *(float *)(pFVar4 + 8) * *pfVar9;
      pfVar15 = pfVar15 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar14 = *(float *)(pFVar4 + 0x10) * pfVar9[-1] + *(float *)(pFVar4 + 0xc) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x14) * *pfVar9;
      pfVar14 = pfVar14 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar10 = *(float *)(pFVar4 + 0x1c) * pfVar9[-1] + *(float *)(pFVar4 + 0x18) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x20) * *pfVar9;
      pfVar10 = pfVar10 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar11 = *(float *)(pFVar4 + 0x28) * pfVar9[-1] + *(float *)(pFVar4 + 0x24) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x2c) * *pfVar9;
      pfVar11 = pfVar11 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar9 + -1;
      pfVar2 = pfVar9 + -2;
      fVar3 = *pfVar9;
      pfVar9 = pfVar9 + 3;
      *pfVar12 = *(float *)(pFVar4 + 0x34) * *pfVar1 + *(float *)(pFVar4 + 0x30) * *pfVar2 +
                 *(float *)(pFVar4 + 0x38) * fVar3;
      pfVar12 = pfVar12 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

// ProcessAudio @ 1444cbd80

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,6>::ProcessAudio
          (TConvertDeinterleave<3,6> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  
  iVar8 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  iVar8 = param_1->ArrayNum;
  if (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2->ArrayNum != 6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = GetMultichannelBufferNumFrames(param_2);
  lVar14 = (longlong)iVar8;
  pfVar9 = param_1->DataPtr;
  if (param_2->ArrayNum < 1) {
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
  pfVar13 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
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
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
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
  pfVar15 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
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
  pfVar10 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
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
  pfVar11 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
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
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x50);
  if (0 < iVar8) {
    pfVar9 = pfVar9 + 2;
    do {
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar13 = *(float *)(pFVar4 + 4) * pfVar9[-1] + *(float *)pFVar4 * pfVar9[-2] +
                 *(float *)(pFVar4 + 8) * *pfVar9;
      pfVar13 = pfVar13 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar16 = *(float *)(pFVar4 + 0x10) * pfVar9[-1] + *(float *)(pFVar4 + 0xc) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x14) * *pfVar9;
      pfVar16 = pfVar16 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar15 = *(float *)(pFVar4 + 0x1c) * pfVar9[-1] + *(float *)(pFVar4 + 0x18) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x20) * *pfVar9;
      pfVar15 = pfVar15 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar10 = *(float *)(pFVar4 + 0x28) * pfVar9[-1] + *(float *)(pFVar4 + 0x24) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x2c) * *pfVar9;
      pfVar10 = pfVar10 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar11 = *(float *)(pFVar4 + 0x34) * pfVar9[-1] + *(float *)(pFVar4 + 0x30) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x38) * *pfVar9;
      pfVar11 = pfVar11 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar9 + -1;
      pfVar2 = pfVar9 + -2;
      fVar3 = *pfVar9;
      pfVar9 = pfVar9 + 3;
      *pfVar12 = *(float *)(pFVar4 + 0x40) * *pfVar1 + *(float *)(pFVar4 + 0x3c) * *pfVar2 +
                 *(float *)(pFVar4 + 0x44) * fVar3;
      pfVar12 = pfVar12 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}

// ProcessAudio @ 1444cc170

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,7>::ProcessAudio
          (TConvertDeinterleave<3,7> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  float *local_38;
  
  iVar8 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  iVar8 = param_1->ArrayNum;
  if (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2->ArrayNum != 7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = GetMultichannelBufferNumFrames(param_2);
  lVar14 = (longlong)iVar8;
  pfVar9 = param_1->DataPtr;
  if (param_2->ArrayNum < 1) {
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
  local_38 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
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
  pfVar13 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
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
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
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
  pfVar15 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
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
  pfVar10 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
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
  pfVar11 = *(float **)((param_2->AllocatorInstance).Data + 0x50);
  if (param_2->ArrayNum < 7) {
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
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x60);
  if (0 < iVar8) {
    pfVar9 = pfVar9 + 2;
    do {
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *local_38 = *(float *)(pFVar4 + 4) * pfVar9[-1] + *(float *)pFVar4 * pfVar9[-2] +
                  *(float *)(pFVar4 + 8) * *pfVar9;
      local_38 = local_38 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar13 = *(float *)(pFVar4 + 0x10) * pfVar9[-1] + *(float *)(pFVar4 + 0xc) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x14) * *pfVar9;
      pfVar13 = pfVar13 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar16 = *(float *)(pFVar4 + 0x1c) * pfVar9[-1] + pfVar9[-2] * *(float *)(pFVar4 + 0x18) +
                 *(float *)(pFVar4 + 0x20) * *pfVar9;
      pfVar16 = pfVar16 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar15 = *(float *)(pFVar4 + 0x28) * pfVar9[-1] + *(float *)(pFVar4 + 0x24) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x2c) * *pfVar9;
      pfVar15 = pfVar15 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar10 = *(float *)(pFVar4 + 0x34) * pfVar9[-1] + *(float *)(pFVar4 + 0x30) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x38) * *pfVar9;
      pfVar10 = pfVar10 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar11 = *(float *)(pFVar4 + 0x40) * pfVar9[-1] + *(float *)(pFVar4 + 0x3c) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x44) * *pfVar9;
      pfVar11 = pfVar11 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar9 + -2;
      pfVar2 = pfVar9 + -1;
      fVar3 = *pfVar9;
      pfVar9 = pfVar9 + 3;
      *pfVar12 = *(float *)(pFVar4 + 0x4c) * *pfVar2 + *pfVar1 * *(float *)(pFVar4 + 0x48) +
                 *(float *)(pFVar4 + 0x50) * fVar3;
      pfVar12 = pfVar12 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}

// ProcessAudio @ 1444cc5f0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<3,8>::ProcessAudio
          (TConvertDeinterleave<3,8> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *local_48;
  float *local_40;
  
  iVar8 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = GetMultichannelBufferNumFrames(param_2);
  iVar8 = param_1->ArrayNum;
  if (iVar8 / 3 + (iVar8 >> 0x1f) +
      (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar7) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2->ArrayNum != 8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = GetMultichannelBufferNumFrames(param_2);
  lVar13 = (longlong)iVar8;
  pfVar9 = param_1->DataPtr;
  if (param_2->ArrayNum < 1) {
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
  local_48 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
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
  local_40 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
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
  pfVar14 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
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
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
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
  pfVar15 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
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
  pfVar10 = *(float **)((param_2->AllocatorInstance).Data + 0x50);
  if (param_2->ArrayNum < 7) {
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
  pfVar11 = *(float **)((param_2->AllocatorInstance).Data + 0x60);
  if (param_2->ArrayNum < 8) {
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
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x70);
  if (0 < iVar8) {
    pfVar9 = pfVar9 + 2;
    do {
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *local_48 = *(float *)(pFVar4 + 4) * pfVar9[-1] + pfVar9[-2] * *(float *)pFVar4 +
                  *(float *)(pFVar4 + 8) * *pfVar9;
      local_48 = local_48 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *local_40 = *(float *)(pFVar4 + 0x10) * pfVar9[-1] + *(float *)(pFVar4 + 0xc) * pfVar9[-2] +
                  *(float *)(pFVar4 + 0x14) * *pfVar9;
      local_40 = local_40 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar14 = *(float *)(pFVar4 + 0x1c) * pfVar9[-1] + *(float *)(pFVar4 + 0x18) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x20) * *pfVar9;
      pfVar14 = pfVar14 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar16 = *(float *)(pFVar4 + 0x28) * pfVar9[-1] + *(float *)(pFVar4 + 0x24) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x2c) * *pfVar9;
      pfVar16 = pfVar16 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar15 = *(float *)(pFVar4 + 0x34) * pfVar9[-1] + pfVar9[-2] * *(float *)(pFVar4 + 0x30) +
                 *(float *)(pFVar4 + 0x38) * *pfVar9;
      pfVar15 = pfVar15 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar10 = *(float *)(pFVar4 + 0x40) * pfVar9[-1] + pfVar9[-2] * *(float *)(pFVar4 + 0x3c) +
                 *(float *)(pFVar4 + 0x44) * *pfVar9;
      pfVar10 = pfVar10 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar11 = *(float *)(pFVar4 + 0x4c) * pfVar9[-1] + *(float *)(pFVar4 + 0x48) * pfVar9[-2] +
                 *(float *)(pFVar4 + 0x50) * *pfVar9;
      pfVar11 = pfVar11 + 1;
      pFVar4 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar9 + -1;
      pfVar2 = pfVar9 + -2;
      fVar3 = *pfVar9;
      pfVar9 = pfVar9 + 3;
      *pfVar12 = *(float *)(pFVar4 + 0x58) * *pfVar1 + *(float *)(pFVar4 + 0x54) * *pfVar2 +
                 *(float *)(pFVar4 + 0x5c) * fVar3;
      pfVar12 = pfVar12 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

// ProcessAudio @ 1444ccaf0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,1>::ProcessAudio
          (TConvertDeinterleave<4,1> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  
  uVar8 = param_1->ArrayNum & 0x80000003;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar8 != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InSamples.Num() % NumInputChannels) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                         ,0x39,L"Input sample buffer contains partial audio frame."), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  if (((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 3U)) >> 2 != iVar9) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                         ,0x3a,L"Audio buffer frame count mismatch."), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2->ArrayNum != 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumOutputChannels == OutSamples.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                         ,0x3b,L"Output audio buffer not initialized to expected channel count."),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  pfVar12 = param_1->DataPtr;
  lVar11 = (longlong)iVar9;
  if ((param_2->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pfVar10 = *(float **)(param_2->AllocatorInstance).Data;
  if (0 < iVar9) {
    do {
      fVar3 = *pfVar12;
      pfVar4 = pfVar12 + 1;
      pfVar5 = pfVar12 + 2;
      pfVar6 = pfVar12 + 3;
      pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar12 = pfVar12 + 4;
      *pfVar10 = *(float *)(pFVar1 + 8) * *pfVar5 + *(float *)pFVar1 * fVar3 +
                 *(float *)(pFVar1 + 0xc) * *pfVar6 + *(float *)(pFVar1 + 4) * *pfVar4;
      pfVar10 = pfVar10 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// ProcessAudio @ 1444ccc60

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,2>::ProcessAudio
          (TConvertDeinterleave<4,2> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  float *pfVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong local_18 [2];
  
  uVar13 = param_1->ArrayNum & 0x80000003;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
  }
  if (uVar13 != 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar14 = GetMultichannelBufferNumFrames(param_2);
  if ((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 3U)) >> 2 != iVar14) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2->ArrayNum != 2) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar14 = GetMultichannelBufferNumFrames(param_2);
  pfVar16 = param_1->DataPtr;
  lVar17 = (longlong)iVar14;
  if (param_2->ArrayNum < 1) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18[0] = *(longlong *)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18[1] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x10);
  if (0 < iVar14) {
    do {
      lVar18 = 0;
      plVar15 = local_18;
      lVar19 = 2;
      do {
        pfVar2 = (float *)*plVar15;
        fVar4 = *pfVar16;
        fVar5 = pfVar16[1];
        fVar6 = pfVar16[2];
        fVar7 = pfVar16[3];
        pFVar1 = (this->ChannelGains).AllocatorInstance.Data + lVar18;
        fVar8 = *(float *)pFVar1;
        fVar9 = *(float *)(pFVar1 + 4);
        fVar10 = *(float *)(pFVar1 + 8);
        fVar11 = *(float *)(pFVar1 + 0xc);
        lVar18 = lVar18 + 0x10;
        *plVar15 = (longlong)(pfVar2 + 1);
        plVar15 = plVar15 + 1;
        *pfVar2 = fVar10 * fVar6 + fVar8 * fVar4 + fVar11 * fVar7 + fVar9 * fVar5;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      pfVar16 = pfVar16 + 4;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  return;
}

// ProcessAudio @ 1444cce50

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,3>::ProcessAudio
          (TConvertDeinterleave<4,3> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  float *pfVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong local_28 [4];
  
  uVar13 = param_1->ArrayNum & 0x80000003;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
  }
  if (uVar13 != 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar14 = GetMultichannelBufferNumFrames(param_2);
  if ((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 3U)) >> 2 != iVar14) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2->ArrayNum != 3) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar14 = GetMultichannelBufferNumFrames(param_2);
  pfVar16 = param_1->DataPtr;
  lVar17 = (longlong)iVar14;
  if (param_2->ArrayNum < 1) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28[0] = *(longlong *)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28[1] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28[2] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x20);
  if (0 < iVar14) {
    do {
      lVar18 = 0;
      plVar15 = local_28;
      lVar19 = 3;
      do {
        pfVar2 = (float *)*plVar15;
        fVar4 = *pfVar16;
        fVar5 = pfVar16[1];
        fVar6 = pfVar16[2];
        fVar7 = pfVar16[3];
        pFVar1 = (this->ChannelGains).AllocatorInstance.Data + lVar18;
        fVar8 = *(float *)pFVar1;
        fVar9 = *(float *)(pFVar1 + 4);
        fVar10 = *(float *)(pFVar1 + 8);
        fVar11 = *(float *)(pFVar1 + 0xc);
        lVar18 = lVar18 + 0x10;
        *plVar15 = (longlong)(pfVar2 + 1);
        plVar15 = plVar15 + 1;
        *pfVar2 = fVar10 * fVar6 + fVar8 * fVar4 + fVar11 * fVar7 + fVar9 * fVar5;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      pfVar16 = pfVar16 + 4;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  return;
}

// ProcessAudio @ 1444cd080

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,4>::ProcessAudio
          (TConvertDeinterleave<4,4> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  float *pfVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong local_28 [4];
  
  uVar13 = param_1->ArrayNum & 0x80000003;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar13 != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InSamples.Num() % NumInputChannels) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x39,L"Input sample buffer contains partial audio frame."), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar14 = GetMultichannelBufferNumFrames(param_2);
  if (((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 3U)) >> 2 != iVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x3a,L"Audio buffer frame count mismatch."), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2->ArrayNum != 4) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumOutputChannels == OutSamples.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x3b,L"Output audio buffer not initialized to expected channel count."),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar14 = GetMultichannelBufferNumFrames(param_2);
  pfVar16 = param_1->DataPtr;
  lVar17 = (longlong)iVar14;
  if ((param_2->ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28[0] = *(longlong *)(param_2->AllocatorInstance).Data;
  if ((param_2->ArrayNum < 2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28[1] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x10);
  if ((param_2->ArrayNum < 3) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28[2] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x20);
  if ((param_2->ArrayNum < 4) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28[3] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x30);
  if (0 < iVar14) {
    do {
      lVar18 = 0;
      plVar15 = local_28;
      lVar19 = 4;
      do {
        pfVar2 = (float *)*plVar15;
        fVar4 = *pfVar16;
        fVar5 = pfVar16[1];
        fVar6 = pfVar16[2];
        fVar7 = pfVar16[3];
        pFVar1 = (this->ChannelGains).AllocatorInstance.Data + lVar18;
        fVar8 = *(float *)pFVar1;
        fVar9 = *(float *)(pFVar1 + 4);
        fVar10 = *(float *)(pFVar1 + 8);
        fVar11 = *(float *)(pFVar1 + 0xc);
        lVar18 = lVar18 + 0x10;
        *plVar15 = (longlong)(pfVar2 + 1);
        plVar15 = plVar15 + 1;
        *pfVar2 = fVar10 * fVar6 + fVar8 * fVar4 + fVar11 * fVar7 + fVar9 * fVar5;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      pfVar16 = pfVar16 + 4;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  return;
}

// ProcessAudio @ 1444cd300

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,5>::ProcessAudio
          (TConvertDeinterleave<4,5> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  longlong local_38 [4];
  undefined8 local_18;
  
  uVar13 = param_1->ArrayNum & 0x80000003;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar13 != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InSamples.Num() % NumInputChannels) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x39,L"Input sample buffer contains partial audio frame."), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar14 = GetMultichannelBufferNumFrames(param_2);
  if (((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 3U)) >> 2 != iVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x3a,L"Audio buffer frame count mismatch."), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2->ArrayNum != 5) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumOutputChannels == OutSamples.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x3b,L"Output audio buffer not initialized to expected channel count."),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar14 = GetMultichannelBufferNumFrames(param_2);
  pfVar17 = param_1->DataPtr;
  lVar16 = (longlong)iVar14;
  if ((param_2->ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38[0] = *(longlong *)(param_2->AllocatorInstance).Data;
  if ((param_2->ArrayNum < 2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38[1] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x10);
  if ((param_2->ArrayNum < 3) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38[2] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x20);
  if ((param_2->ArrayNum < 4) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38[3] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x30);
  if ((param_2->ArrayNum < 5) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_18 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x40);
  if (0 < iVar14) {
    do {
      lVar18 = 0;
      plVar15 = local_38;
      lVar19 = 5;
      do {
        pfVar2 = (float *)*plVar15;
        fVar4 = *pfVar17;
        fVar5 = pfVar17[1];
        fVar6 = pfVar17[2];
        fVar7 = pfVar17[3];
        pFVar1 = (this->ChannelGains).AllocatorInstance.Data + lVar18;
        fVar8 = *(float *)pFVar1;
        fVar9 = *(float *)(pFVar1 + 4);
        fVar10 = *(float *)(pFVar1 + 8);
        fVar11 = *(float *)(pFVar1 + 0xc);
        lVar18 = lVar18 + 0x10;
        *plVar15 = (longlong)(pfVar2 + 1);
        plVar15 = plVar15 + 1;
        *pfVar2 = fVar10 * fVar6 + fVar8 * fVar4 + fVar11 * fVar7 + fVar9 * fVar5;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      pfVar17 = pfVar17 + 4;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}

// ProcessAudio @ 1444cd5d0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,6>::ProcessAudio
          (TConvertDeinterleave<4,6> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  longlong local_38 [4];
  undefined8 local_18;
  undefined8 local_10;
  
  uVar13 = param_1->ArrayNum & 0x80000003;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
  }
  if (uVar13 != 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar14 = GetMultichannelBufferNumFrames(param_2);
  if ((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 3U)) >> 2 != iVar14) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2->ArrayNum != 6) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar14 = GetMultichannelBufferNumFrames(param_2);
  pfVar17 = param_1->DataPtr;
  lVar16 = (longlong)iVar14;
  if (param_2->ArrayNum < 1) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38[0] = *(longlong *)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38[1] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38[2] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38[3] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_10 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x50);
  if (0 < iVar14) {
    do {
      lVar18 = 0;
      plVar15 = local_38;
      lVar19 = 6;
      do {
        pfVar2 = (float *)*plVar15;
        fVar4 = *pfVar17;
        fVar5 = pfVar17[1];
        fVar6 = pfVar17[2];
        fVar7 = pfVar17[3];
        pFVar1 = (this->ChannelGains).AllocatorInstance.Data + lVar18;
        fVar8 = *(float *)pFVar1;
        fVar9 = *(float *)(pFVar1 + 4);
        fVar10 = *(float *)(pFVar1 + 8);
        fVar11 = *(float *)(pFVar1 + 0xc);
        lVar18 = lVar18 + 0x10;
        *plVar15 = (longlong)(pfVar2 + 1);
        plVar15 = plVar15 + 1;
        *pfVar2 = fVar10 * fVar6 + fVar8 * fVar4 + fVar11 * fVar7 + fVar9 * fVar5;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      pfVar17 = pfVar17 + 4;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}

// ProcessAudio @ 1444cd8e0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,7>::ProcessAudio
          (TConvertDeinterleave<4,7> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  longlong local_48 [4];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar13 = param_1->ArrayNum & 0x80000003;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar13 != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InSamples.Num() % NumInputChannels) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x39,L"Input sample buffer contains partial audio frame."), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar14 = GetMultichannelBufferNumFrames(param_2);
  if (((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 3U)) >> 2 != iVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x3a,L"Audio buffer frame count mismatch."), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2->ArrayNum != 7) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumOutputChannels == OutSamples.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x3b,L"Output audio buffer not initialized to expected channel count."),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar14 = GetMultichannelBufferNumFrames(param_2);
  pfVar17 = param_1->DataPtr;
  lVar16 = (longlong)iVar14;
  if ((param_2->ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_48[0] = *(longlong *)(param_2->AllocatorInstance).Data;
  if ((param_2->ArrayNum < 2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_48[1] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x10);
  if ((param_2->ArrayNum < 3) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_48[2] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x20);
  if ((param_2->ArrayNum < 4) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_48[3] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x30);
  if ((param_2->ArrayNum < 5) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x40);
  if ((param_2->ArrayNum < 6) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_20 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x50);
  if ((param_2->ArrayNum < 7) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_18 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x60);
  if (0 < iVar14) {
    do {
      lVar18 = 0;
      plVar15 = local_48;
      lVar19 = 7;
      do {
        pfVar2 = (float *)*plVar15;
        fVar4 = *pfVar17;
        fVar5 = pfVar17[1];
        fVar6 = pfVar17[2];
        fVar7 = pfVar17[3];
        pFVar1 = (this->ChannelGains).AllocatorInstance.Data + lVar18;
        fVar8 = *(float *)pFVar1;
        fVar9 = *(float *)(pFVar1 + 4);
        fVar10 = *(float *)(pFVar1 + 8);
        fVar11 = *(float *)(pFVar1 + 0xc);
        lVar18 = lVar18 + 0x10;
        *plVar15 = (longlong)(pfVar2 + 1);
        plVar15 = plVar15 + 1;
        *pfVar2 = fVar10 * fVar6 + fVar8 * fVar4 + fVar11 * fVar7 + fVar9 * fVar5;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      pfVar17 = pfVar17 + 4;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}

// ProcessAudio @ 1444cdc40

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<4,8>::ProcessAudio
          (TConvertDeinterleave<4,8> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  longlong local_48 [4];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar13 = param_1->ArrayNum & 0x80000003;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
  }
  if (uVar13 != 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar14 = GetMultichannelBufferNumFrames(param_2);
  if ((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 3U)) >> 2 != iVar14) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2->ArrayNum != 8) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar14 = GetMultichannelBufferNumFrames(param_2);
  pfVar17 = param_1->DataPtr;
  lVar16 = (longlong)iVar14;
  if (param_2->ArrayNum < 1) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48[0] = *(longlong *)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48[1] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48[2] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48[3] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_20 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x50);
  if (param_2->ArrayNum < 7) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x60);
  if (param_2->ArrayNum < 8) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_10 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x70);
  if (0 < iVar14) {
    do {
      lVar18 = 0;
      plVar15 = local_48;
      lVar19 = 8;
      do {
        pfVar2 = (float *)*plVar15;
        fVar4 = *pfVar17;
        fVar5 = pfVar17[1];
        fVar6 = pfVar17[2];
        fVar7 = pfVar17[3];
        pFVar1 = (this->ChannelGains).AllocatorInstance.Data + lVar18;
        fVar8 = *(float *)pFVar1;
        fVar9 = *(float *)(pFVar1 + 4);
        fVar10 = *(float *)(pFVar1 + 8);
        fVar11 = *(float *)(pFVar1 + 0xc);
        lVar18 = lVar18 + 0x10;
        *plVar15 = (longlong)(pfVar2 + 1);
        plVar15 = plVar15 + 1;
        *pfVar2 = fVar10 * fVar6 + fVar8 * fVar4 + fVar11 * fVar7 + fVar9 * fVar5;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      pfVar17 = pfVar17 + 4;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}

// ProcessAudio @ 1444cdfe0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,1>::ProcessAudio
          (TConvertDeinterleave<5,1> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 5) * 5) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum / 5 != iVar9) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (param_2->ArrayNum != 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  pfVar11 = param_1->DataPtr;
  lVar12 = (longlong)iVar9;
  if (param_2->ArrayNum < 1) {
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
  pfVar10 = *(float **)(param_2->AllocatorInstance).Data;
  if (0 < iVar9) {
    pfVar11 = pfVar11 + 2;
    do {
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar11 + -2;
      pfVar2 = pfVar11 + -1;
      fVar5 = *pfVar11;
      pfVar3 = pfVar11 + 1;
      pfVar4 = pfVar11 + 2;
      pfVar11 = pfVar11 + 5;
      *pfVar10 = *pfVar2 * *(float *)(pFVar6 + 4) + *pfVar1 * *(float *)pFVar6 +
                 *(float *)(pFVar6 + 8) * fVar5 + *pfVar3 * *(float *)(pFVar6 + 0xc) +
                 *pfVar4 * *(float *)(pFVar6 + 0x10);
      pfVar10 = pfVar10 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

// ProcessAudio @ 1444ce190

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,2>::ProcessAudio
          (TConvertDeinterleave<5,2> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 5) * 5) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum / 5 != iVar9) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (param_2->ArrayNum != 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  pfVar10 = param_1->DataPtr;
  lVar11 = (longlong)iVar9;
  if (param_2->ArrayNum < 1) {
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
  pfVar12 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
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
  pfVar13 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (0 < iVar9) {
    pfVar10 = pfVar10 + 2;
    do {
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar12 = *(float *)(pFVar6 + 4) * pfVar10[-1] + *(float *)pFVar6 * pfVar10[-2] +
                 *(float *)(pFVar6 + 8) * *pfVar10 + *(float *)(pFVar6 + 0xc) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x10) * pfVar10[2];
      pfVar12 = pfVar12 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar10 + -2;
      fVar5 = *pfVar10;
      pfVar2 = pfVar10 + -1;
      pfVar3 = pfVar10 + 1;
      pfVar4 = pfVar10 + 2;
      pfVar10 = pfVar10 + 5;
      *pfVar13 = *(float *)(pFVar6 + 0x18) * *pfVar2 + *(float *)(pFVar6 + 0x14) * *pfVar1 +
                 *(float *)(pFVar6 + 0x1c) * fVar5 + *(float *)(pFVar6 + 0x20) * *pfVar3 +
                 *(float *)(pFVar6 + 0x24) * *pfVar4;
      pfVar13 = pfVar13 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// ProcessAudio @ 1444ce3e0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,3>::ProcessAudio
          (TConvertDeinterleave<5,3> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 5) * 5) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum / 5 != iVar9) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (param_2->ArrayNum != 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  pfVar10 = param_1->DataPtr;
  lVar11 = (longlong)iVar9;
  if (param_2->ArrayNum < 1) {
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
  pfVar12 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
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
  pfVar13 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
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
  pfVar14 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (0 < iVar9) {
    pfVar10 = pfVar10 + 2;
    do {
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar12 = *(float *)(pFVar6 + 4) * pfVar10[-1] + *(float *)pFVar6 * pfVar10[-2] +
                 *(float *)(pFVar6 + 8) * *pfVar10 + *(float *)(pFVar6 + 0xc) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x10) * pfVar10[2];
      pfVar12 = pfVar12 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar13 = *(float *)(pFVar6 + 0x18) * pfVar10[-1] + *(float *)(pFVar6 + 0x14) * pfVar10[-2] +
                 *(float *)(pFVar6 + 0x1c) * *pfVar10 + *(float *)(pFVar6 + 0x20) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x24) * pfVar10[2];
      pfVar13 = pfVar13 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar10 + -2;
      fVar5 = *pfVar10;
      pfVar2 = pfVar10 + -1;
      pfVar3 = pfVar10 + 1;
      pfVar4 = pfVar10 + 2;
      pfVar10 = pfVar10 + 5;
      *pfVar14 = *(float *)(pFVar6 + 0x2c) * *pfVar2 + *(float *)(pFVar6 + 0x28) * *pfVar1 +
                 *(float *)(pFVar6 + 0x30) * fVar5 + *(float *)(pFVar6 + 0x34) * *pfVar3 +
                 *(float *)(pFVar6 + 0x38) * *pfVar4;
      pfVar14 = pfVar14 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// ProcessAudio @ 1444ce6c0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,4>::ProcessAudio
          (TConvertDeinterleave<5,4> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  longlong lVar15;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 5) * 5) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum / 5 != iVar9) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (param_2->ArrayNum != 4) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  pfVar10 = param_1->DataPtr;
  lVar15 = (longlong)iVar9;
  if (param_2->ArrayNum < 1) {
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
  pfVar11 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
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
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
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
  pfVar13 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
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
  pfVar14 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (0 < iVar9) {
    pfVar10 = pfVar10 + 2;
    do {
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar11 = *(float *)(pFVar6 + 4) * pfVar10[-1] + *(float *)pFVar6 * pfVar10[-2] +
                 *(float *)(pFVar6 + 8) * *pfVar10 + *(float *)(pFVar6 + 0xc) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x10) * pfVar10[2];
      pfVar11 = pfVar11 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar12 = *(float *)(pFVar6 + 0x18) * pfVar10[-1] + *(float *)(pFVar6 + 0x14) * pfVar10[-2] +
                 *(float *)(pFVar6 + 0x1c) * *pfVar10 + *(float *)(pFVar6 + 0x20) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x24) * pfVar10[2];
      pfVar12 = pfVar12 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar13 = *(float *)(pFVar6 + 0x2c) * pfVar10[-1] + *(float *)(pFVar6 + 0x28) * pfVar10[-2] +
                 *(float *)(pFVar6 + 0x30) * *pfVar10 + *(float *)(pFVar6 + 0x34) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x38) * pfVar10[2];
      pfVar13 = pfVar13 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar10 + -2;
      fVar5 = *pfVar10;
      pfVar2 = pfVar10 + -1;
      pfVar3 = pfVar10 + 1;
      pfVar4 = pfVar10 + 2;
      pfVar10 = pfVar10 + 5;
      *pfVar14 = *(float *)(pFVar6 + 0x40) * *pfVar2 + *(float *)(pFVar6 + 0x3c) * *pfVar1 +
                 *(float *)(pFVar6 + 0x44) * fVar5 + *(float *)(pFVar6 + 0x48) * *pfVar3 +
                 *(float *)(pFVar6 + 0x4c) * *pfVar4;
      pfVar14 = pfVar14 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}

// ProcessAudio @ 1444cea20

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,5>::ProcessAudio
          (TConvertDeinterleave<5,5> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 5) * 5) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum / 5 != iVar9) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (param_2->ArrayNum != 5) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  pfVar10 = param_1->DataPtr;
  lVar11 = (longlong)iVar9;
  if (param_2->ArrayNum < 1) {
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
  pfVar15 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
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
  pfVar14 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
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
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
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
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
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
  pfVar13 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (0 < iVar9) {
    pfVar10 = pfVar10 + 2;
    do {
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar15 = *(float *)(pFVar6 + 4) * pfVar10[-1] + *(float *)pFVar6 * pfVar10[-2] +
                 *(float *)(pFVar6 + 8) * *pfVar10 + *(float *)(pFVar6 + 0xc) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x10) * pfVar10[2];
      pfVar15 = pfVar15 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar14 = *(float *)(pFVar6 + 0x18) * pfVar10[-1] + *(float *)(pFVar6 + 0x14) * pfVar10[-2] +
                 *(float *)(pFVar6 + 0x1c) * *pfVar10 + *(float *)(pFVar6 + 0x20) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x24) * pfVar10[2];
      pfVar14 = pfVar14 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar16 = *(float *)(pFVar6 + 0x2c) * pfVar10[-1] + *(float *)(pFVar6 + 0x28) * pfVar10[-2] +
                 *(float *)(pFVar6 + 0x30) * *pfVar10 + *(float *)(pFVar6 + 0x34) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x38) * pfVar10[2];
      pfVar16 = pfVar16 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar12 = *(float *)(pFVar6 + 0x40) * pfVar10[-1] + *(float *)(pFVar6 + 0x3c) * pfVar10[-2] +
                 *(float *)(pFVar6 + 0x44) * *pfVar10 + *(float *)(pFVar6 + 0x48) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x4c) * pfVar10[2];
      pfVar12 = pfVar12 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar10 + -2;
      fVar5 = *pfVar10;
      pfVar2 = pfVar10 + -1;
      pfVar3 = pfVar10 + 1;
      pfVar4 = pfVar10 + 2;
      pfVar10 = pfVar10 + 5;
      *pfVar13 = *(float *)(pFVar6 + 0x54) * *pfVar2 + *pfVar1 * *(float *)(pFVar6 + 0x50) +
                 *(float *)(pFVar6 + 0x58) * fVar5 + *(float *)(pFVar6 + 0x5c) * *pfVar3 +
                 *(float *)(pFVar6 + 0x60) * *pfVar4;
      pfVar13 = pfVar13 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// ProcessAudio @ 1444cee30

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,6>::ProcessAudio
          (TConvertDeinterleave<5,6> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *local_38;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 5) * 5) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum / 5 != iVar9) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (param_2->ArrayNum != 6) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  pfVar10 = param_1->DataPtr;
  lVar11 = (longlong)iVar9;
  if (param_2->ArrayNum < 1) {
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
  local_38 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
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
  pfVar15 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
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
  pfVar14 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
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
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
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
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
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
  pfVar13 = *(float **)((param_2->AllocatorInstance).Data + 0x50);
  if (0 < iVar9) {
    pfVar10 = pfVar10 + 2;
    do {
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *local_38 = *(float *)(pFVar6 + 4) * pfVar10[-1] + pfVar10[-2] * *(float *)pFVar6 +
                  *(float *)(pFVar6 + 8) * *pfVar10 + *(float *)(pFVar6 + 0xc) * pfVar10[1] +
                  *(float *)(pFVar6 + 0x10) * pfVar10[2];
      local_38 = local_38 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar15 = *(float *)(pFVar6 + 0x18) * pfVar10[-1] + pfVar10[-2] * *(float *)(pFVar6 + 0x14) +
                 *(float *)(pFVar6 + 0x1c) * *pfVar10 + *(float *)(pFVar6 + 0x20) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x24) * pfVar10[2];
      pfVar15 = pfVar15 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar14 = *(float *)(pFVar6 + 0x2c) * pfVar10[-1] + pfVar10[-2] * *(float *)(pFVar6 + 0x28) +
                 *(float *)(pFVar6 + 0x30) * *pfVar10 + *(float *)(pFVar6 + 0x34) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x38) * pfVar10[2];
      pfVar14 = pfVar14 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar16 = *(float *)(pFVar6 + 0x40) * pfVar10[-1] + pfVar10[-2] * *(float *)(pFVar6 + 0x3c) +
                 *(float *)(pFVar6 + 0x44) * *pfVar10 + *(float *)(pFVar6 + 0x48) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x4c) * pfVar10[2];
      pfVar16 = pfVar16 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar12 = *(float *)(pFVar6 + 0x54) * pfVar10[-1] + *(float *)(pFVar6 + 0x50) * pfVar10[-2] +
                 *(float *)(pFVar6 + 0x58) * *pfVar10 + *(float *)(pFVar6 + 0x5c) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x60) * pfVar10[2];
      pfVar12 = pfVar12 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar10 + -2;
      fVar5 = *pfVar10;
      pfVar2 = pfVar10 + -1;
      pfVar3 = pfVar10 + 1;
      pfVar4 = pfVar10 + 2;
      pfVar10 = pfVar10 + 5;
      *pfVar13 = *(float *)(pFVar6 + 0x68) * *pfVar2 + *(float *)(pFVar6 + 100) * *pfVar1 +
                 *(float *)(pFVar6 + 0x6c) * fVar5 + *(float *)(pFVar6 + 0x70) * *pfVar3 +
                 *(float *)(pFVar6 + 0x74) * *pfVar4;
      pfVar13 = pfVar13 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// ProcessAudio @ 1444cf2e0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,7>::ProcessAudio
          (TConvertDeinterleave<5,7> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *local_38;
  float *local_30;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 5) * 5) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum / 5 != iVar9) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (param_2->ArrayNum != 7) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  pfVar10 = param_1->DataPtr;
  lVar11 = (longlong)iVar9;
  if (param_2->ArrayNum < 1) {
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
  local_38 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
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
  local_30 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
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
  pfVar14 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
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
  pfVar13 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
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
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
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
  pfVar15 = *(float **)((param_2->AllocatorInstance).Data + 0x50);
  if (param_2->ArrayNum < 7) {
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
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x60);
  if (0 < iVar9) {
    pfVar10 = pfVar10 + 2;
    do {
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *local_38 = *(float *)(pFVar6 + 4) * pfVar10[-1] + *(float *)pFVar6 * pfVar10[-2] +
                  *(float *)(pFVar6 + 8) * *pfVar10 + *(float *)(pFVar6 + 0xc) * pfVar10[1] +
                  *(float *)(pFVar6 + 0x10) * pfVar10[2];
      local_38 = local_38 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *local_30 = *(float *)(pFVar6 + 0x18) * pfVar10[-1] + *(float *)(pFVar6 + 0x14) * pfVar10[-2]
                  + *(float *)(pFVar6 + 0x1c) * *pfVar10 + *(float *)(pFVar6 + 0x20) * pfVar10[1] +
                  *(float *)(pFVar6 + 0x24) * pfVar10[2];
      local_30 = local_30 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar14 = *(float *)(pFVar6 + 0x2c) * pfVar10[-1] + pfVar10[-2] * *(float *)(pFVar6 + 0x28) +
                 *(float *)(pFVar6 + 0x30) * *pfVar10 + *(float *)(pFVar6 + 0x34) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x38) * pfVar10[2];
      pfVar14 = pfVar14 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar13 = *(float *)(pFVar6 + 0x40) * pfVar10[-1] + *(float *)(pFVar6 + 0x3c) * pfVar10[-2] +
                 *(float *)(pFVar6 + 0x44) * *pfVar10 + *(float *)(pFVar6 + 0x48) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x4c) * pfVar10[2];
      pfVar13 = pfVar13 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar16 = *(float *)(pFVar6 + 0x54) * pfVar10[-1] + pfVar10[-2] * *(float *)(pFVar6 + 0x50) +
                 *(float *)(pFVar6 + 0x58) * *pfVar10 + *(float *)(pFVar6 + 0x5c) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x60) * pfVar10[2];
      pfVar16 = pfVar16 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar15 = *(float *)(pFVar6 + 0x68) * pfVar10[-1] + pfVar10[-2] * *(float *)(pFVar6 + 100) +
                 *(float *)(pFVar6 + 0x6c) * *pfVar10 + *(float *)(pFVar6 + 0x70) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x74) * pfVar10[2];
      pfVar15 = pfVar15 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar10 + -2;
      fVar5 = *pfVar10;
      pfVar2 = pfVar10 + -1;
      pfVar3 = pfVar10 + 1;
      pfVar4 = pfVar10 + 2;
      pfVar10 = pfVar10 + 5;
      *pfVar12 = *(float *)(pFVar6 + 0x7c) * *pfVar2 + *pfVar1 * *(float *)(pFVar6 + 0x78) +
                 *(float *)(pFVar6 + 0x80) * fVar5 + *(float *)(pFVar6 + 0x84) * *pfVar3 +
                 *(float *)(pFVar6 + 0x88) * *pfVar4;
      pfVar12 = pfVar12 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// ProcessAudio @ 1444cf840

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<5,8>::ProcessAudio
          (TConvertDeinterleave<5,8> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *local_48;
  float *local_40;
  float *local_38;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 5) * 5) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  if (param_1->ArrayNum / 5 != iVar9) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (param_2->ArrayNum != 8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = GetMultichannelBufferNumFrames(param_2);
  pfVar10 = param_1->DataPtr;
  lVar11 = (longlong)iVar9;
  if (param_2->ArrayNum < 1) {
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
  local_48 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
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
  local_40 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
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
  local_38 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
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
  pfVar14 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
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
  pfVar13 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
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
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x50);
  if (param_2->ArrayNum < 7) {
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
  pfVar15 = *(float **)((param_2->AllocatorInstance).Data + 0x60);
  if (param_2->ArrayNum < 8) {
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
  pfVar12 = *(float **)((param_2->AllocatorInstance).Data + 0x70);
  if (0 < iVar9) {
    pfVar10 = pfVar10 + 2;
    do {
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *local_48 = *(float *)(pFVar6 + 4) * pfVar10[-1] + *(float *)pFVar6 * pfVar10[-2] +
                  *(float *)(pFVar6 + 8) * *pfVar10 + *(float *)(pFVar6 + 0xc) * pfVar10[1] +
                  *(float *)(pFVar6 + 0x10) * pfVar10[2];
      local_48 = local_48 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *local_40 = *(float *)(pFVar6 + 0x18) * pfVar10[-1] + *(float *)(pFVar6 + 0x14) * pfVar10[-2]
                  + *(float *)(pFVar6 + 0x1c) * *pfVar10 + *(float *)(pFVar6 + 0x20) * pfVar10[1] +
                  *(float *)(pFVar6 + 0x24) * pfVar10[2];
      local_40 = local_40 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *local_38 = *(float *)(pFVar6 + 0x2c) * pfVar10[-1] + *(float *)(pFVar6 + 0x28) * pfVar10[-2]
                  + *(float *)(pFVar6 + 0x30) * *pfVar10 + *(float *)(pFVar6 + 0x34) * pfVar10[1] +
                  *(float *)(pFVar6 + 0x38) * pfVar10[2];
      local_38 = local_38 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar14 = *(float *)(pFVar6 + 0x40) * pfVar10[-1] + *(float *)(pFVar6 + 0x3c) * pfVar10[-2] +
                 *(float *)(pFVar6 + 0x44) * *pfVar10 + *(float *)(pFVar6 + 0x48) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x4c) * pfVar10[2];
      pfVar14 = pfVar14 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar13 = *(float *)(pFVar6 + 0x54) * pfVar10[-1] + *(float *)(pFVar6 + 0x50) * pfVar10[-2] +
                 *(float *)(pFVar6 + 0x58) * *pfVar10 + *(float *)(pFVar6 + 0x5c) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x60) * pfVar10[2];
      pfVar13 = pfVar13 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar16 = *(float *)(pFVar6 + 0x68) * pfVar10[-1] + *(float *)(pFVar6 + 100) * pfVar10[-2] +
                 *(float *)(pFVar6 + 0x6c) * *pfVar10 + *(float *)(pFVar6 + 0x70) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x74) * pfVar10[2];
      pfVar16 = pfVar16 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar15 = *(float *)(pFVar6 + 0x7c) * pfVar10[-1] + *(float *)(pFVar6 + 0x78) * pfVar10[-2] +
                 *(float *)(pFVar6 + 0x80) * *pfVar10 + *(float *)(pFVar6 + 0x84) * pfVar10[1] +
                 *(float *)(pFVar6 + 0x88) * pfVar10[2];
      pfVar15 = pfVar15 + 1;
      pFVar6 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar10 + -2;
      fVar5 = *pfVar10;
      pfVar2 = pfVar10 + -1;
      pfVar3 = pfVar10 + 1;
      pfVar4 = pfVar10 + 2;
      pfVar10 = pfVar10 + 5;
      *pfVar12 = *(float *)(pFVar6 + 0x90) * *pfVar2 + *(float *)(pFVar6 + 0x8c) * *pfVar1 +
                 *(float *)(pFVar6 + 0x94) * fVar5 + *(float *)(pFVar6 + 0x98) * *pfVar3 +
                 *(float *)(pFVar6 + 0x9c) * *pfVar4;
      pfVar12 = pfVar12 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// ProcessAudio @ 1444cfe40

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,1>::ProcessAudio
          (TConvertDeinterleave<6,1> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  
  iVar11 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar11 / 6 + (iVar11 >> 0x1f) +
      (int)(((longlong)iVar11 / 6 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 6) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = GetMultichannelBufferNumFrames(param_2);
  iVar11 = param_1->ArrayNum;
  if (iVar11 / 6 + (iVar11 >> 0x1f) +
      (int)(((longlong)iVar11 / 6 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar10) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (param_2->ArrayNum != 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  pfVar13 = param_1->DataPtr;
  lVar14 = (longlong)iVar11;
  if (param_2->ArrayNum < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar12 = *(float **)(param_2->AllocatorInstance).Data;
  if (0 < iVar11) {
    pfVar13 = pfVar13 + 2;
    do {
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar13 + -2;
      fVar6 = *pfVar13;
      pfVar2 = pfVar13 + -1;
      pfVar3 = pfVar13 + 1;
      pfVar4 = pfVar13 + 2;
      pfVar5 = pfVar13 + 3;
      pfVar13 = pfVar13 + 6;
      *pfVar12 = *(float *)(pFVar7 + 4) * *pfVar2 + *pfVar1 * *(float *)pFVar7 +
                 *(float *)(pFVar7 + 8) * fVar6 + *(float *)(pFVar7 + 0xc) * *pfVar3 +
                 *(float *)(pFVar7 + 0x10) * *pfVar4 + *(float *)(pFVar7 + 0x14) * *pfVar5;
      pfVar12 = pfVar12 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}

// ProcessAudio @ 1444cfff0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,2>::ProcessAudio
          (TConvertDeinterleave<6,2> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  
  iVar11 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar11 / 6 + (iVar11 >> 0x1f) +
      (int)(((longlong)iVar11 / 6 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 6) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = GetMultichannelBufferNumFrames(param_2);
  iVar11 = param_1->ArrayNum;
  if (iVar11 / 6 + (iVar11 >> 0x1f) +
      (int)(((longlong)iVar11 / 6 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar10) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (param_2->ArrayNum != 2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  pfVar12 = param_1->DataPtr;
  lVar13 = (longlong)iVar11;
  if (param_2->ArrayNum < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar14 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar15 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (0 < iVar11) {
    pfVar12 = pfVar12 + 2;
    do {
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar14 = *(float *)(pFVar7 + 4) * pfVar12[-1] + *(float *)pFVar7 * pfVar12[-2] +
                 *(float *)(pFVar7 + 8) * *pfVar12 + *(float *)(pFVar7 + 0xc) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x10) * pfVar12[2] + *(float *)(pFVar7 + 0x14) * pfVar12[3];
      pfVar14 = pfVar14 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar12 + -2;
      fVar6 = *pfVar12;
      pfVar2 = pfVar12 + -1;
      pfVar3 = pfVar12 + 1;
      pfVar4 = pfVar12 + 2;
      pfVar5 = pfVar12 + 3;
      pfVar12 = pfVar12 + 6;
      *pfVar15 = *(float *)(pFVar7 + 0x1c) * *pfVar2 + *(float *)(pFVar7 + 0x18) * *pfVar1 +
                 *(float *)(pFVar7 + 0x20) * fVar6 + *(float *)(pFVar7 + 0x24) * *pfVar3 +
                 *(float *)(pFVar7 + 0x28) * *pfVar4 + *(float *)(pFVar7 + 0x2c) * *pfVar5;
      pfVar15 = pfVar15 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

// ProcessAudio @ 1444d0260

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,3>::ProcessAudio
          (TConvertDeinterleave<6,3> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  
  iVar11 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar11 / 6 + (iVar11 >> 0x1f) +
      (int)(((longlong)iVar11 / 6 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 6) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = GetMultichannelBufferNumFrames(param_2);
  iVar11 = param_1->ArrayNum;
  if (iVar11 / 6 + (iVar11 >> 0x1f) +
      (int)(((longlong)iVar11 / 6 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar10) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (param_2->ArrayNum != 3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  pfVar12 = param_1->DataPtr;
  lVar13 = (longlong)iVar11;
  if (param_2->ArrayNum < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar14 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar15 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (0 < iVar11) {
    pfVar12 = pfVar12 + 2;
    do {
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar14 = *(float *)(pFVar7 + 4) * pfVar12[-1] + *(float *)pFVar7 * pfVar12[-2] +
                 *(float *)(pFVar7 + 8) * *pfVar12 + *(float *)(pFVar7 + 0xc) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x10) * pfVar12[2] + *(float *)(pFVar7 + 0x14) * pfVar12[3];
      pfVar14 = pfVar14 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar15 = *(float *)(pFVar7 + 0x1c) * pfVar12[-1] + pfVar12[-2] * *(float *)(pFVar7 + 0x18) +
                 *(float *)(pFVar7 + 0x20) * *pfVar12 + *(float *)(pFVar7 + 0x24) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x28) * pfVar12[2] + *(float *)(pFVar7 + 0x2c) * pfVar12[3];
      pfVar15 = pfVar15 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar12 + -2;
      fVar6 = *pfVar12;
      pfVar2 = pfVar12 + -1;
      pfVar3 = pfVar12 + 1;
      pfVar4 = pfVar12 + 2;
      pfVar5 = pfVar12 + 3;
      pfVar12 = pfVar12 + 6;
      *pfVar16 = *(float *)(pFVar7 + 0x34) * *pfVar2 + *pfVar1 * *(float *)(pFVar7 + 0x30) +
                 *(float *)(pFVar7 + 0x38) * fVar6 + *(float *)(pFVar7 + 0x3c) * *pfVar3 +
                 *(float *)(pFVar7 + 0x40) * *pfVar4 + *(float *)(pFVar7 + 0x44) * *pfVar5;
      pfVar16 = pfVar16 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

// ProcessAudio @ 1444d0560

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,4>::ProcessAudio
          (TConvertDeinterleave<6,4> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  
  iVar5 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar5 / 6 + (iVar5 >> 0x1f) +
      (int)(((longlong)iVar5 / 6 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = GetMultichannelBufferNumFrames(param_2);
  iVar5 = param_1->ArrayNum;
  if (iVar5 / 6 + (iVar5 >> 0x1f) +
      (int)(((longlong)iVar5 / 6 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2->ArrayNum != 4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = GetMultichannelBufferNumFrames(param_2);
  pfVar6 = param_1->DataPtr;
  lVar7 = (longlong)iVar5;
  if (param_2->ArrayNum < 1) {
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
  pfVar11 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
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
  pfVar10 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
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
  pfVar8 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
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
  pfVar9 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (0 < iVar5) {
    pfVar6 = pfVar6 + 2;
    do {
      pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar11 = *(float *)(pFVar1 + 4) * pfVar6[-1] + *(float *)pFVar1 * pfVar6[-2] +
                 *(float *)(pFVar1 + 8) * *pfVar6 + *(float *)(pFVar1 + 0xc) * pfVar6[1] +
                 *(float *)(pFVar1 + 0x10) * pfVar6[2] + *(float *)(pFVar1 + 0x14) * pfVar6[3];
      pfVar11 = pfVar11 + 1;
      pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar10 = *(float *)(pFVar1 + 0x1c) * pfVar6[-1] + *(float *)(pFVar1 + 0x18) * pfVar6[-2] +
                 *(float *)(pFVar1 + 0x20) * *pfVar6 + *(float *)(pFVar1 + 0x24) * pfVar6[1] +
                 *(float *)(pFVar1 + 0x28) * pfVar6[2] + *(float *)(pFVar1 + 0x2c) * pfVar6[3];
      pfVar10 = pfVar10 + 1;
      pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar8 = *(float *)(pFVar1 + 0x34) * pfVar6[-1] + *(float *)(pFVar1 + 0x30) * pfVar6[-2] +
                *(float *)(pFVar1 + 0x38) * *pfVar6 + *(float *)(pFVar1 + 0x3c) * pfVar6[1] +
                *(float *)(pFVar1 + 0x40) * pfVar6[2] + *(float *)(pFVar1 + 0x44) * pfVar6[3];
      pfVar8 = pfVar8 + 1;
      pFVar1 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar9 = *(float *)(pFVar1 + 0x4c) * pfVar6[-1] + *(float *)(pFVar1 + 0x48) * pfVar6[-2] +
                *(float *)(pFVar1 + 0x50) * *pfVar6 + *(float *)(pFVar1 + 0x54) * pfVar6[1] +
                *(float *)(pFVar1 + 0x58) * pfVar6[2] + *(float *)(pFVar1 + 0x5c) * pfVar6[3];
      pfVar9 = pfVar9 + 1;
      pfVar6 = pfVar6 + 6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// ProcessAudio @ 1444d0900

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,5>::ProcessAudio
          (TConvertDeinterleave<6,5> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  
  iVar11 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar11 / 6 + (iVar11 >> 0x1f) +
      (int)(((longlong)iVar11 / 6 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 6) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = GetMultichannelBufferNumFrames(param_2);
  iVar11 = param_1->ArrayNum;
  if (iVar11 / 6 + (iVar11 >> 0x1f) +
      (int)(((longlong)iVar11 / 6 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar10) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (param_2->ArrayNum != 5) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  pfVar12 = param_1->DataPtr;
  lVar14 = (longlong)iVar11;
  if (param_2->ArrayNum < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar17 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar18 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar13 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar15 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (0 < iVar11) {
    pfVar12 = pfVar12 + 2;
    do {
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar17 = *(float *)(pFVar7 + 4) * pfVar12[-1] + *(float *)pFVar7 * pfVar12[-2] +
                 *(float *)(pFVar7 + 8) * *pfVar12 + *(float *)(pFVar7 + 0xc) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x10) * pfVar12[2] + *(float *)(pFVar7 + 0x14) * pfVar12[3];
      pfVar17 = pfVar17 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar16 = *(float *)(pFVar7 + 0x1c) * pfVar12[-1] + pfVar12[-2] * *(float *)(pFVar7 + 0x18) +
                 *(float *)(pFVar7 + 0x20) * *pfVar12 + *(float *)(pFVar7 + 0x24) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x28) * pfVar12[2] + *(float *)(pFVar7 + 0x2c) * pfVar12[3];
      pfVar16 = pfVar16 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar18 = *(float *)(pFVar7 + 0x34) * pfVar12[-1] + pfVar12[-2] * *(float *)(pFVar7 + 0x30) +
                 *(float *)(pFVar7 + 0x38) * *pfVar12 + *(float *)(pFVar7 + 0x3c) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x40) * pfVar12[2] + *(float *)(pFVar7 + 0x44) * pfVar12[3];
      pfVar18 = pfVar18 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar13 = *(float *)(pFVar7 + 0x4c) * pfVar12[-1] + pfVar12[-2] * *(float *)(pFVar7 + 0x48) +
                 *(float *)(pFVar7 + 0x50) * *pfVar12 + *(float *)(pFVar7 + 0x54) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x58) * pfVar12[2] + *(float *)(pFVar7 + 0x5c) * pfVar12[3];
      pfVar13 = pfVar13 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar12 + -2;
      fVar6 = *pfVar12;
      pfVar2 = pfVar12 + -1;
      pfVar3 = pfVar12 + 1;
      pfVar4 = pfVar12 + 2;
      pfVar5 = pfVar12 + 3;
      pfVar12 = pfVar12 + 6;
      *pfVar15 = *(float *)(pFVar7 + 100) * *pfVar2 + *(float *)(pFVar7 + 0x60) * *pfVar1 +
                 *(float *)(pFVar7 + 0x68) * fVar6 + *(float *)(pFVar7 + 0x6c) * *pfVar3 +
                 *(float *)(pFVar7 + 0x70) * *pfVar4 + *(float *)(pFVar7 + 0x74) * *pfVar5;
      pfVar15 = pfVar15 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}

// ProcessAudio @ 1444d0d50

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,6>::ProcessAudio
          (TConvertDeinterleave<6,6> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *local_38;
  
  iVar11 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar11 / 6 + (iVar11 >> 0x1f) +
      (int)(((longlong)iVar11 / 6 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 6) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = GetMultichannelBufferNumFrames(param_2);
  iVar11 = param_1->ArrayNum;
  if (iVar11 / 6 + (iVar11 >> 0x1f) +
      (int)(((longlong)iVar11 / 6 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar10) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (param_2->ArrayNum != 6) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  pfVar12 = param_1->DataPtr;
  lVar13 = (longlong)iVar11;
  if (param_2->ArrayNum < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_38 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar15 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar18 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar17 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar14 = *(float **)((param_2->AllocatorInstance).Data + 0x50);
  if (0 < iVar11) {
    pfVar12 = pfVar12 + 2;
    do {
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *local_38 = *(float *)(pFVar7 + 4) * pfVar12[-1] + pfVar12[-2] * *(float *)pFVar7 +
                  *(float *)(pFVar7 + 8) * *pfVar12 + *(float *)(pFVar7 + 0xc) * pfVar12[1] +
                  *(float *)(pFVar7 + 0x10) * pfVar12[2] + *(float *)(pFVar7 + 0x14) * pfVar12[3];
      local_38 = local_38 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar16 = *(float *)(pFVar7 + 0x1c) * pfVar12[-1] + pfVar12[-2] * *(float *)(pFVar7 + 0x18) +
                 *(float *)(pFVar7 + 0x20) * *pfVar12 + *(float *)(pFVar7 + 0x24) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x28) * pfVar12[2] + *(float *)(pFVar7 + 0x2c) * pfVar12[3];
      pfVar16 = pfVar16 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar15 = *(float *)(pFVar7 + 0x34) * pfVar12[-1] + *(float *)(pFVar7 + 0x30) * pfVar12[-2] +
                 *(float *)(pFVar7 + 0x38) * *pfVar12 + *(float *)(pFVar7 + 0x3c) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x40) * pfVar12[2] + *(float *)(pFVar7 + 0x44) * pfVar12[3];
      pfVar15 = pfVar15 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar18 = *(float *)(pFVar7 + 0x4c) * pfVar12[-1] + pfVar12[-2] * *(float *)(pFVar7 + 0x48) +
                 *(float *)(pFVar7 + 0x50) * *pfVar12 + *(float *)(pFVar7 + 0x54) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x58) * pfVar12[2] + *(float *)(pFVar7 + 0x5c) * pfVar12[3];
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar18 = pfVar18 + 1;
      *pfVar17 = *(float *)(pFVar7 + 100) * pfVar12[-1] + pfVar12[-2] * *(float *)(pFVar7 + 0x60) +
                 *(float *)(pFVar7 + 0x68) * *pfVar12 + *(float *)(pFVar7 + 0x6c) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x70) * pfVar12[2] + *(float *)(pFVar7 + 0x74) * pfVar12[3];
      pfVar17 = pfVar17 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar12 + -2;
      fVar6 = *pfVar12;
      pfVar2 = pfVar12 + -1;
      pfVar3 = pfVar12 + 1;
      pfVar4 = pfVar12 + 2;
      pfVar5 = pfVar12 + 3;
      pfVar12 = pfVar12 + 6;
      *pfVar14 = *(float *)(pFVar7 + 0x7c) * *pfVar2 + *pfVar1 * *(float *)(pFVar7 + 0x78) +
                 *(float *)(pFVar7 + 0x80) * fVar6 + *(float *)(pFVar7 + 0x84) * *pfVar3 +
                 *(float *)(pFVar7 + 0x88) * *pfVar4 + *(float *)(pFVar7 + 0x8c) * *pfVar5;
      pfVar14 = pfVar14 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

// ProcessAudio @ 1444d1260

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,7>::ProcessAudio
          (TConvertDeinterleave<6,7> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *local_38;
  float *local_30;
  
  iVar11 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar11 / 6 + (iVar11 >> 0x1f) +
      (int)(((longlong)iVar11 / 6 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 6) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = GetMultichannelBufferNumFrames(param_2);
  iVar11 = param_1->ArrayNum;
  if (iVar11 / 6 + (iVar11 >> 0x1f) +
      (int)(((longlong)iVar11 / 6 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar10) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (param_2->ArrayNum != 7) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  pfVar12 = param_1->DataPtr;
  lVar13 = (longlong)iVar11;
  if (param_2->ArrayNum < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_38 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_30 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar15 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar18 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar17 = *(float **)((param_2->AllocatorInstance).Data + 0x50);
  if (param_2->ArrayNum < 7) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar14 = *(float **)((param_2->AllocatorInstance).Data + 0x60);
  if (0 < iVar11) {
    pfVar12 = pfVar12 + 2;
    do {
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *local_38 = *(float *)(pFVar7 + 4) * pfVar12[-1] + *(float *)pFVar7 * pfVar12[-2] +
                  *(float *)(pFVar7 + 8) * *pfVar12 + *(float *)(pFVar7 + 0xc) * pfVar12[1] +
                  *(float *)(pFVar7 + 0x10) * pfVar12[2] + *(float *)(pFVar7 + 0x14) * pfVar12[3];
      local_38 = local_38 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *local_30 = *(float *)(pFVar7 + 0x1c) * pfVar12[-1] + *(float *)(pFVar7 + 0x18) * pfVar12[-2]
                  + *(float *)(pFVar7 + 0x20) * *pfVar12 + *(float *)(pFVar7 + 0x24) * pfVar12[1] +
                  *(float *)(pFVar7 + 0x28) * pfVar12[2] + *(float *)(pFVar7 + 0x2c) * pfVar12[3];
      local_30 = local_30 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar16 = *(float *)(pFVar7 + 0x34) * pfVar12[-1] + *(float *)(pFVar7 + 0x30) * pfVar12[-2] +
                 *(float *)(pFVar7 + 0x38) * *pfVar12 + *(float *)(pFVar7 + 0x3c) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x40) * pfVar12[2] + *(float *)(pFVar7 + 0x44) * pfVar12[3];
      pfVar16 = pfVar16 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar15 = *(float *)(pFVar7 + 0x4c) * pfVar12[-1] + *(float *)(pFVar7 + 0x48) * pfVar12[-2] +
                 *(float *)(pFVar7 + 0x50) * *pfVar12 + *(float *)(pFVar7 + 0x54) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x58) * pfVar12[2] + *(float *)(pFVar7 + 0x5c) * pfVar12[3];
      pfVar15 = pfVar15 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar18 = *(float *)(pFVar7 + 100) * pfVar12[-1] + *(float *)(pFVar7 + 0x60) * pfVar12[-2] +
                 *(float *)(pFVar7 + 0x68) * *pfVar12 + *(float *)(pFVar7 + 0x6c) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x70) * pfVar12[2] + *(float *)(pFVar7 + 0x74) * pfVar12[3];
      pfVar18 = pfVar18 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar17 = *(float *)(pFVar7 + 0x7c) * pfVar12[-1] + *(float *)(pFVar7 + 0x78) * pfVar12[-2] +
                 *(float *)(pFVar7 + 0x80) * *pfVar12 + *(float *)(pFVar7 + 0x84) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x88) * pfVar12[2] + *(float *)(pFVar7 + 0x8c) * pfVar12[3];
      pfVar17 = pfVar17 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar12 + -2;
      fVar6 = *pfVar12;
      pfVar2 = pfVar12 + -1;
      pfVar3 = pfVar12 + 1;
      pfVar4 = pfVar12 + 2;
      pfVar5 = pfVar12 + 3;
      pfVar12 = pfVar12 + 6;
      *pfVar14 = *(float *)(pFVar7 + 0x94) * *pfVar2 + *(float *)(pFVar7 + 0x90) * *pfVar1 +
                 *(float *)(pFVar7 + 0x98) * fVar6 + *(float *)(pFVar7 + 0x9c) * *pfVar3 +
                 *(float *)(pFVar7 + 0xa0) * *pfVar4 + *(float *)(pFVar7 + 0xa4) * *pfVar5;
      pfVar14 = pfVar14 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

// ProcessAudio @ 1444d1830

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<6,8>::ProcessAudio
          (TConvertDeinterleave<6,8> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *local_48;
  float *local_40;
  float *local_38;
  
  iVar11 = param_1->ArrayNum;
  if (param_1->ArrayNum !=
      (iVar11 / 6 + (iVar11 >> 0x1f) +
      (int)(((longlong)iVar11 / 6 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 6) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() % NumInputChannels) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = GetMultichannelBufferNumFrames(param_2);
  iVar11 = param_1->ArrayNum;
  if (iVar11 / 6 + (iVar11 >> 0x1f) +
      (int)(((longlong)iVar11 / 6 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f) != iVar10) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (param_2->ArrayNum != 8) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumOutputChannels == OutSamples.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                       ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  pfVar12 = param_1->DataPtr;
  lVar13 = (longlong)iVar11;
  if (param_2->ArrayNum < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_48 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_40 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_38 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar15 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar18 = *(float **)((param_2->AllocatorInstance).Data + 0x50);
  if (param_2->ArrayNum < 7) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar17 = *(float **)((param_2->AllocatorInstance).Data + 0x60);
  if (param_2->ArrayNum < 8) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar14 = *(float **)((param_2->AllocatorInstance).Data + 0x70);
  if (0 < iVar11) {
    pfVar12 = pfVar12 + 2;
    do {
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *local_48 = *(float *)(pFVar7 + 4) * pfVar12[-1] + *(float *)pFVar7 * pfVar12[-2] +
                  *(float *)(pFVar7 + 8) * *pfVar12 + *(float *)(pFVar7 + 0xc) * pfVar12[1] +
                  *(float *)(pFVar7 + 0x10) * pfVar12[2] + *(float *)(pFVar7 + 0x14) * pfVar12[3];
      local_48 = local_48 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *local_40 = *(float *)(pFVar7 + 0x1c) * pfVar12[-1] + *(float *)(pFVar7 + 0x18) * pfVar12[-2]
                  + *(float *)(pFVar7 + 0x20) * *pfVar12 + *(float *)(pFVar7 + 0x24) * pfVar12[1] +
                  *(float *)(pFVar7 + 0x28) * pfVar12[2] + *(float *)(pFVar7 + 0x2c) * pfVar12[3];
      local_40 = local_40 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *local_38 = *(float *)(pFVar7 + 0x34) * pfVar12[-1] + *(float *)(pFVar7 + 0x30) * pfVar12[-2]
                  + *(float *)(pFVar7 + 0x38) * *pfVar12 + *(float *)(pFVar7 + 0x3c) * pfVar12[1] +
                  *(float *)(pFVar7 + 0x40) * pfVar12[2] + *(float *)(pFVar7 + 0x44) * pfVar12[3];
      local_38 = local_38 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar16 = *(float *)(pFVar7 + 0x4c) * pfVar12[-1] + *(float *)(pFVar7 + 0x48) * pfVar12[-2] +
                 *(float *)(pFVar7 + 0x50) * *pfVar12 + *(float *)(pFVar7 + 0x54) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x58) * pfVar12[2] + *(float *)(pFVar7 + 0x5c) * pfVar12[3];
      pfVar16 = pfVar16 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar15 = *(float *)(pFVar7 + 100) * pfVar12[-1] + *(float *)(pFVar7 + 0x60) * pfVar12[-2] +
                 *(float *)(pFVar7 + 0x68) * *pfVar12 + *(float *)(pFVar7 + 0x6c) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x70) * pfVar12[2] + *(float *)(pFVar7 + 0x74) * pfVar12[3];
      pfVar15 = pfVar15 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar18 = *(float *)(pFVar7 + 0x7c) * pfVar12[-1] + pfVar12[-2] * *(float *)(pFVar7 + 0x78) +
                 *(float *)(pFVar7 + 0x80) * *pfVar12 + *(float *)(pFVar7 + 0x84) * pfVar12[1] +
                 *(float *)(pFVar7 + 0x88) * pfVar12[2] + *(float *)(pFVar7 + 0x8c) * pfVar12[3];
      pfVar18 = pfVar18 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar17 = *(float *)(pFVar7 + 0x94) * pfVar12[-1] + *(float *)(pFVar7 + 0x90) * pfVar12[-2] +
                 *(float *)(pFVar7 + 0x98) * *pfVar12 + *(float *)(pFVar7 + 0x9c) * pfVar12[1] +
                 *(float *)(pFVar7 + 0xa0) * pfVar12[2] + *(float *)(pFVar7 + 0xa4) * pfVar12[3];
      pfVar17 = pfVar17 + 1;
      pFVar7 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar12 + -2;
      fVar6 = *pfVar12;
      pfVar2 = pfVar12 + -1;
      pfVar3 = pfVar12 + 1;
      pfVar4 = pfVar12 + 2;
      pfVar5 = pfVar12 + 3;
      pfVar12 = pfVar12 + 6;
      *pfVar14 = *(float *)(pFVar7 + 0xac) * *pfVar2 + *(float *)(pFVar7 + 0xa8) * *pfVar1 +
                 *(float *)(pFVar7 + 0xb0) * fVar6 + *(float *)(pFVar7 + 0xb4) * *pfVar3 +
                 *(float *)(pFVar7 + 0xb8) * *pfVar4 + *(float *)(pFVar7 + 0xbc) * *pfVar5;
      pfVar14 = pfVar14 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

// ProcessAudio @ 1444d1eb0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,1>::ProcessAudio
          (TConvertDeinterleave<7,1> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 7) * 7) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  iVar13 = (int)((ulonglong)((longlong)param_1->ArrayNum * -0x6db6db6d) >> 0x20) + param_1->ArrayNum
  ;
  if ((iVar13 >> 2) - (iVar13 >> 0x1f) != iVar11) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (param_2->ArrayNum != 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  pfVar14 = param_1->DataPtr;
  lVar15 = (longlong)iVar11;
  if (param_2->ArrayNum < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar12 = *(float **)(param_2->AllocatorInstance).Data;
  if (0 < iVar11) {
    pfVar14 = pfVar14 + 2;
    do {
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar14 + -2;
      fVar7 = *pfVar14;
      pfVar2 = pfVar14 + -1;
      pfVar3 = pfVar14 + 1;
      pfVar4 = pfVar14 + 2;
      pfVar5 = pfVar14 + 3;
      pfVar6 = pfVar14 + 4;
      pfVar14 = pfVar14 + 7;
      *pfVar12 = *(float *)(pFVar8 + 4) * *pfVar2 + *pfVar1 * *(float *)pFVar8 +
                 *(float *)(pFVar8 + 8) * fVar7 + *(float *)(pFVar8 + 0xc) * *pfVar3 +
                 *(float *)(pFVar8 + 0x10) * *pfVar4 + *(float *)(pFVar8 + 0x14) * *pfVar5 +
                 *(float *)(pFVar8 + 0x18) * *pfVar6;
      pfVar12 = pfVar12 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}

// ProcessAudio @ 1444d2080

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,2>::ProcessAudio
          (TConvertDeinterleave<7,2> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 7) * 7) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  iVar13 = (int)((ulonglong)((longlong)param_1->ArrayNum * -0x6db6db6d) >> 0x20) + param_1->ArrayNum
  ;
  if ((iVar13 >> 2) - (iVar13 >> 0x1f) != iVar11) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (param_2->ArrayNum != 2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  pfVar12 = param_1->DataPtr;
  lVar14 = (longlong)iVar11;
  if (param_2->ArrayNum < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar15 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (0 < iVar11) {
    pfVar12 = pfVar12 + 2;
    do {
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar15 = *(float *)(pFVar8 + 4) * pfVar12[-1] + pfVar12[-2] * *(float *)pFVar8 +
                 *(float *)(pFVar8 + 8) * *pfVar12 + *(float *)(pFVar8 + 0xc) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x10) * pfVar12[2] + *(float *)(pFVar8 + 0x14) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x18) * pfVar12[4];
      pfVar15 = pfVar15 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar12 + -2;
      fVar7 = *pfVar12;
      pfVar2 = pfVar12 + -1;
      pfVar3 = pfVar12 + 1;
      pfVar4 = pfVar12 + 2;
      pfVar5 = pfVar12 + 3;
      pfVar6 = pfVar12 + 4;
      pfVar12 = pfVar12 + 7;
      *pfVar16 = *(float *)(pFVar8 + 0x20) * *pfVar2 + *(float *)(pFVar8 + 0x1c) * *pfVar1 +
                 *(float *)(pFVar8 + 0x24) * fVar7 + *(float *)(pFVar8 + 0x28) * *pfVar3 +
                 *(float *)(pFVar8 + 0x2c) * *pfVar4 + *(float *)(pFVar8 + 0x30) * *pfVar5 +
                 *(float *)(pFVar8 + 0x34) * *pfVar6;
      pfVar16 = pfVar16 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}

// ProcessAudio @ 1444d2320

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,3>::ProcessAudio
          (TConvertDeinterleave<7,3> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 7) * 7) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  iVar13 = (int)((ulonglong)((longlong)param_1->ArrayNum * -0x6db6db6d) >> 0x20) + param_1->ArrayNum
  ;
  if ((iVar13 >> 2) - (iVar13 >> 0x1f) != iVar11) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (param_2->ArrayNum != 3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  pfVar12 = param_1->DataPtr;
  lVar15 = (longlong)iVar11;
  if (param_2->ArrayNum < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar14 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar17 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (0 < iVar11) {
    pfVar12 = pfVar12 + 2;
    do {
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar14 = *(float *)(pFVar8 + 4) * pfVar12[-1] + *(float *)pFVar8 * pfVar12[-2] +
                 *(float *)(pFVar8 + 8) * *pfVar12 + *(float *)(pFVar8 + 0xc) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x10) * pfVar12[2] + *(float *)(pFVar8 + 0x14) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x18) * pfVar12[4];
      pfVar14 = pfVar14 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar16 = *(float *)(pFVar8 + 0x20) * pfVar12[-1] + *(float *)(pFVar8 + 0x1c) * pfVar12[-2] +
                 *(float *)(pFVar8 + 0x24) * *pfVar12 + *(float *)(pFVar8 + 0x28) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x2c) * pfVar12[2] + *(float *)(pFVar8 + 0x30) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x34) * pfVar12[4];
      pfVar16 = pfVar16 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar12 + -2;
      fVar7 = *pfVar12;
      pfVar2 = pfVar12 + -1;
      pfVar3 = pfVar12 + 1;
      pfVar4 = pfVar12 + 2;
      pfVar5 = pfVar12 + 3;
      pfVar6 = pfVar12 + 4;
      pfVar12 = pfVar12 + 7;
      *pfVar17 = *(float *)(pFVar8 + 0x3c) * *pfVar2 + *(float *)(pFVar8 + 0x38) * *pfVar1 +
                 *(float *)(pFVar8 + 0x40) * fVar7 + *(float *)(pFVar8 + 0x44) * *pfVar3 +
                 *(float *)(pFVar8 + 0x48) * *pfVar4 + *(float *)(pFVar8 + 0x4c) * *pfVar5 +
                 *(float *)(pFVar8 + 0x50) * *pfVar6;
      pfVar17 = pfVar17 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}

// ProcessAudio @ 1444d2660

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,4>::ProcessAudio
          (TConvertDeinterleave<7,4> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 7) * 7) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  iVar13 = (int)((ulonglong)((longlong)param_1->ArrayNum * -0x6db6db6d) >> 0x20) + param_1->ArrayNum
  ;
  if ((iVar13 >> 2) - (iVar13 >> 0x1f) != iVar11) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (param_2->ArrayNum != 4) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  pfVar12 = param_1->DataPtr;
  lVar15 = (longlong)iVar11;
  if (param_2->ArrayNum < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar18 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar17 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar14 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (0 < iVar11) {
    pfVar12 = pfVar12 + 2;
    do {
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar18 = *(float *)(pFVar8 + 4) * pfVar12[-1] + pfVar12[-2] * *(float *)pFVar8 +
                 *(float *)(pFVar8 + 8) * *pfVar12 + *(float *)(pFVar8 + 0xc) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x10) * pfVar12[2] + *(float *)(pFVar8 + 0x14) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x18) * pfVar12[4];
      pfVar18 = pfVar18 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar17 = *(float *)(pFVar8 + 0x20) * pfVar12[-1] + *(float *)(pFVar8 + 0x1c) * pfVar12[-2] +
                 *(float *)(pFVar8 + 0x24) * *pfVar12 + *(float *)(pFVar8 + 0x28) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x2c) * pfVar12[2] + *(float *)(pFVar8 + 0x30) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x34) * pfVar12[4];
      pfVar17 = pfVar17 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar14 = *(float *)(pFVar8 + 0x3c) * pfVar12[-1] + *(float *)(pFVar8 + 0x38) * pfVar12[-2] +
                 *(float *)(pFVar8 + 0x40) * *pfVar12 + *(float *)(pFVar8 + 0x44) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x48) * pfVar12[2] + *(float *)(pFVar8 + 0x4c) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x50) * pfVar12[4];
      pfVar14 = pfVar14 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar12 + -2;
      pfVar2 = pfVar12 + -1;
      fVar7 = *pfVar12;
      pfVar3 = pfVar12 + 1;
      pfVar4 = pfVar12 + 2;
      pfVar5 = pfVar12 + 3;
      pfVar6 = pfVar12 + 4;
      pfVar12 = pfVar12 + 7;
      *pfVar16 = *(float *)(pFVar8 + 0x58) * *pfVar2 + *(float *)(pFVar8 + 0x54) * *pfVar1 +
                 *(float *)(pFVar8 + 0x5c) * fVar7 + *(float *)(pFVar8 + 0x60) * *pfVar3 +
                 *(float *)(pFVar8 + 100) * *pfVar4 + *(float *)(pFVar8 + 0x68) * *pfVar5 +
                 *(float *)(pFVar8 + 0x6c) * *pfVar6;
      pfVar16 = pfVar16 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}

// ProcessAudio @ 1444d2a50

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,5>::ProcessAudio
          (TConvertDeinterleave<7,5> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 7) * 7) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  iVar13 = (int)((ulonglong)((longlong)param_1->ArrayNum * -0x6db6db6d) >> 0x20) + param_1->ArrayNum
  ;
  if ((iVar13 >> 2) - (iVar13 >> 0x1f) != iVar11) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (param_2->ArrayNum != 5) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  pfVar12 = param_1->DataPtr;
  lVar15 = (longlong)iVar11;
  if (param_2->ArrayNum < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar18 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar17 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar19 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar14 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (0 < iVar11) {
    pfVar12 = pfVar12 + 2;
    do {
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar18 = *(float *)(pFVar8 + 4) * pfVar12[-1] + *(float *)pFVar8 * pfVar12[-2] +
                 *(float *)(pFVar8 + 8) * *pfVar12 + *(float *)(pFVar8 + 0xc) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x10) * pfVar12[2] + *(float *)(pFVar8 + 0x14) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x18) * pfVar12[4];
      pfVar18 = pfVar18 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar17 = *(float *)(pFVar8 + 0x20) * pfVar12[-1] + pfVar12[-2] * *(float *)(pFVar8 + 0x1c) +
                 *(float *)(pFVar8 + 0x24) * *pfVar12 + *(float *)(pFVar8 + 0x28) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x2c) * pfVar12[2] + *(float *)(pFVar8 + 0x30) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x34) * pfVar12[4];
      pfVar17 = pfVar17 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar19 = *(float *)(pFVar8 + 0x3c) * pfVar12[-1] + pfVar12[-2] * *(float *)(pFVar8 + 0x38) +
                 *(float *)(pFVar8 + 0x40) * *pfVar12 + *(float *)(pFVar8 + 0x44) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x48) * pfVar12[2] + *(float *)(pFVar8 + 0x4c) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x50) * pfVar12[4];
      pfVar19 = pfVar19 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar14 = *(float *)(pFVar8 + 0x58) * pfVar12[-1] + pfVar12[-2] * *(float *)(pFVar8 + 0x54) +
                 *(float *)(pFVar8 + 0x5c) * *pfVar12 + *(float *)(pFVar8 + 0x60) * pfVar12[1] +
                 *(float *)(pFVar8 + 100) * pfVar12[2] + *(float *)(pFVar8 + 0x68) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x6c) * pfVar12[4];
      pfVar14 = pfVar14 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar12 + -2;
      fVar7 = *pfVar12;
      pfVar2 = pfVar12 + -1;
      pfVar3 = pfVar12 + 1;
      pfVar4 = pfVar12 + 2;
      pfVar5 = pfVar12 + 3;
      pfVar6 = pfVar12 + 4;
      pfVar12 = pfVar12 + 7;
      *pfVar16 = *(float *)(pFVar8 + 0x74) * *pfVar2 + *(float *)(pFVar8 + 0x70) * *pfVar1 +
                 *(float *)(pFVar8 + 0x78) * fVar7 + *(float *)(pFVar8 + 0x7c) * *pfVar3 +
                 *(float *)(pFVar8 + 0x80) * *pfVar4 + *(float *)(pFVar8 + 0x84) * *pfVar5 +
                 *(float *)(pFVar8 + 0x88) * *pfVar6;
      pfVar16 = pfVar16 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}

// ProcessAudio @ 1444d2ef0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,6>::ProcessAudio
          (TConvertDeinterleave<7,6> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *local_38;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 7) * 7) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  iVar13 = (int)((ulonglong)((longlong)param_1->ArrayNum * -0x6db6db6d) >> 0x20) + param_1->ArrayNum
  ;
  if ((iVar13 >> 2) - (iVar13 >> 0x1f) != iVar11) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (param_2->ArrayNum != 6) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  pfVar12 = param_1->DataPtr;
  lVar14 = (longlong)iVar11;
  if (param_2->ArrayNum < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  local_38 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar17 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar19 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar18 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar15 = *(float **)((param_2->AllocatorInstance).Data + 0x50);
  if (0 < iVar11) {
    pfVar12 = pfVar12 + 2;
    do {
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *local_38 = *(float *)(pFVar8 + 4) * pfVar12[-1] + *(float *)pFVar8 * pfVar12[-2] +
                  *(float *)(pFVar8 + 8) * *pfVar12 + *(float *)(pFVar8 + 0xc) * pfVar12[1] +
                  *(float *)(pFVar8 + 0x10) * pfVar12[2] + *(float *)(pFVar8 + 0x14) * pfVar12[3] +
                  *(float *)(pFVar8 + 0x18) * pfVar12[4];
      local_38 = local_38 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar17 = *(float *)(pFVar8 + 0x20) * pfVar12[-1] + *(float *)(pFVar8 + 0x1c) * pfVar12[-2] +
                 *(float *)(pFVar8 + 0x24) * *pfVar12 + *(float *)(pFVar8 + 0x28) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x2c) * pfVar12[2] + *(float *)(pFVar8 + 0x30) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x34) * pfVar12[4];
      pfVar17 = pfVar17 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar16 = *(float *)(pFVar8 + 0x3c) * pfVar12[-1] + *(float *)(pFVar8 + 0x38) * pfVar12[-2] +
                 *(float *)(pFVar8 + 0x40) * *pfVar12 + *(float *)(pFVar8 + 0x44) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x48) * pfVar12[2] + *(float *)(pFVar8 + 0x4c) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x50) * pfVar12[4];
      pfVar16 = pfVar16 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar19 = *(float *)(pFVar8 + 0x58) * pfVar12[-1] + *(float *)(pFVar8 + 0x54) * pfVar12[-2] +
                 *(float *)(pFVar8 + 0x5c) * *pfVar12 + *(float *)(pFVar8 + 0x60) * pfVar12[1] +
                 *(float *)(pFVar8 + 100) * pfVar12[2] + *(float *)(pFVar8 + 0x68) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x6c) * pfVar12[4];
      pfVar19 = pfVar19 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar18 = *(float *)(pFVar8 + 0x74) * pfVar12[-1] + *(float *)(pFVar8 + 0x70) * pfVar12[-2] +
                 *(float *)(pFVar8 + 0x78) * *pfVar12 + *(float *)(pFVar8 + 0x7c) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x80) * pfVar12[2] + *(float *)(pFVar8 + 0x84) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x88) * pfVar12[4];
      pfVar18 = pfVar18 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar12 + -2;
      fVar7 = *pfVar12;
      pfVar2 = pfVar12 + -1;
      pfVar3 = pfVar12 + 1;
      pfVar4 = pfVar12 + 2;
      pfVar5 = pfVar12 + 3;
      pfVar6 = pfVar12 + 4;
      pfVar12 = pfVar12 + 7;
      *pfVar15 = *(float *)(pFVar8 + 0x90) * *pfVar2 + *(float *)(pFVar8 + 0x8c) * *pfVar1 +
                 *(float *)(pFVar8 + 0x94) * fVar7 + *(float *)(pFVar8 + 0x98) * *pfVar3 +
                 *(float *)(pFVar8 + 0x9c) * *pfVar4 + *(float *)(pFVar8 + 0xa0) * *pfVar5 +
                 *(float *)(pFVar8 + 0xa4) * *pfVar6;
      pfVar15 = pfVar15 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}

// ProcessAudio @ 1444d3470

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,7>::ProcessAudio
          (TConvertDeinterleave<7,7> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *local_38;
  float *local_30;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 7) * 7) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  iVar13 = (int)((ulonglong)((longlong)param_1->ArrayNum * -0x6db6db6d) >> 0x20) + param_1->ArrayNum
  ;
  if ((iVar13 >> 2) - (iVar13 >> 0x1f) != iVar11) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (param_2->ArrayNum != 7) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  pfVar12 = param_1->DataPtr;
  lVar14 = (longlong)iVar11;
  if (param_2->ArrayNum < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  local_38 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  local_30 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar17 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar19 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar18 = *(float **)((param_2->AllocatorInstance).Data + 0x50);
  if (param_2->ArrayNum < 7) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar15 = *(float **)((param_2->AllocatorInstance).Data + 0x60);
  if (0 < iVar11) {
    pfVar12 = pfVar12 + 2;
    do {
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *local_38 = *(float *)(pFVar8 + 4) * pfVar12[-1] + *(float *)pFVar8 * pfVar12[-2] +
                  *(float *)(pFVar8 + 8) * *pfVar12 + *(float *)(pFVar8 + 0xc) * pfVar12[1] +
                  *(float *)(pFVar8 + 0x10) * pfVar12[2] + *(float *)(pFVar8 + 0x14) * pfVar12[3] +
                  *(float *)(pFVar8 + 0x18) * pfVar12[4];
      local_38 = local_38 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *local_30 = *(float *)(pFVar8 + 0x20) * pfVar12[-1] + *(float *)(pFVar8 + 0x1c) * pfVar12[-2]
                  + *(float *)(pFVar8 + 0x24) * *pfVar12 + *(float *)(pFVar8 + 0x28) * pfVar12[1] +
                  *(float *)(pFVar8 + 0x2c) * pfVar12[2] + *(float *)(pFVar8 + 0x30) * pfVar12[3] +
                  *(float *)(pFVar8 + 0x34) * pfVar12[4];
      local_30 = local_30 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar17 = *(float *)(pFVar8 + 0x3c) * pfVar12[-1] + pfVar12[-2] * *(float *)(pFVar8 + 0x38) +
                 *(float *)(pFVar8 + 0x40) * *pfVar12 + *(float *)(pFVar8 + 0x44) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x48) * pfVar12[2] + *(float *)(pFVar8 + 0x4c) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x50) * pfVar12[4];
      pfVar17 = pfVar17 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar16 = *(float *)(pFVar8 + 0x58) * pfVar12[-1] + *(float *)(pFVar8 + 0x54) * pfVar12[-2] +
                 *(float *)(pFVar8 + 0x5c) * *pfVar12 + *(float *)(pFVar8 + 0x60) * pfVar12[1] +
                 *(float *)(pFVar8 + 100) * pfVar12[2] + *(float *)(pFVar8 + 0x68) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x6c) * pfVar12[4];
      pfVar16 = pfVar16 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar19 = *(float *)(pFVar8 + 0x74) * pfVar12[-1] + *(float *)(pFVar8 + 0x70) * pfVar12[-2] +
                 *(float *)(pFVar8 + 0x78) * *pfVar12 + *(float *)(pFVar8 + 0x7c) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x80) * pfVar12[2] + *(float *)(pFVar8 + 0x84) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x88) * pfVar12[4];
      pfVar19 = pfVar19 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar18 = *(float *)(pFVar8 + 0x90) * pfVar12[-1] + *(float *)(pFVar8 + 0x8c) * pfVar12[-2] +
                 *(float *)(pFVar8 + 0x94) * *pfVar12 + *(float *)(pFVar8 + 0x98) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x9c) * pfVar12[2] + *(float *)(pFVar8 + 0xa0) * pfVar12[3] +
                 *(float *)(pFVar8 + 0xa4) * pfVar12[4];
      pfVar18 = pfVar18 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar12 + -2;
      fVar7 = *pfVar12;
      pfVar2 = pfVar12 + -1;
      pfVar3 = pfVar12 + 1;
      pfVar4 = pfVar12 + 2;
      pfVar5 = pfVar12 + 3;
      pfVar6 = pfVar12 + 4;
      pfVar12 = pfVar12 + 7;
      *pfVar15 = *(float *)(pFVar8 + 0xac) * *pfVar2 + *pfVar1 * *(float *)(pFVar8 + 0xa8) +
                 *(float *)(pFVar8 + 0xb0) * fVar7 + *(float *)(pFVar8 + 0xb4) * *pfVar3 +
                 *(float *)(pFVar8 + 0xb8) * *pfVar4 + *(float *)(pFVar8 + 0xbc) * *pfVar5 +
                 *(float *)(pFVar8 + 0xc0) * *pfVar6;
      pfVar15 = pfVar15 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}

// ProcessAudio @ 1444d3ac0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<7,8>::ProcessAudio
          (TConvertDeinterleave<7,8> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *local_48;
  float *local_40;
  float *local_38;
  
  if (param_1->ArrayNum != (param_1->ArrayNum / 7) * 7) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  iVar13 = (int)((ulonglong)((longlong)param_1->ArrayNum * -0x6db6db6d) >> 0x20) + param_1->ArrayNum
  ;
  if ((iVar13 >> 2) - (iVar13 >> 0x1f) != iVar11) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (param_2->ArrayNum != 8) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = GetMultichannelBufferNumFrames(param_2);
  pfVar12 = param_1->DataPtr;
  lVar14 = (longlong)iVar11;
  if (param_2->ArrayNum < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  local_48 = *(float **)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  local_40 = *(float **)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  local_38 = *(float **)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar17 = *(float **)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar16 = *(float **)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar19 = *(float **)((param_2->AllocatorInstance).Data + 0x50);
  if (param_2->ArrayNum < 7) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar18 = *(float **)((param_2->AllocatorInstance).Data + 0x60);
  if (param_2->ArrayNum < 8) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar15 = *(float **)((param_2->AllocatorInstance).Data + 0x70);
  if (0 < iVar11) {
    pfVar12 = pfVar12 + 2;
    do {
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *local_48 = *(float *)(pFVar8 + 4) * pfVar12[-1] + pfVar12[-2] * *(float *)pFVar8 +
                  *(float *)(pFVar8 + 8) * *pfVar12 + *(float *)(pFVar8 + 0xc) * pfVar12[1] +
                  *(float *)(pFVar8 + 0x10) * pfVar12[2] + *(float *)(pFVar8 + 0x14) * pfVar12[3] +
                  *(float *)(pFVar8 + 0x18) * pfVar12[4];
      local_48 = local_48 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *local_40 = *(float *)(pFVar8 + 0x20) * pfVar12[-1] + *(float *)(pFVar8 + 0x1c) * pfVar12[-2]
                  + *(float *)(pFVar8 + 0x24) * *pfVar12 + *(float *)(pFVar8 + 0x28) * pfVar12[1] +
                  *(float *)(pFVar8 + 0x2c) * pfVar12[2] + *(float *)(pFVar8 + 0x30) * pfVar12[3] +
                  *(float *)(pFVar8 + 0x34) * pfVar12[4];
      local_40 = local_40 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *local_38 = *(float *)(pFVar8 + 0x3c) * pfVar12[-1] + *(float *)(pFVar8 + 0x38) * pfVar12[-2]
                  + *(float *)(pFVar8 + 0x40) * *pfVar12 + *(float *)(pFVar8 + 0x44) * pfVar12[1] +
                  *(float *)(pFVar8 + 0x48) * pfVar12[2] + *(float *)(pFVar8 + 0x4c) * pfVar12[3] +
                  *(float *)(pFVar8 + 0x50) * pfVar12[4];
      local_38 = local_38 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar17 = *(float *)(pFVar8 + 0x58) * pfVar12[-1] + *(float *)(pFVar8 + 0x54) * pfVar12[-2] +
                 *(float *)(pFVar8 + 0x5c) * *pfVar12 + *(float *)(pFVar8 + 0x60) * pfVar12[1] +
                 *(float *)(pFVar8 + 100) * pfVar12[2] + *(float *)(pFVar8 + 0x68) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x6c) * pfVar12[4];
      pfVar17 = pfVar17 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar16 = *(float *)(pFVar8 + 0x74) * pfVar12[-1] + pfVar12[-2] * *(float *)(pFVar8 + 0x70) +
                 *(float *)(pFVar8 + 0x78) * *pfVar12 + *(float *)(pFVar8 + 0x7c) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x80) * pfVar12[2] + *(float *)(pFVar8 + 0x84) * pfVar12[3] +
                 *(float *)(pFVar8 + 0x88) * pfVar12[4];
      pfVar16 = pfVar16 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar19 = *(float *)(pFVar8 + 0x90) * pfVar12[-1] + pfVar12[-2] * *(float *)(pFVar8 + 0x8c) +
                 *(float *)(pFVar8 + 0x94) * *pfVar12 + *(float *)(pFVar8 + 0x98) * pfVar12[1] +
                 *(float *)(pFVar8 + 0x9c) * pfVar12[2] + *(float *)(pFVar8 + 0xa0) * pfVar12[3] +
                 *(float *)(pFVar8 + 0xa4) * pfVar12[4];
      pfVar19 = pfVar19 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      *pfVar18 = *(float *)(pFVar8 + 0xac) * pfVar12[-1] + *(float *)(pFVar8 + 0xa8) * pfVar12[-2] +
                 *(float *)(pFVar8 + 0xb0) * *pfVar12 + *(float *)(pFVar8 + 0xb4) * pfVar12[1] +
                 *(float *)(pFVar8 + 0xb8) * pfVar12[2] + *(float *)(pFVar8 + 0xbc) * pfVar12[3] +
                 *(float *)(pFVar8 + 0xc0) * pfVar12[4];
      pfVar18 = pfVar18 + 1;
      pFVar8 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar12 + -2;
      fVar7 = *pfVar12;
      pfVar2 = pfVar12 + -1;
      pfVar3 = pfVar12 + 1;
      pfVar4 = pfVar12 + 2;
      pfVar5 = pfVar12 + 3;
      pfVar6 = pfVar12 + 4;
      pfVar12 = pfVar12 + 7;
      *pfVar15 = *(float *)(pFVar8 + 200) * *pfVar2 + *(float *)(pFVar8 + 0xc4) * *pfVar1 +
                 *(float *)(pFVar8 + 0xcc) * fVar7 + *(float *)(pFVar8 + 0xd0) * *pfVar3 +
                 *(float *)(pFVar8 + 0xd4) * *pfVar4 + *(float *)(pFVar8 + 0xd8) * *pfVar5 +
                 *(float *)(pFVar8 + 0xdc) * *pfVar6;
      pfVar15 = pfVar15 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}

// ProcessAudio @ 1444d41e0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,1>::ProcessAudio
          (TConvertDeinterleave<8,1> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  float *pfVar16;
  
  uVar12 = param_1->ArrayNum & 0x80000007;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
  }
  if ((uVar12 != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InSamples.Num() % NumInputChannels) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x39,L"Input sample buffer contains partial audio frame."), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar13 = GetMultichannelBufferNumFrames(param_2);
  if (((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 7U)) >> 3 != iVar13) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x3a,L"Audio buffer frame count mismatch."), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2->ArrayNum != 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumOutputChannels == OutSamples.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x3b,L"Output audio buffer not initialized to expected channel count."),
     bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar13 = GetMultichannelBufferNumFrames(param_2);
  pfVar16 = param_1->DataPtr;
  lVar15 = (longlong)iVar13;
  if ((param_2->ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pfVar14 = *(float **)(param_2->AllocatorInstance).Data;
  if (0 < iVar13) {
    do {
      pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
      pfVar1 = pfVar16 + 4;
      pfVar4 = pfVar16 + 5;
      pfVar5 = pfVar16 + 6;
      pfVar6 = pfVar16 + 7;
      fVar7 = *pfVar16;
      pfVar8 = pfVar16 + 1;
      pfVar9 = pfVar16 + 2;
      pfVar10 = pfVar16 + 3;
      pfVar16 = pfVar16 + 8;
      *pfVar14 = *pfVar5 * *(float *)(pFVar2 + 0x18) + *pfVar9 * *(float *)(pFVar2 + 8) +
                 *pfVar1 * *(float *)(pFVar2 + 0x10) + fVar7 * *(float *)pFVar2 +
                 *pfVar6 * *(float *)(pFVar2 + 0x1c) + *pfVar10 * *(float *)(pFVar2 + 0xc) +
                 *pfVar4 * *(float *)(pFVar2 + 0x14) + *pfVar8 * *(float *)(pFVar2 + 4);
      pfVar14 = pfVar14 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}

// ProcessAudio @ 1444d4360

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,2>::ProcessAudio
          (TConvertDeinterleave<8,2> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong local_18 [2];
  
  uVar22 = param_1->ArrayNum & 0x80000007;
  if ((int)uVar22 < 0) {
    uVar22 = (uVar22 - 1 | 0xfffffff8) + 1;
  }
  if (uVar22 != 0) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar23 = GetMultichannelBufferNumFrames(param_2);
  if ((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 7U)) >> 3 != iVar23) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2->ArrayNum != 2) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar23 = GetMultichannelBufferNumFrames(param_2);
  pfVar25 = param_1->DataPtr;
  lVar26 = (longlong)iVar23;
  if (param_2->ArrayNum < 1) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18[0] = *(longlong *)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18[1] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x10);
  if (0 < iVar23) {
    do {
      lVar24 = 0;
      plVar27 = local_18;
      lVar28 = 2;
      do {
        pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
        pfVar3 = (float *)*plVar27;
        fVar5 = pfVar25[4];
        fVar6 = pfVar25[5];
        fVar7 = pfVar25[6];
        fVar8 = pfVar25[7];
        pFVar1 = pFVar2 + lVar24 + 0x10;
        fVar9 = *(float *)pFVar1;
        fVar10 = *(float *)(pFVar1 + 4);
        fVar11 = *(float *)(pFVar1 + 8);
        fVar12 = *(float *)(pFVar1 + 0xc);
        fVar13 = *pfVar25;
        fVar14 = pfVar25[1];
        fVar15 = pfVar25[2];
        fVar16 = pfVar25[3];
        pFVar2 = pFVar2 + lVar24;
        fVar17 = *(float *)pFVar2;
        fVar18 = *(float *)(pFVar2 + 4);
        fVar19 = *(float *)(pFVar2 + 8);
        fVar20 = *(float *)(pFVar2 + 0xc);
        lVar24 = lVar24 + 0x20;
        *plVar27 = (longlong)(pfVar3 + 1);
        plVar27 = plVar27 + 1;
        *pfVar3 = fVar11 * fVar7 + fVar15 * fVar19 + fVar9 * fVar5 + fVar13 * fVar17 +
                  fVar12 * fVar8 + fVar16 * fVar20 + fVar10 * fVar6 + fVar14 * fVar18;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      pfVar25 = pfVar25 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
  }
  return;
}

// ProcessAudio @ 1444d4560

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,3>::ProcessAudio
          (TConvertDeinterleave<8,3> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong local_28 [4];
  
  uVar18 = param_1->ArrayNum & 0x80000007;
  if ((int)uVar18 < 0) {
    uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
  }
  if (uVar18 != 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar19 = GetMultichannelBufferNumFrames(param_2);
  if ((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 7U)) >> 3 != iVar19) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2->ArrayNum != 3) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar19 = GetMultichannelBufferNumFrames(param_2);
  pfVar21 = param_1->DataPtr;
  lVar22 = (longlong)iVar19;
  if (param_2->ArrayNum < 1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_28[0] = *(longlong *)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_28[1] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_28[2] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x20);
  if (0 < iVar19) {
    do {
      lVar20 = 0;
      plVar23 = local_28;
      lVar24 = 3;
      do {
        pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
        pfVar3 = (float *)*plVar23;
        fVar5 = pfVar21[4];
        fVar6 = pfVar21[5];
        fVar7 = pfVar21[6];
        fVar8 = pfVar21[7];
        pFVar1 = pFVar2 + lVar20 + 0x10;
        fVar9 = *(float *)pFVar1;
        fVar10 = *(float *)(pFVar1 + 4);
        fVar11 = *(float *)(pFVar1 + 8);
        fVar12 = *(float *)(pFVar1 + 0xc);
        pFVar2 = pFVar2 + lVar20;
        fVar13 = *(float *)pFVar2;
        fVar14 = *(float *)(pFVar2 + 4);
        fVar15 = *(float *)(pFVar2 + 8);
        fVar16 = *(float *)(pFVar2 + 0xc);
        lVar20 = lVar20 + 0x20;
        *plVar23 = (longlong)(pfVar3 + 1);
        plVar23 = plVar23 + 1;
        *pfVar3 = fVar11 * fVar7 + fVar15 * pfVar21[2] + fVar9 * fVar5 + fVar13 * *pfVar21 +
                  fVar12 * fVar8 + fVar16 * pfVar21[3] + fVar10 * fVar6 + fVar14 * pfVar21[1];
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      pfVar21 = pfVar21 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  return;
}

// ProcessAudio @ 1444d47a0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,4>::ProcessAudio
          (TConvertDeinterleave<8,4> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong local_28 [4];
  
  uVar18 = param_1->ArrayNum & 0x80000007;
  if ((int)uVar18 < 0) {
    uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
  }
  if ((uVar18 != 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InSamples.Num() % NumInputChannels) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x39,L"Input sample buffer contains partial audio frame."), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar19 = GetMultichannelBufferNumFrames(param_2);
  if (((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 7U)) >> 3 != iVar19) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x3a,L"Audio buffer frame count mismatch."), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2->ArrayNum != 4) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumOutputChannels == OutSamples.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x3b,L"Output audio buffer not initialized to expected channel count."),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar19 = GetMultichannelBufferNumFrames(param_2);
  pfVar21 = param_1->DataPtr;
  lVar22 = (longlong)iVar19;
  if ((param_2->ArrayNum < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_28[0] = *(longlong *)(param_2->AllocatorInstance).Data;
  if ((param_2->ArrayNum < 2) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_28[1] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x10);
  if ((param_2->ArrayNum < 3) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_28[2] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x20);
  if ((param_2->ArrayNum < 4) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_28[3] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x30);
  if (0 < iVar19) {
    do {
      lVar20 = 0;
      plVar23 = local_28;
      lVar24 = 4;
      do {
        pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
        pfVar3 = (float *)*plVar23;
        fVar5 = pfVar21[4];
        fVar6 = pfVar21[5];
        fVar7 = pfVar21[6];
        fVar8 = pfVar21[7];
        pFVar1 = pFVar2 + lVar20 + 0x10;
        fVar9 = *(float *)pFVar1;
        fVar10 = *(float *)(pFVar1 + 4);
        fVar11 = *(float *)(pFVar1 + 8);
        fVar12 = *(float *)(pFVar1 + 0xc);
        pFVar2 = pFVar2 + lVar20;
        fVar13 = *(float *)pFVar2;
        fVar14 = *(float *)(pFVar2 + 4);
        fVar15 = *(float *)(pFVar2 + 8);
        fVar16 = *(float *)(pFVar2 + 0xc);
        lVar20 = lVar20 + 0x20;
        *plVar23 = (longlong)(pfVar3 + 1);
        plVar23 = plVar23 + 1;
        *pfVar3 = fVar11 * fVar7 + fVar15 * pfVar21[2] + fVar9 * fVar5 + fVar13 * *pfVar21 +
                  fVar12 * fVar8 + fVar16 * pfVar21[3] + fVar10 * fVar6 + fVar14 * pfVar21[1];
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      pfVar21 = pfVar21 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  return;
}

// ProcessAudio @ 1444d4a30

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,5>::ProcessAudio
          (TConvertDeinterleave<8,5> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong local_38 [4];
  undefined8 local_18;
  
  uVar18 = param_1->ArrayNum & 0x80000007;
  if ((int)uVar18 < 0) {
    uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
  }
  if ((uVar18 != 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InSamples.Num() % NumInputChannels) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x39,L"Input sample buffer contains partial audio frame."), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar19 = GetMultichannelBufferNumFrames(param_2);
  if (((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 7U)) >> 3 != iVar19) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x3a,L"Audio buffer frame count mismatch."), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2->ArrayNum != 5) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumOutputChannels == OutSamples.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x3b,L"Output audio buffer not initialized to expected channel count."),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar19 = GetMultichannelBufferNumFrames(param_2);
  pfVar21 = param_1->DataPtr;
  lVar22 = (longlong)iVar19;
  if ((param_2->ArrayNum < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_38[0] = *(longlong *)(param_2->AllocatorInstance).Data;
  if ((param_2->ArrayNum < 2) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_38[1] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x10);
  if ((param_2->ArrayNum < 3) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_38[2] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x20);
  if ((param_2->ArrayNum < 4) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_38[3] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x30);
  if ((param_2->ArrayNum < 5) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_18 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x40);
  if (0 < iVar19) {
    do {
      lVar20 = 0;
      plVar23 = local_38;
      lVar24 = 5;
      do {
        pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
        pfVar3 = (float *)*plVar23;
        fVar5 = pfVar21[4];
        fVar6 = pfVar21[5];
        fVar7 = pfVar21[6];
        fVar8 = pfVar21[7];
        pFVar1 = pFVar2 + lVar20 + 0x10;
        fVar9 = *(float *)pFVar1;
        fVar10 = *(float *)(pFVar1 + 4);
        fVar11 = *(float *)(pFVar1 + 8);
        fVar12 = *(float *)(pFVar1 + 0xc);
        pFVar2 = pFVar2 + lVar20;
        fVar13 = *(float *)pFVar2;
        fVar14 = *(float *)(pFVar2 + 4);
        fVar15 = *(float *)(pFVar2 + 8);
        fVar16 = *(float *)(pFVar2 + 0xc);
        lVar20 = lVar20 + 0x20;
        *plVar23 = (longlong)(pfVar3 + 1);
        plVar23 = plVar23 + 1;
        *pfVar3 = fVar11 * fVar7 + fVar15 * pfVar21[2] + fVar9 * fVar5 + fVar13 * *pfVar21 +
                  fVar12 * fVar8 + fVar16 * pfVar21[3] + fVar10 * fVar6 + fVar14 * pfVar21[1];
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      pfVar21 = pfVar21 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  return;
}

// ProcessAudio @ 1444d4d10

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,6>::ProcessAudio
          (TConvertDeinterleave<8,6> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong local_38 [4];
  undefined8 local_18;
  undefined8 local_10;
  
  uVar18 = param_1->ArrayNum & 0x80000007;
  if ((int)uVar18 < 0) {
    uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
  }
  if (uVar18 != 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar19 = GetMultichannelBufferNumFrames(param_2);
  if ((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 7U)) >> 3 != iVar19) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2->ArrayNum != 6) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar19 = GetMultichannelBufferNumFrames(param_2);
  pfVar22 = param_1->DataPtr;
  lVar21 = (longlong)iVar19;
  if (param_2->ArrayNum < 1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_38[0] = *(longlong *)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_38[1] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_38[2] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_38[3] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_10 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x50);
  if (0 < iVar19) {
    do {
      lVar20 = 0;
      plVar23 = local_38;
      lVar24 = 6;
      do {
        pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
        pfVar3 = (float *)*plVar23;
        fVar5 = pfVar22[4];
        fVar6 = pfVar22[5];
        fVar7 = pfVar22[6];
        fVar8 = pfVar22[7];
        pFVar1 = pFVar2 + lVar20 + 0x10;
        fVar9 = *(float *)pFVar1;
        fVar10 = *(float *)(pFVar1 + 4);
        fVar11 = *(float *)(pFVar1 + 8);
        fVar12 = *(float *)(pFVar1 + 0xc);
        pFVar2 = pFVar2 + lVar20;
        fVar13 = *(float *)pFVar2;
        fVar14 = *(float *)(pFVar2 + 4);
        fVar15 = *(float *)(pFVar2 + 8);
        fVar16 = *(float *)(pFVar2 + 0xc);
        lVar20 = lVar20 + 0x20;
        *plVar23 = (longlong)(pfVar3 + 1);
        plVar23 = plVar23 + 1;
        *pfVar3 = fVar11 * fVar7 + fVar15 * pfVar22[2] + fVar9 * fVar5 + fVar13 * *pfVar22 +
                  fVar12 * fVar8 + fVar16 * pfVar22[3] + fVar10 * fVar6 + fVar14 * pfVar22[1];
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      pfVar22 = pfVar22 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  return;
}

// ProcessAudio @ 1444d5030

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,7>::ProcessAudio
          (TConvertDeinterleave<8,7> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong local_48 [4];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar18 = param_1->ArrayNum & 0x80000007;
  if ((int)uVar18 < 0) {
    uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
  }
  if ((uVar18 != 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InSamples.Num() % NumInputChannels) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x39,L"Input sample buffer contains partial audio frame."), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar19 = GetMultichannelBufferNumFrames(param_2);
  if (((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 7U)) >> 3 != iVar19) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x3a,L"Audio buffer frame count mismatch."), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2->ArrayNum != 7) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumOutputChannels == OutSamples.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                          ,0x3b,L"Output audio buffer not initialized to expected channel count."),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar19 = GetMultichannelBufferNumFrames(param_2);
  pfVar22 = param_1->DataPtr;
  lVar21 = (longlong)iVar19;
  if ((param_2->ArrayNum < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_48[0] = *(longlong *)(param_2->AllocatorInstance).Data;
  if ((param_2->ArrayNum < 2) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_48[1] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x10);
  if ((param_2->ArrayNum < 3) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_48[2] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x20);
  if ((param_2->ArrayNum < 4) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_48[3] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x30);
  if ((param_2->ArrayNum < 5) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_28 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x40);
  if ((param_2->ArrayNum < 6) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_20 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x50);
  if ((param_2->ArrayNum < 7) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_18 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x60);
  if (0 < iVar19) {
    do {
      lVar20 = 0;
      plVar23 = local_48;
      lVar24 = 7;
      do {
        pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
        pfVar3 = (float *)*plVar23;
        fVar5 = pfVar22[4];
        fVar6 = pfVar22[5];
        fVar7 = pfVar22[6];
        fVar8 = pfVar22[7];
        pFVar1 = pFVar2 + lVar20 + 0x10;
        fVar9 = *(float *)pFVar1;
        fVar10 = *(float *)(pFVar1 + 4);
        fVar11 = *(float *)(pFVar1 + 8);
        fVar12 = *(float *)(pFVar1 + 0xc);
        pFVar2 = pFVar2 + lVar20;
        fVar13 = *(float *)pFVar2;
        fVar14 = *(float *)(pFVar2 + 4);
        fVar15 = *(float *)(pFVar2 + 8);
        fVar16 = *(float *)(pFVar2 + 0xc);
        lVar20 = lVar20 + 0x20;
        *plVar23 = (longlong)(pfVar3 + 1);
        plVar23 = plVar23 + 1;
        *pfVar3 = fVar11 * fVar7 + fVar15 * pfVar22[2] + fVar9 * fVar5 + fVar13 * *pfVar22 +
                  fVar12 * fVar8 + fVar16 * pfVar22[3] + fVar10 * fVar6 + fVar14 * pfVar22[1];
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      pfVar22 = pfVar22 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  return;
}

// ProcessAudio @ 1444d53a0

void __thiscall
Audio::ConvertDeinterleavePrivate::TConvertDeinterleave<8,8>::ProcessAudio
          (TConvertDeinterleave<8,8> *this,TArrayView<float_const_,int> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  float *pfVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong local_48 [4];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar22 = param_1->ArrayNum & 0x80000007;
  if ((int)uVar22 < 0) {
    uVar22 = (uVar22 - 1 | 0xfffffff8) + 1;
  }
  if (uVar22 != 0) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() % NumInputChannels) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x39,L"Input sample buffer contains partial audio frame.");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar23 = GetMultichannelBufferNumFrames(param_2);
  if ((int)(param_1->ArrayNum + (param_1->ArrayNum >> 0x1f & 7U)) >> 3 != iVar23) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InSamples.Num() / NumInputChannels) == GetMultichannelBufferNumFrames(OutSamples)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3a,L"Audio buffer frame count mismatch.");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2->ArrayNum != 8) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumOutputChannels == OutSamples.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                        ,0x3b,L"Output audio buffer not initialized to expected channel count.");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar23 = GetMultichannelBufferNumFrames(param_2);
  pfVar26 = param_1->DataPtr;
  lVar25 = (longlong)iVar23;
  if (param_2->ArrayNum < 1) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_48[0] = *(longlong *)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayNum < 2) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_48[1] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x10);
  if (param_2->ArrayNum < 3) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_48[2] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x20);
  if (param_2->ArrayNum < 4) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_48[3] = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x30);
  if (param_2->ArrayNum < 5) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_28 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x40);
  if (param_2->ArrayNum < 6) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_20 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x50);
  if (param_2->ArrayNum < 7) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x60);
  if (param_2->ArrayNum < 8) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_10 = *(undefined8 *)((param_2->AllocatorInstance).Data + 0x70);
  if (0 < iVar23) {
    do {
      lVar24 = 0;
      plVar27 = local_48;
      lVar28 = 8;
      do {
        pFVar2 = (this->ChannelGains).AllocatorInstance.Data;
        pfVar3 = (float *)*plVar27;
        fVar5 = pfVar26[4];
        fVar6 = pfVar26[5];
        fVar7 = pfVar26[6];
        fVar8 = pfVar26[7];
        pFVar1 = pFVar2 + lVar24 + 0x10;
        fVar9 = *(float *)pFVar1;
        fVar10 = *(float *)(pFVar1 + 4);
        fVar11 = *(float *)(pFVar1 + 8);
        fVar12 = *(float *)(pFVar1 + 0xc);
        fVar13 = *pfVar26;
        fVar14 = pfVar26[1];
        fVar15 = pfVar26[2];
        fVar16 = pfVar26[3];
        pFVar2 = pFVar2 + lVar24;
        fVar17 = *(float *)pFVar2;
        fVar18 = *(float *)(pFVar2 + 4);
        fVar19 = *(float *)(pFVar2 + 8);
        fVar20 = *(float *)(pFVar2 + 0xc);
        lVar24 = lVar24 + 0x20;
        *plVar27 = (longlong)(pfVar3 + 1);
        plVar27 = plVar27 + 1;
        *pfVar3 = fVar11 * fVar7 + fVar15 * fVar19 + fVar9 * fVar5 + fVar13 * fVar17 +
                  fVar12 * fVar8 + fVar16 * fVar20 + fVar10 * fVar6 + fVar14 * fVar18;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      pfVar26 = pfVar26 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  return;
}

