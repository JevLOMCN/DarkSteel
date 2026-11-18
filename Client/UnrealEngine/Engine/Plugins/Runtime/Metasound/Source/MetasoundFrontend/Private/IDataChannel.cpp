// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 9

// GetPayloadID @ 14ad76920

long64 __thiscall Metasound::IDataChannel::GetPayloadID(IDataChannel *this)

{
  return -1;
}

// PushOpaque @ 14ad76940

bool __thiscall Metasound::IDataChannel::PushOpaque(IDataChannel *this,ISender *param_1)

{
  return true;
}

// PopOpaque @ 14ad76950

void __thiscall Metasound::IDataChannel::PopOpaque(IDataChannel *this,IReceiver *param_1)

{
  return;
}

// IsEmpty @ 14ad76960

bool __thiscall Metasound::IDataChannel::IsEmpty(IDataChannel *this)

{
  return true;
}

// GetDataType @ 14ad76970

FName __thiscall Metasound::IDataChannel::GetDataType(IDataChannel *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// PushLiteral @ 14ad76980

bool __thiscall Metasound::IDataChannel::PushLiteral(IDataChannel *this,FLiteral *param_1)

{
  return false;
}

// ConstructNewReceiverImplementation @ 14ad76990

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::IDataChannel::ConstructNewReceiverImplementation
          (IDataChannel *this,FReceiverInitParams *param_1)

{
  (param_1->OperatorSettings).SampleRate = 0;
  (param_1->OperatorSettings).TargetBlockRate = 0.0;
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// ConstructNewSenderImplementation @ 14ad76c00

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::IDataChannel::ConstructNewSenderImplementation
          (IDataChannel *this,FSenderInitParams *param_1)

{
  (param_1->OperatorSettings).SampleRate = 0;
  (param_1->OperatorSettings).TargetBlockRate = 0.0;
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// ~IDataChannel @ 14ad9eba0

void __thiscall Metasound::IDataChannel::~IDataChannel(IDataChannel *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ad9ebc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

