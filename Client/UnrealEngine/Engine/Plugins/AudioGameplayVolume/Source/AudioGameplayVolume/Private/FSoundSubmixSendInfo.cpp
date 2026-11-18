// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 1

// FSoundSubmixSendInfo @ 14d99f240

FSoundSubmixSendInfo * __thiscall
FSoundSubmixSendInfo::FSoundSubmixSendInfo(FSoundSubmixSendInfo *this,FSoundSubmixSendInfo *param_1)

{
  UObject *pUVar1;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  pUVar1 = (UObject *)param_1->_padding_;
  this->_padding_ = (longlong)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  FRichCurve::FRichCurve((FRichCurve *)&this->_padding_,(FRichCurve *)&param_1->_padding_);
  pUVar1 = (UObject *)param_1->_padding_;
  this->_padding_ = (longlong)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  this->SendStage = param_1->SendStage;
  return this;
}

