// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 3

// MonoPoleFilter @ 14f075850

MonoPoleFilter * __thiscall
vraudio::MonoPoleFilter::MonoPoleFilter(MonoPoleFilter *this,float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  this->previous_output_ = 0.0;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->coefficient_ = param_1;
  return this;
}

// Filter @ 14f075880

bool __thiscall
vraudio::MonoPoleFilter::Filter(MonoPoleFilter *this,ChannelView *param_1,ChannelView *param_2)

{
  float fVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar2 = param_1->size_;
  if (this->coefficient_ <= __real_358637bd && __real_358637bd != this->coefficient_) {
    this->previous_output_ = param_1->begin_itr_[uVar2 - 1];
    return false;
  }
  uVar4 = 0;
  if (3 < uVar2) {
    do {
      param_2->begin_itr_[uVar4] =
           (this->previous_output_ - param_1->begin_itr_[uVar4]) * this->coefficient_ +
           param_1->begin_itr_[uVar4];
      fVar1 = param_2->begin_itr_[uVar4];
      this->previous_output_ = fVar1;
      param_2->begin_itr_[uVar4 + 1] =
           (fVar1 - param_1->begin_itr_[uVar4 + 1]) * this->coefficient_ +
           param_1->begin_itr_[uVar4 + 1];
      fVar1 = param_2->begin_itr_[uVar4 + 1];
      this->previous_output_ = fVar1;
      param_2->begin_itr_[uVar4 + 2] =
           (fVar1 - param_1->begin_itr_[uVar4 + 2]) * this->coefficient_ +
           param_1->begin_itr_[uVar4 + 2];
      fVar1 = param_2->begin_itr_[uVar4 + 2];
      this->previous_output_ = fVar1;
      param_2->begin_itr_[uVar4 + 3] =
           (fVar1 - param_1->begin_itr_[uVar4 + 3]) * this->coefficient_ +
           param_1->begin_itr_[uVar4 + 3];
      lVar3 = uVar4 + 3;
      uVar4 = uVar4 + 4;
      this->previous_output_ = param_2->begin_itr_[lVar3];
    } while (uVar4 < uVar2 - 3);
  }
  for (; uVar4 < uVar2; uVar4 = uVar4 + 1) {
    param_2->begin_itr_[uVar4] =
         (this->previous_output_ - param_1->begin_itr_[uVar4]) * this->coefficient_ +
         param_1->begin_itr_[uVar4];
    this->previous_output_ = param_2->begin_itr_[uVar4];
  }
  return true;
}

// SetCoefficient @ 14f0759d0

void __thiscall vraudio::MonoPoleFilter::SetCoefficient(MonoPoleFilter *this,float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->coefficient_ = param_1;
  return;
}

