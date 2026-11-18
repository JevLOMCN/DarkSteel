// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ~TScopedSlidingWindow<float> @ 1490b5d10

void __thiscall
Audio::TScopedSlidingWindow<float>::~TScopedSlidingWindow<float>(TScopedSlidingWindow<float> *this)

{
  TArrayView<float_const_,int> local_18;
  
  local_18.DataPtr = (float *)this->_padding_;
  local_18._8_8_ = this->_padding_;
  this->_padding_ = (longlong)&___7__TScopedSlidingWindow_M_Audio__6B_;
  TSlidingBuffer<float>::StoreForFutureWindows(this->SlidingBuffer,&local_18);
  this->_padding_ = (longlong)&___7__TSlidingWindow_M_Audio__6B_;
  return;
}

